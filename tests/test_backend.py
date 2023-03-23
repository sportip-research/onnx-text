import onnx
import pytest

import onnxbuilder._backend as b
import onnxbuilder._frontend as f


@pytest.mark.parametrize(
    "code, expect_context, expect_graph",
    [
        (
            'org.example.f(""):f4',
            b.Context(
                [],
                [
                    b.Node(
                        "f",
                        [b.EmptyValue],
                        [b.Value("f4", None, "root/unnamed_value_0")],
                        {},
                        "org.example",
                        "root/node_0",
                    ),
                ],
                [b.Value("f4", None, "root/unnamed_value_0")],
            ),
            {
                "nodes": [
                    onnx.helper.make_node(
                        "f",
                        [""],
                        ["root/unnamed_value_0"],
                        "root/node_0",
                        domain="org.example",
                    ),
                ],
                "inputs": [],
                "outputs": [
                    onnx.helper.make_tensor_value_info("root/unnamed_value_0", 1, None)
                ],
                "initializer": [],
                "value_info": [],
            },
        ),
        (
            "a:f4\nNeg(Abs(a):f4):f4,a",
            b.Context(
                [b.Value("f4", None, "a")],
                [
                    b.Node(
                        "Abs",
                        [b.Value("f4", None, "a")],
                        [b.Value("f4", None, "root/unnamed_value_0")],
                        {},
                        None,
                        "root/node_0",
                    ),
                    b.Node(
                        "Neg",
                        [b.Value("f4", None, "root/unnamed_value_0")],
                        [b.Value("f4", None, "root/unnamed_value_1")],
                        {},
                        None,
                        "root/node_1",
                    ),
                ],
                [b.Value("f4", None, "root/unnamed_value_1"), b.Value("f4", None, "a")],
            ),
            {
                "nodes": [
                    onnx.helper.make_node(
                        "Abs", ["a"], ["root/unnamed_value_0"], "root/node_0"
                    ),
                    onnx.helper.make_node(
                        "Neg",
                        ["root/unnamed_value_0"],
                        ["root/unnamed_value_1"],
                        "root/node_1",
                    ),
                ],
                "inputs": [onnx.helper.make_tensor_value_info("a", 1, None)],
                "outputs": [
                    onnx.helper.make_tensor_value_info("root/unnamed_value_1", 1, None),
                    onnx.helper.make_tensor_value_info("a", 1, None),
                ],
                "initializer": [],
                "value_info": [
                    onnx.helper.make_tensor_value_info("root/unnamed_value_0", 1, None)
                ],
            },
        ),
    ],
)
def test_context(
    code: str, expect_context: b.Context, expect_graph: b.GraphInfo
) -> None:
    parsed = f.parse(code)
    context = b.Context.from_parsed_graph(parsed)
    context.generate_name()
    assert context == expect_context
    graph = context.to_graph_info()
    assert graph == expect_graph


def test_subgraph() -> None:
    code = "x:f4\nf(a={g(x):f4}):f4"
    parsed = f.parse(code)
    context = b.Context.from_parsed_graph(parsed)
    context.generate_name()

    assert context.outputs[0].name == "root/unnamed_value_0"
    assert (
        context.nodes[0].attrs["a"].outputs[0].name == "root/node_0/a/unnamed_value_0"
    )
