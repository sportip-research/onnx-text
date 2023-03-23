from typing import Any

import onnx

from . import _backend, _frontend


def to_graph(
    code: str, name: str = "root", doc_string: str | None = None
) -> onnx.GraphProto:
    parsed = _frontend.parse(code)
    context = _backend.Context.from_parsed_graph(parsed)
    context.generate_name(prefix=name)
    graph_info = context.to_graph_info()
    return onnx.helper.make_graph(name=name, doc_string=doc_string, **graph_info)


def to_model(
    code: str, name: str = "root", doc_string: str | None = None, **kwargs: Any
) -> onnx.ModelProto:
    return _make_model_with_shape_inference(to_graph(code, name, doc_string), **kwargs)


def _make_model_with_shape_inference(
    graph: onnx.GraphProto, **kwargs: Any
) -> onnx.ModelProto:
    return onnx.shape_inference.infer_shapes(
        onnx.helper.make_model(graph, **kwargs), check_type=True, strict_mode=True
    )
