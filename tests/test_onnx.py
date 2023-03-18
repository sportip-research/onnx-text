from typing import Any

import numpy as np
import numpy.typing as npt
import onnx
import onnxruntime
import pytest
from pytest_lazyfixture import lazy_fixture

from onnxbuilder import Graph


@pytest.fixture
def simple_model() -> onnx.ModelProto:
    g = Graph("simple")
    x = g.value(np.float32, (3,), "x")
    y = g.node("Abs", inputs=[x], outputs=g.value(np.float32, "y"))
    return g.as_model(inputs=[x], outputs=[y])


@pytest.fixture
def if_model() -> onnx.ModelProto:
    g = Graph("if")
    x = g.value(np.float32, (), "x")
    thresh = g.const(np.array(1, np.float32), "thresh")
    cond = g.node("Greater", inputs=[x, thresh], outputs=g.value(np.bool_, ()))

    then_g = Graph("then", prefix="then/")
    then_output = then_g.node("Identity", inputs=[x], outputs=then_g.value_like(x))

    else_g = Graph("else", prefix="else/")
    else_output = else_g.node(
        "Identity", inputs=[thresh], outputs=else_g.value_like(thresh)
    )

    y = g.node(
        "If",
        inputs=[cond],
        outputs=g.value(np.float32, ()),
        then_branch=then_g.as_graph(inputs=[], outputs=[then_output]),
        else_branch=else_g.as_graph(inputs=[], outputs=[else_output]),
    )
    return g.as_model(inputs=[x], outputs=[y])


@pytest.mark.parametrize(
    "model, inputs, expects",
    [
        (
            lazy_fixture("simple_model"),
            [np.array([-1, 0, 1], np.float32)],
            [np.array([1, 0, 1], np.float32)],
        ),
        (
            lazy_fixture("if_model"),
            [np.array(0, np.float32)],
            [np.array(1, np.float32)],
        ),
        (
            lazy_fixture("if_model"),
            [np.array(1, np.float32)],
            [np.array(1, np.float32)],
        ),
        (
            lazy_fixture("if_model"),
            [np.array(2, np.float32)],
            [np.array(2, np.float32)],
        ),
    ],
)
def test_run_model(
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
