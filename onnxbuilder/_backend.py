import dataclasses
import itertools
from typing import Any, Mapping, Sequence, TypedDict, TypeGuard

import numpy as np
import numpy.typing as npt
import onnx
import onnx.numpy_helper

from . import _frontend


@dataclasses.dataclass
class Value:
    dtype: str
    shape: Sequence[int | str | None] | None = None
    name: str | None = None
    value: npt.ArrayLike | None = None

    def to_value_info(self) -> onnx.ValueInfoProto:
        elem_type = onnx.helper.np_dtype_to_tensor_dtype(np.dtype(self.dtype))
        assert self.name is not None
        return onnx.helper.make_tensor_value_info(self.name, elem_type, self.shape)

    def to_tensor(self) -> onnx.TensorProto:
        return onnx.numpy_helper.from_array(np.array(self.value, self.dtype), self.name)


EmptyValue = Value("", name="")


@dataclasses.dataclass
class Node:
    op_type: str
    inputs: Sequence[Value]
    outputs: Sequence[Value]
    attrs: Mapping[str, Any]
    domain: str | None = None
    name: str | None = None

    def to_node(self) -> onnx.NodeProto:
        inputs = [v.name for v in self.inputs]
        assert _is_str_list(inputs)
        outputs = [v.name for v in self.outputs]
        assert _is_str_list(outputs)

        attrs = {}
        for k, v in self.attrs.items():
            if isinstance(v, Context):
                v = onnx.helper.make_graph(name=f"{self.name}/{k}", **v.to_graph_info())
            elif isinstance(v, _frontend.Tensor):
                v = onnx.numpy_helper.from_array(np.array(v.value, v.dtype))
            attrs[k] = v

        return onnx.helper.make_node(
            self.op_type, inputs, outputs, name=self.name, domain=self.domain, **attrs
        )


class GraphInfo(TypedDict):
    nodes: Sequence[onnx.NodeProto]
    inputs: Sequence[onnx.ValueInfoProto]
    outputs: Sequence[onnx.ValueInfoProto]
    initializer: Sequence[onnx.TensorProto]
    value_info: Sequence[onnx.ValueInfoProto]


@dataclasses.dataclass
class Context:
    inputs: list[Value] = dataclasses.field(default_factory=list)
    nodes: list[Node] = dataclasses.field(default_factory=list)
    outputs: list[Value] = dataclasses.field(default_factory=list)
    parent: "Context | None" = None
    _named_values: dict[str, Value] = dataclasses.field(
        default_factory=dict, init=False, compare=False, repr=False
    )

    @staticmethod
    def from_parsed_graph(
        graph: _frontend.Graph, parent: "Context | None" = None
    ) -> "Context":
        ctx = Context(parent=parent)
        for input_decl in graph.inputs:
            _process(ctx, input_decl)
        for expr in graph.exprs:
            ctx.outputs = [v for e in expr for v in _process(ctx, e)]
        return ctx

    def generate_name(self, prefix: str = "root") -> None:
        count = 0
        for node in self.nodes:
            node.name = f"{prefix}/node_{count}"
            count += 1

        count = 0
        for node in self.nodes:
            for val in itertools.chain(node.inputs, node.outputs):
                if val.name is None:
                    val.name = f"{prefix}/unnamed_value_{count}"
                    count += 1

        for node in self.nodes:
            for k, v in node.attrs.items():
                if isinstance(v, Context):
                    v.generate_name(f"{node.name}/{k}")

    def to_graph_info(self, prefix: str = "") -> GraphInfo:
        nodes = []
        for node in self.nodes:
            nodes.append(node.to_node())

        inputs = []
        for val in self.inputs:
            inputs.append(val.to_value_info())

        outputs = []
        for val in self.outputs:
            outputs.append(val.to_value_info())

        inout_names = {val.name for val in itertools.chain(inputs, outputs)}
        initializer = []
        initializer_names = set()
        value_info = []
        for node in self.nodes:
            for val in node.inputs:
                if val.value is not None and val.name not in initializer_names:
                    initializer.append(val.to_tensor())
                    initializer_names.add(val.name)
            for val in node.outputs:
                if val.name not in inout_names:
                    value_info.append(val.to_value_info())

        return GraphInfo(
            nodes=nodes,
            inputs=inputs,
            outputs=outputs,
            initializer=initializer,
            value_info=value_info,
        )


def _process(ctx: Context, expr: Any) -> Sequence[Value]:
    match expr:
        case _frontend.InputDecl(name, type_info):
            value = Value(type_info.dtype, type_info.shape, name)
            ctx._named_values[name] = value
            ctx.inputs.append(value)
            return [value]
        case _frontend.Assign(lhs, rhs):
            rhs_values = _process(ctx, rhs)
            assert len(lhs) == len(rhs_values)
            ret = []
            for new_name, value in zip(lhs, rhs_values):
                if value.name is None:
                    value.name = new_name
                    ctx._named_values[new_name] = value
                    ret.append(value)
                elif value.name != new_name:
                    new_value = Value(value.dtype, value.shape, new_name)
                    ctx._named_values[new_name] = new_value
                    ctx.nodes.append(Node("Identity", [value], [new_value], {}))
                    ret.append(new_value)
                else:
                    raise RuntimeError(f"same name: {new_name}")
            return ret
        case _frontend.Node(op_type, inputs, output_types, attrs):
            if "." in op_type:
                domain, op_type = op_type.rsplit(".", 1)
            else:
                domain = None

            input_values: list[Value] = []
            for i in inputs:
                input_values.extend(_process(ctx, i))

            outputs = [Value(t.dtype, t.shape) for t in output_types]

            attrs = {k: _process_attr(ctx, v) for k, v in attrs.items()}

            ctx.nodes.append(Node(op_type, input_values, outputs, attrs, domain))
            return outputs
        case _frontend.Tensor(value, dtype):
            return [Value(dtype, value=value)]
        case str(name):
            if name == "":
                return [EmptyValue]
            if name in ctx._named_values:
                return [ctx._named_values[name]]
            if ctx.parent is not None and name in ctx.parent._named_values:
                return [ctx.parent._named_values[name]]
            raise RuntimeError(f"value not found: {name}")
        case other:
            raise RuntimeError(f"unsupported expr: {other}")


def _process_attr(ctx: Context, attr_value: Any) -> Any:
    if isinstance(attr_value, _frontend.Graph):
        return Context.from_parsed_graph(attr_value, ctx)
    return attr_value


def _is_str_list(val: list[Any]) -> TypeGuard[list[str]]:
    return all(isinstance(x, str) for x in val)
