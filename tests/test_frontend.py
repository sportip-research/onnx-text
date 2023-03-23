from typing import Any

import numpy as np
import pyparsing as pp
import pytest

import onnxbuilder._frontend as f


def idfn(val: Any) -> str | None:
    if isinstance(val, pp.ParserElement):
        return val.name
    return None


f4 = f.TypeInfo("f4")


@pytest.mark.parametrize(
    "expr, code, expect",
    [
        (f.type_info, "f4", f4),
        (f.type_info, "f4[]", f.TypeInfo("f4", [])),
        (f.type_info, "f4[1]", f.TypeInfo("f4", [1])),
        (f.type_info, "f4[?]", f.TypeInfo("f4", [None])),
        (f.type_info, "f4[N,?,4]", f.TypeInfo("f4", ["N", None, 4])),
        (f.tensor, "[0,NAN]:f4", f.Tensor([0, np.nan], "f4")),
        (f.tensor, "UINT16_MAX:i4", f.Tensor(65535, "i4")),
        (f.tensor, "[[0,1],[2,3]]:f4", f.Tensor([[0, 1], [2, 3]], "f4")),
        (f.attrs, "x=0", {"x": 0}),
        (f.attrs, "x=0,", {"x": 0}),
        (f.attrs, 'x=0,y="s",z=[0.5]', {"x": 0, "y": "s", "z": [0.5]}),
        (f.attrs, "x={},", {"x": f.Graph()}),
        (f.attrs, "x=[0]:f4", {"x": f.Tensor([0], "f4")}),
        (f.node, "f():f4", f.Node("f", [], [f4])),
        (f.node, 'f(""):f4', f.Node("f", [""], [f4])),
        (f.node, "custom.f():f4", f.Node("custom.f", [], [f4])),
        (f.node, "f():(f4,f4)", f.Node("f", [], [f4, f4])),
        (f.node, "f(a,b):f4", f.Node("f", ["a", "b"], [f4])),
        (
            f.node,
            "f(x=0,y=1):f4",
            f.Node("f", [], [f4], {"x": 0, "y": 1}),
        ),
        (
            f.node,
            "f(a,b,x=0,y=1):(f4,f4)",
            f.Node("f", ["a", "b"], [f4, f4], {"x": 0, "y": 1}),
        ),
        (
            f.node,
            "f(x=0:f4):f4",
            f.Node("f", [], [f4], {"x": f.Tensor(0, "f4")}),
        ),
        (f.inputs_decl, "a:f4\nb:f4", [f.InputDecl("a", f4), f.InputDecl("b", f4)]),
        (
            f.inputs_decl,
            "a:f8\nb:i4",
            [f.InputDecl("a", f.TypeInfo("f8")), f.InputDecl("b", f.TypeInfo("i4"))],
        ),
        (f.assign, "a=f(x):f4", f.Assign(["a"], f.Node("f", ["x"], [f4]))),
        (f.assign, "a,b=f(x):f4", f.Assign(["a", "b"], f.Node("f", ["x"], [f4]))),
        (f.graph, "a:f4", f.Graph([f.InputDecl("a", f4)])),
        (f.graph, "a:f4\nb:f4", f.Graph([f.InputDecl("a", f4), f.InputDecl("b", f4)])),
        (f.graph, "a:f4\na", f.Graph([f.InputDecl("a", f4)], [["a"]])),
        (f.graph, "a:f4\na,b", f.Graph([f.InputDecl("a", f4)], [["a", "b"]])),
        (
            f.graph,
            "b=f(a):f4,c=g(b):f4\nb,c",
            f.Graph(
                [],
                [
                    [
                        f.Assign(["b"], f.Node("f", ["a"], [f4])),
                        f.Assign(["c"], f.Node("g", ["b"], [f4])),
                    ],
                    ["b", "c"],
                ],
            ),
        ),
    ],
    ids=idfn,
)
def test_parse(expr: pp.ParserElement, code: str, expect: Any) -> None:
    results = expr.parse_string(code, parse_all=True)
    if isinstance(results, pp.ParseResults):
        assert len(results) == 1
        results = results[0]
    assert results == expect
