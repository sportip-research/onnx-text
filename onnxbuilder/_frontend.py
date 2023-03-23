import dataclasses
from typing import Any, Callable, Mapping, Sequence, TypeVar

import numpy as np
import pyparsing as pp

pp.ParserElement.enable_packrat()

T = TypeVar("T")


@dataclasses.dataclass
class TypeInfo:
    dtype: str
    shape: Sequence[int | str | None] | None = None


@dataclasses.dataclass
class InputDecl:
    name: str
    type_info: TypeInfo


@dataclasses.dataclass
class Assign:
    lhs: Sequence[Any]
    rhs: Any


@dataclasses.dataclass
class Node:
    op_type: str
    inputs: Sequence[Any] = dataclasses.field(default_factory=list)
    output_types: Sequence[TypeInfo] = dataclasses.field(default_factory=list)
    attrs: Mapping[str, Any] = dataclasses.field(default_factory=dict)


@dataclasses.dataclass
class Tensor:
    value: Any
    dtype: str


@dataclasses.dataclass
class Graph:
    inputs: Sequence[InputDecl] = dataclasses.field(default_factory=list)
    exprs: Sequence[Sequence[Any]] = dataclasses.field(default_factory=list)


def return_none() -> pp.ParseResults:
    return pp.ParseResults([None])  # type:ignore[no-untyped-call]


def list_expr(expr: pp.ParserElement) -> pp.ParserElement:
    return (
        pp.Suppress("[")
        + pp.Group(pp.delimited_list(expr), aslist=True)
        + pp.Suppress("]")
    )


def from_token(cls: type[T], *fs: str) -> Callable[[pp.ParseResults], T]:
    def action(toks: pp.ParseResults) -> T:
        d = toks.as_dict()
        kwargs = {}
        for f in fs:
            if f in d:
                kwargs[f] = d[f]
        return cls(**kwargs)

    return action


graph = pp.Forward().set_name("graph")

integer = pp.pyparsing_common.integer()
signed_integer = pp.pyparsing_common.signed_integer()
real = pp.pyparsing_common.sci_real() | pp.pyparsing_common.real()

number = pp.pyparsing_common.number()
identifier = pp.pyparsing_common.identifier()

num_constant_exprs = [pp.Literal("NAN").set_parse_action(lambda: np.nan)]
for typestr in [
    "uint8",
    "int8",
    "uint16",
    "int16",
    "uint32",
    "int32",
    "uint64",
    "int64",
    "float16",
    "float32",
    "float64",
]:
    if np.issubdtype(typestr, np.integer):
        min_action = pp.replace_with(
            np.iinfo(typestr).min
        )  # type:ignore[no-untyped-call]
        max_action = pp.replace_with(
            np.iinfo(typestr).max
        )  # type:ignore[no-untyped-call]
    else:
        min_action = pp.replace_with(
            np.finfo(typestr).min
        )  # type:ignore[no-untyped-call]
        max_action = pp.replace_with(
            np.finfo(typestr).max
        )  # type:ignore[no-untyped-call]
    num_constant_exprs.extend(
        [
            pp.Literal(f"{typestr}_min".upper()).set_parse_action(min_action),
            pp.Literal(f"{typestr}_max".upper()).set_parse_action(max_action),
        ]
    )
number_constants = pp.Or(num_constant_exprs)

dtype = pp.Word(pp.alphanums + "?").set_name("dtype")
dim = (pp.Char("?").set_parse_action(return_none) | integer | identifier).set_name(
    "dim"
)
shape = (pp.Suppress("[") + pp.Opt(pp.delimited_list(dim)) + pp.Suppress("]")).set_name(
    "shape"
)
type_info = (
    (dtype("dtype") + pp.Opt(shape)("shape"))
    .set_name("type_info")
    .set_parse_action(from_token(TypeInfo, "dtype", "shape"))
)

expr = pp.Forward().set_name("expr")

tensor_value = pp.Forward().set_name("tensor_value")
tensor_value <<= (
    number
    | number_constants
    | pp.Group(
        pp.Suppress("[") + pp.delimited_list(tensor_value) + pp.Suppress("]"),
        aslist=True,
    )
)  # type:ignore[operator]
tensor = (
    (tensor_value("value") + ":" + dtype("dtype"))
    .set_name("tensor")
    .set_parse_action(from_token(Tensor, "value", "dtype"))
)


attr_f = real
attr_floats = list_expr(attr_f)
attr_g = pp.Suppress("{") + graph + pp.Suppress("}")
attr_graphs = list_expr(attr_g)
attr_i = signed_integer
attr_ints = list_expr(attr_i)
attr_s = pp.Suppress('"') + identifier + pp.Suppress('"')
attr_strings = list_expr(attr_s)
attr_t = tensor()
attr_tensors = list_expr(attr_t)
attr_value = (
    attr_t
    | attr_tensors
    | attr_f
    | attr_floats
    | attr_g
    | attr_graphs
    | attr_i
    | attr_ints
    | attr_s
    | attr_strings
).set_name("attr_value")
attrs = (
    pp.delimited_list(
        pp.Group(identifier + pp.Suppress("=") + attr_value), allow_trailing_delim=True
    )
    .set_name("attrs")
    .set_results_name("attrs")
    .set_parse_action(lambda toks: dict(toks.as_list()))
)


node_full_op_type = pp.Word(pp.identchars, pp.identbodychars + ".").set_name(
    "node_full_op_type"
)
node_inputs = (
    pp.delimited_list(
        (expr | pp.Literal('""').set_parse_action(lambda: "")) + pp.NotAny("=")
    )
    .set_name("inputs")
    .set_results_name("inputs")
)
node = (
    (
        node_full_op_type("op_type")
        + "("
        + (node_inputs + "," + attrs | node_inputs + pp.Opt(",") | attrs | pp.empty)
        + ")"
        + ":"
        + (
            pp.Group(type_info)("output_types")
            | "(" + pp.delimited_list(type_info)("output_types") + ")"
        )
    )
    .set_name("node")
    .set_parse_action(from_token(Node, "op_type", "inputs", "output_types", "attrs"))
)

expr <<= node | tensor | identifier  # type:ignore[operator]

assign = (
    (pp.delimited_list(identifier)("lhs") + "=" + node("rhs"))
    .set_name("assign")
    .set_parse_action(from_token(Assign, "lhs", "rhs"))
)

input_decl = (
    (identifier("name") + ":" + type_info("type_info"))
    .set_name("input_decl")
    .set_parse_action(from_token(InputDecl, "name", "type_info"))
)
inputs_decl = pp.Group(input_decl[...], aslist=True).set_name("inputs_decl")
inputs_decl = (
    pp.Group(input_decl[...])
    .set_name("inputs_decl")
    .set_parse_action(pp.ParseResults.as_list)
)
exprs = pp.Group(pp.delimited_list(assign | expr, allow_trailing_delim=True))[...]
graph <<= inputs_decl("inputs") + exprs("exprs")
graph.set_parse_action(from_token(Graph, "inputs", "exprs")).ignore(
    pp.python_style_comment
)


def parse(instring: str) -> Graph:
    toks: pp.ParseResults = graph.parse_string(instring, True)
    assert isinstance(toks[0], Graph)
    return toks[0]
