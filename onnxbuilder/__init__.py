import itertools
from typing import Any, Sequence, overload

import numpy as np
import numpy.typing as npt
import onnx
import onnx.numpy_helper


class Graph:
    """ONNX graph containing nodes and values"""

    name: str
    "graph name"

    doc_string: str | None
    "graph documentation"

    prefix: str
    "prefix for value and node names"

    _nodes: list[onnx.NodeProto]
    _initializers: list[onnx.TensorProto]
    _value_infos: list[onnx.ValueInfoProto]
    _name_count: int

    def __init__(
        self, name: str, doc_string: str | None = None, prefix: str = ""
    ) -> None:
        self.name = name
        self.doc_string = doc_string
        self.prefix = prefix
        self._nodes = []
        self._initializers = []
        self._value_infos = []
        self._name_count = 0

    def value(
        self,
        elem_type: int | Any,
        shape: Sequence[str | int | None] | None = None,
        name: str | None = None,
        doc_string: str = "",
        shape_denotation: list[str] | None = None,
    ) -> onnx.ValueInfoProto:
        """Make a value

        :param elem_type: onnx defined type such as ``onnx.TensorProto.FLOAT``
            or any object convertible to ``np.dtype``
        :param shape: tensor shape
        :param name: value name
            (if not specified, the name will be generated automatically)
        :param doc_string: value documentation
        :param shape_denotation: dim documentation
        :return: new ValueInfoProto
        """

        name = self._make_value_name(name)
        if not isinstance(elem_type, int):
            elem_type = onnx.helper.np_dtype_to_tensor_dtype(np.dtype(elem_type))

        ret = onnx.helper.make_tensor_value_info(
            name, elem_type, shape, doc_string, shape_denotation
        )
        self._value_infos.append(ret)
        return ret

    def tensor(
        self,
        value: npt.ArrayLike,
        name: str | None = None,
    ) -> onnx.TensorProto:
        """Make a constant tensor

        :param name: value name
            (if not specified, the name will be generated automatically)
        :return: new TensorProto
        """

        name = self._make_value_name(name)
        ret = onnx.numpy_helper.from_array(np.asarray(value), name)
        self._initializers.append(ret)
        return ret

    @overload
    def node(
        self,
        op_type: str,
        inputs: Sequence[onnx.ValueInfoProto | onnx.TensorProto | None],
        outputs: onnx.ValueInfoProto,
        name: str | None = None,
        doc_string: str | None = None,
        domain: str | None = None,
        **attrs: Any,
    ) -> onnx.ValueInfoProto:
        ...

    @overload
    def node(
        self,
        op_type: str,
        inputs: Sequence[onnx.ValueInfoProto | onnx.TensorProto | None],
        outputs: Sequence[onnx.ValueInfoProto],
        name: str | None = None,
        doc_string: str | None = None,
        domain: str | None = None,
        **attrs: Any,
    ) -> Sequence[onnx.ValueInfoProto]:
        ...

    def node(
        self,
        op_type: str,
        inputs: Sequence[onnx.ValueInfoProto | onnx.TensorProto | None],
        outputs: onnx.ValueInfoProto | Sequence[onnx.ValueInfoProto],
        name: str | None = None,
        doc_string: str | None = None,
        domain: str | None = None,
        **attrs: Any,
    ) -> onnx.ValueInfoProto | Sequence[onnx.ValueInfoProto]:
        """Make a node and add it to the graph

        :param op_type: operator name
        :param inputs: list of input values
        :param outputs: list of output values
        :param name: node name
        :param doc_string: node documentation
        :param domain: node domain
        :param attrs: attributes of the node
        :return: single output value or list of output values
        """

        if name is not None:
            name = f"{self.prefix}{name}"

        input_names = ["" if i is None else i.name for i in inputs]
        output_names = [
            i.name for i in (outputs if isinstance(outputs, Sequence) else [outputs])
        ]
        self._nodes.append(
            onnx.helper.make_node(
                op_type, input_names, output_names, name, doc_string, domain, **attrs
            )
        )
        return outputs

    def build(
        self,
        inputs: Sequence[onnx.ValueInfoProto],
        outputs: Sequence[onnx.ValueInfoProto],
    ) -> onnx.GraphProto:
        """Export as ONNX graph

        :param inputs: list of input values
        :param outputs: list of output values
        :return: new graph
        """

        value_infos = {val.name: val for val in self._value_infos}
        for val in itertools.chain(inputs, outputs):
            value_infos.pop(val.name, None)

        return onnx.helper.make_graph(
            self._nodes,
            self.name,
            inputs,
            outputs,
            self._initializers,
            self.doc_string,
            list(value_infos.values()),
        )

    def _make_value_name(self, name: str | None) -> str:
        if name is None:
            name = f"value_{self._name_count}"
            self._name_count += 1
        return self.prefix + name


def make_model_with_shape_inference(
    graph: onnx.GraphProto, **kwargs: Any
) -> onnx.ModelProto:
    """Construct a model with shape inference

    :param graph: graph
    :param kwargs: any attribute to add to the model
    :return: shape inferenced model
    """

    return onnx.shape_inference.infer_shapes(onnx.helper.make_model(graph, **kwargs))
