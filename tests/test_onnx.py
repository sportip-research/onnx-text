import functools
from typing import Any

import numpy as np
import numpy.typing as npt
import onnx
import onnxruntime
import pytest

from onnxbuilder import Graph


@functools.cache
def simple_model() -> onnx.ModelProto:
    g = Graph("simple")
    x = g.value(np.float32, (3,), "x")
    y = g.node("Abs", inputs=[x], outputs=g.value_like(x, "y"))
    return g.as_model(inputs=[x], outputs=[y])


@functools.cache
def if_model() -> onnx.ModelProto:
    g = Graph("if")
    x = g.value(np.float32, (1,), "x")
    thresh = g.const(np.array([1], np.float32), "thresh")
    cond = g.node("Greater", inputs=[x, thresh], outputs=g.value(np.bool_, (1,)))

    then_g = Graph("then", prefix="then/")
    then_output = then_g.node("Identity", inputs=[x], outputs=then_g.value_like(x))

    else_g = Graph("else", prefix="else/")
    else_output = else_g.node(
        "Identity", inputs=[thresh], outputs=else_g.value_like(thresh)
    )

    y = g.node(
        "If",
        inputs=[cond],
        outputs=g.value(np.float32, (1,)),
        then_branch=then_g.as_graph(inputs=[], outputs=[then_output]),
        else_branch=else_g.as_graph(inputs=[], outputs=[else_output]),
    )
    return g.as_model(inputs=[x], outputs=[y])


def idfn(val: Any) -> str | None:
    if isinstance(val, (onnx.ModelProto)):
        return val.graph.name
    return None


@pytest.mark.parametrize(
    "model, inputs, expects",
    [
        (
            simple_model(),
            [np.array([-1, 0, 1], np.float32)],
            [np.array([1, 0, 1], np.float32)],
        ),
        (
            if_model(),
            [np.array([0], np.float32)],
            [np.array([1], np.float32)],
        ),
        (
            if_model(),
            [np.array([1], np.float32)],
            [np.array([1], np.float32)],
        ),
        (
            if_model(),
            [np.array([2], np.float32)],
            [np.array([2], np.float32)],
        ),
    ],
    ids=idfn,
)
def test_model(
    model: onnx.ModelProto,
    inputs: list[npt.NDArray[Any]],
    expects: list[npt.NDArray[Any]],
) -> None:
    session = onnxruntime.InferenceSession(
        model.SerializeToString(), providers=["CPUExecutionProvider"]
    )
    input_names = [v.name for v in session.get_inputs()]
    outputs = session.run(None, dict(zip(input_names, inputs)))
    np.testing.assert_allclose(outputs, expects)
