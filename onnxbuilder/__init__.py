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
    "prefix for auto name"

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
        shape: Sequence[str | int | None] | None,
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

        if isinstance(elem_type, int):
            elem_type_int = elem_type
        else:
            elem_type_int = onnx.helper.np_dtype_to_tensor_dtype(np.dtype(elem_type))

        ret = onnx.helper.make_tensor_value_info(
            self._make_name(name), elem_type_int, shape, doc_string, shape_denotation
        )
        self._value_infos.append(ret)
        return ret

    def value_like(
        self,
        value: onnx.ValueInfoProto,
        name: str | None = None,
        doc_string: str = "",
    ) -> onnx.ValueInfoProto:
        """Make a value with same type and shape of the given value

        :param value: reference of type and shape
        :param name: value name
            (if not specified, the name will be generated automatically)
        :param doc_string: value documentation
        :return: new ValueInfoProto
        """

        ret = onnx.helper.make_value_info(self._make_name(name), value.type, doc_string)
        self._value_infos.append(ret)
        return ret

    def const(
        self,
        arr: npt.NDArray[Any],
        name: str | None = None,
        doc_string: str = "",
        shape_denotation: list[str] | None = None,
    ) -> onnx.ValueInfoProto:
        """Make a value with Initializer

        :param arr: Initializer value
        :param name: value name
            (if not specified, the name will be generated automatically)
        :param doc_string: value documentation
        :param shape_denotation: dim documentation
        :return: new ValueInfoProto
        """

        tensor = onnx.numpy_helper.from_array(arr)
        self._initializers.append(tensor)

        ret = self.value(
            tensor.data_type, tensor.dims, name, doc_string, shape_denotation
        )
        tensor.name = ret.name
        return ret

    @overload
    def node(
        self,
        op_type: str,
        inputs: Sequence[onnx.ValueInfoProto | None],
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
        inputs: Sequence[onnx.ValueInfoProto | None],
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
        inputs: Sequence[onnx.ValueInfoProto | None],
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

    def as_graph(
        self,
        inputs: Sequence[onnx.ValueInfoProto],
        outputs: Sequence[onnx.ValueInfoProto],
    ) -> onnx.GraphProto:
        """Export as ONNX graph

        :param inputs: list of input values
        :param outputs: list of output values
        :return: new graph
        """

        return onnx.helper.make_graph(
            self._nodes,
            self.name,
            inputs,
            outputs,
            self._initializers,
            self.doc_string,
            self._value_infos,
        )

    def as_model(
        self,
        inputs: Sequence[onnx.ValueInfoProto],
        outputs: Sequence[onnx.ValueInfoProto],
        opset: int | None = None,
        **kwargs: Any,
    ) -> onnx.ModelProto:
        """Export as ONNX model

        :param inputs: list of input values
        :param outputs: list of output values
        :param opset: opset version
        :return: new model
        """

        if opset is not None:
            kwargs["opset_imports"] = [onnx.helper.make_opsetid("", opset)]
        return onnx.helper.make_model(self.as_graph(inputs, outputs), **kwargs)

    def _make_name(self, name: str | None) -> str:
        if name is None:
            name = f"{self.prefix}value_{self._name_count}"
            self._name_count += 1
            return name
        return name
