import collections
import dataclasses
import importlib.metadata
import warnings
from typing import Any, TypeGuard, cast

import onnx

from .constants import NUMERIC_CONSTANTS

with warnings.catch_warnings():
    warnings.filterwarnings(
        "ignore", "The distutils package is deprecated", DeprecationWarning
    )
    warnings.filterwarnings(
        "ignore", "The distutils.sysconfig module is deprecated", DeprecationWarning
    )
    from tree_sitter import Language, Node, Parser, Tree

parser_lib = importlib.metadata.distribution("onnx_text").locate_file(
    "onnx_text/parser"
)
parser = Parser()
parser.set_language(Language(str(parser_lib), "onnx_text"))


ATTRIBUTE_TYPE_ID = dict(onnx.AttributeProto.AttributeType.items())
DATA_TYPE_ID = dict(onnx.TensorProto.DataType.items())


class UnexpectedNodeError(RuntimeError):
    def __init__(self, node: Node) -> None:
        super().__init__(f"unexpected node: {node}")
        self.node = node


def to_ast(code: bytes) -> Tree:
    return parser.parse(code)


def check_node(node: Node) -> None:
    if node.type == "ERROR":
        raise ValueError(f"parse error: {node}")
    for child in node.children:
        check_node(child)


def parse_model(node: Node) -> onnx.ModelProto:
    if node.type == "source_file":
        node = get_child_by_type_exact1(node, "model")
    else:
        assert node.type == "model"

    fields = parse_other_data_list(get_child_by_type(node, "other_data_list"))
    if "metadata_props" in fields:
        props = fields.pop("metadata_props")
    else:
        props = {}

    graph = parse_graph(get_child_by_type_exact1(node, "graph"))

    fields["functions"] = [
        parse_function(i) for i in get_children_by_type(node, "function")
    ]

    model = onnx.helper.make_model(graph, **fields)
    onnx.helper.set_model_props(model, props)
    return model


def parse_other_data_list(node: Node | None) -> dict[str, Any]:
    if node is None:
        return {}

    assert node.type == "other_data_list"

    ret = dict(parse_other_data(i) for i in get_children_by_type(node, "other_data"))
    if "opset_import" in ret:
        ret["opset_imports"] = [
            onnx.helper.make_opsetid(domain, version)
            for domain, version in ret.pop("opset_import").items()
        ]
    return ret


def parse_other_data(node: Node) -> tuple[str, Any]:
    assert node.type == "other_data"

    name = parse_id(get_child_by_field_name_exact1(node, "name"))
    value_node = get_child_by_field_name_exact1(node, "value")
    match value_node.type:
        case "prim_constant":
            value = parse_prim_constant(value_node)
        case "key_value_list":
            value = parse_key_value_list(value_node)
        case _:
            raise UnexpectedNodeError(value_node)
    return name, value


def parse_key_value_list(node: Node) -> dict[str, Any]:
    assert node.type == "key_value_list"
    return dict(
        parse_key_value_pair(i) for i in get_children_by_type(node, "key_value_pair")
    )


def parse_key_value_pair(node: Node) -> tuple[str, Any]:
    assert node.type == "key_value_pair"
    key = parse_str_constant(get_child_by_field_name_exact1(node, "key"))
    value = parse_prim_constant(get_child_by_field_name_exact1(node, "value"))
    return key, value


def parse_id(node: Node) -> str:
    assert node.type == "id"
    return node.text.decode()


def parse_str_constant(node: Node) -> str:
    assert node.type == "str_constant"
    return node.text.decode().strip('"')


def parse_float_constant(node: Node) -> float:
    assert node.type == "float_constant"
    return float(node.text.decode())


def parse_int_constant(node: Node) -> int:
    assert node.type == "int_constant"
    return int(node.text.decode())


def parse_prim_constant(node: Node) -> Any:
    assert node.type == "prim_constant"

    inner = node.named_children[0]
    match inner.type:
        case "str_constant":
            return parse_str_constant(inner)
        case "int_constant":
            return parse_int_constant(inner)
        case "float_constant":
            return parse_float_constant(inner)
        case "id":
            return NUMERIC_CONSTANTS[parse_id(inner)]
    raise UnexpectedNodeError(inner)


@dataclasses.dataclass
class GraphParserContext:
    name: str
    nodes: list[onnx.NodeProto] = dataclasses.field(default_factory=list)
    initializer: list[onnx.TensorProto] = dataclasses.field(default_factory=list)
    value_info: list[onnx.ValueInfoProto] = dataclasses.field(default_factory=list)
    unnamed_counter: collections.Counter[str] = dataclasses.field(
        default_factory=collections.Counter
    )

    def make_name(self, kind: str) -> str:
        i = self.unnamed_counter[kind]
        ret = f"{self.name}/{kind}_{i}"
        self.unnamed_counter[kind] += 1
        return ret


def parse_graph(node: Node) -> onnx.GraphProto:
    assert node.type == "graph"

    name = parse_id(get_child_by_field_name_exact1(node, "name"))
    inputs = parse_value_info_list(get_child_by_field_name_exact1(node, "inputs"))
    outputs = parse_value_info_list(get_child_by_field_name_exact1(node, "outputs"))

    ctx = GraphParserContext(name=name)
    parse_statement_list(get_child_by_field_name_exact1(node, "body"), ctx)

    return onnx.helper.make_graph(
        ctx.nodes,
        ctx.name,
        inputs,
        outputs,
        ctx.initializer,
        None,
        ctx.value_info,
    )


def parse_function(node: Node) -> onnx.FunctionProto:
    if node.type == "source_file":
        node = get_child_by_type_exact1(node, "function")
    else:
        assert node.type == "function"

    fields = parse_other_data_list(get_child_by_type(node, "other_data_list"))
    name = parse_id(get_child_by_field_name_exact1(node, "name"))
    inputs = parse_fun_inut_list(get_child_by_field_name_exact1(node, "inputs"))
    outputs = parse_fun_inut_list(get_child_by_field_name_exact1(node, "outputs"))

    ctx = GraphParserContext(name=name)
    parse_statement_list(get_child_by_field_name_exact1(node, "body"), ctx)

    constant_nodes = []
    for tensor in ctx.initializer:
        constant_nodes.append(
            onnx.helper.make_node(
                "Constant",
                [],
                [tensor.name],
                ctx.make_name("constant_node"),
                value=tensor,
            )
        )
    ctx.initializer.clear()

    return onnx.helper.make_function(
        fields.get("domain", ""),
        name,
        inputs,
        outputs,
        constant_nodes + ctx.nodes,
        fields.get("opset_imports", []),
        None,
        fields.get("doc_string"),
    )


def parse_fun_inut_list(node: Node) -> list[str]:
    assert node.type == "fun_inout_list"
    return [parse_id(i) for i in get_children_by_type(node, "id")]


def parse_value_info_list(node: Node) -> list[onnx.ValueInfoProto]:
    return [parse_value_info(i) for i in get_children_by_type(node, "value_info")]


def parse_value_info(node: Node) -> onnx.ValueInfoProto:
    assert node.type == "value_info"

    type_proto = parse_type(get_child_by_type_exact1(node, "type"))
    name = parse_id(get_child_by_type_exact1(node, "id"))
    return onnx.helper.make_value_info(name, type_proto)


def parse_type(node: Node) -> onnx.TypeProto:
    assert node.type == "type"

    item_node = node.named_children[0]
    match item_node.type:
        case "tensor_type":
            return parse_tensor_type(item_node)
    raise UnexpectedNodeError(node)


def parse_tensor_type(node: Node) -> onnx.TypeProto:
    assert node.type == "tensor_type"
    elem_type = parse_prim_type(get_child_by_type_exact1(node, "prim_type"))
    tensor_dims_node = get_child_by_type(node, "tensor_dims")
    shape = [] if tensor_dims_node is None else parse_tensor_dims(tensor_dims_node)
    return onnx.helper.make_tensor_type_proto(elem_type, shape)


def parse_tensor_dims(node: Node) -> list[str | int | None]:
    assert node.type == "tensor_dims"
    ret = []
    for i in get_children_by_type(node, "tensor_dim"):
        ret.append(parse_tensor_dim(i))
    return ret


def parse_tensor_dim(node: Node) -> str | int | None:
    assert node.type == "tensor_dim"

    inner = node.named_children[0]
    match inner.type:
        case "id":
            return parse_id(inner)
        case "int_constant":
            return parse_int_constant(inner)
        case "unk":
            return None
    raise UnexpectedNodeError(inner)


def parse_prim_type(node: Node) -> int:
    assert node.type == "prim_type"
    key = node.text.decode().upper()
    return DATA_TYPE_ID[key]


def parse_statement_list(node: Node, ctx: GraphParserContext) -> None:
    assert node.type == "statement_list"
    for i in get_children_by_type(node, "statement"):
        parse_statement(i, ctx)


def parse_statement(node: Node, ctx: GraphParserContext) -> None:
    assert node.type == "statement"

    inner = node.named_children[0]
    match inner.type:
        case "node":
            parse_node(inner, ctx)
        case "tensor_constant":
            ctx.initializer.append(parse_tensor_constant(inner, ctx))
        case _:
            raise UnexpectedNodeError(node)


def parse_tensor_constant(node: Node, ctx: GraphParserContext) -> onnx.TensorProto:
    assert node.type == "tensor_constant"

    type_proto = parse_tensor_type(get_child_by_type_exact1(node, "tensor_type"))
    data_type = type_proto.tensor_type.elem_type
    dims = [d.dim_value for d in type_proto.tensor_type.shape.dim]

    id_node = get_child_by_type(node, "id")
    name = ctx.make_name("tensor") if id_node is None else parse_id(id_node)

    vals = parse_prim_constants(get_child_by_type_exact1(node, "prim_constants"))

    return onnx.helper.make_tensor(name, data_type, dims, vals)


def parse_prim_constants(node: Node) -> list[Any]:
    assert node.type == "prim_constants"
    return [parse_prim_constant(i) for i in get_children_by_type(node, "prim_constant")]


def parse_node(node: Node, ctx: GraphParserContext) -> None:
    assert node.type == "node"

    outputs = []
    lhs_node = get_child_by_type_exact1(node, "typed_id_list")
    for i in get_children_by_type(lhs_node, "typed_id"):
        name = parse_id(get_child_by_type_exact1(i, "id"))
        outputs.append(name)

        type_node = get_child_by_type(i, "type")
        if type_node is not None:
            type_proto = parse_type(type_node)
            ctx.value_info.append(onnx.helper.make_value_info(name, type_proto))

    rhs_node = get_child_by_type_exact1(node, "node_call")
    parse_node_call(rhs_node, outputs, ctx)


def parse_node_call(node: Node, outputs: list[str], ctx: GraphParserContext) -> None:
    assert node.type == "node_call"

    qualified_id = parse_qualified_id(get_child_by_type_exact1(node, "qualified_id"))
    op_type = qualified_id[-1]
    domain = ".".join(qualified_id[:-1])

    inputs = parse_node_inputs(get_child_by_type_exact1(node, "node_inputs"), ctx)

    attr_list_node = get_child_by_type(node, "attr_list")
    attrs = {} if attr_list_node is None else parse_attr_list(attr_list_node, ctx)

    attr_refs = []
    for k in list(attrs):
        v = attrs[k]
        if isinstance(v, AttrRef):
            p = onnx.helper.make_attribute_ref(k, v.attr_type)
            p.ref_attr_name = v.ref_attr_name
            attr_refs.append(p)
            del attrs[k]

    name = ctx.make_name("node")
    proto = onnx.helper.make_node(op_type, inputs, outputs, name, None, domain, **attrs)
    for a in attr_refs:
        proto.attribute.append(a)
    ctx.nodes.append(proto)


def parse_qualified_id(node: Node) -> list[str]:
    assert node.type == "qualified_id"
    return [parse_id(i) for i in get_children_by_type(node, "id")]


def parse_node_inputs(node: Node, ctx: GraphParserContext) -> list[str]:
    assert node.type == "node_inputs"
    return [parse_expr(i, ctx) for i in node.named_children if i.type != "comment"]


def parse_expr(node: Node, ctx: GraphParserContext) -> str:
    match node.type:
        case "id":
            return parse_id(node)
        case "node_call":
            outputs = [ctx.make_name("value")]
            parse_node_call(node, outputs, ctx)
            return outputs[0]
        case "tensor_constant":
            tensor_proto = parse_tensor_constant(node, ctx)
            ctx.initializer.append(tensor_proto)
            return tensor_proto.name
        case "none":
            return ""
    raise UnexpectedNodeError(node)


def parse_attr_list(node: Node, ctx: GraphParserContext) -> dict[str, Any]:
    assert node.type == "attr_list"
    return dict(parse_attr(i, ctx) for i in get_children_by_type(node, "attr"))


@dataclasses.dataclass
class AttrRef:
    ref_attr_name: str
    attr_type: onnx.AttributeProto.AttributeType = onnx.AttributeProto.UNDEFINED


def parse_attr(node: Node, ctx: GraphParserContext) -> tuple[str, Any]:
    assert node.type == "attr"
    key = parse_id(get_child_by_type_exact1(node, "id"))
    value = parse_attr_value(get_child_by_type_exact1(node, "attr_value"), ctx)
    if isinstance(value, AttrRef):
        attr_type_node = get_child_by_type(node, "attr_type")
        if attr_type_node is not None:
            value.attr_type = parse_attr_type(attr_type_node)

    return key, value


def parse_attr_type(node: Node) -> onnx.AttributeProto.AttributeType:
    assert node.type == "attr_type"
    key = parse_id(get_child_by_type_exact1(node, "id")).upper()
    return cast(onnx.AttributeProto.AttributeType, ATTRIBUTE_TYPE_ID[key])


def parse_attr_value(node: Node, ctx: GraphParserContext) -> Any:
    assert node.type == "attr_value"

    inner = node.named_children[0]
    match inner.type:
        case "attr_value_list":
            return parse_attr_value_list(inner, ctx)
        case "single_attr_value":
            return parse_single_attr_value(inner, ctx)
        case "attr_ref":
            return parse_attr_ref(inner)
    raise UnexpectedNodeError(inner)


def parse_attr_value_list(node: Node, ctx: GraphParserContext) -> Any:
    assert node.type == "attr_value_list"
    return [
        parse_single_attr_value(i, ctx)
        for i in get_children_by_type(node, "single_attr_value")
    ]


def parse_single_attr_value(node: Node, ctx: GraphParserContext) -> Any:
    assert node.type == "single_attr_value"

    inner = node.named_children[0]
    match inner.type:
        case "tensor_constant":
            return parse_tensor_constant(inner, ctx)
        case "graph":
            return parse_graph(inner)
        case "prim_constant":
            return parse_prim_constant(inner)
        case "type":
            return parse_type(inner)
    raise UnexpectedNodeError(node)


def parse_attr_ref(node: Node) -> AttrRef:
    assert node.type == "attr_ref"
    return AttrRef(parse_id(get_child_by_type_exact1(node, "id")))


def get_child_by_field_name_exact1(node: Node, name: str) -> Node:
    ret = node.child_by_field_name(name)
    assert ret is not None
    return ret


def get_children_by_type(node: Node, kind: str) -> list[Node]:
    return [i for i in node.children if i.type == kind]


def get_child_by_type(node: Node, kind: str) -> Node | None:
    nodes = get_children_by_type(node, kind)
    if len(nodes) == 1:
        return nodes[0]
    return None


def get_child_by_type_exact1(node: Node, type: str) -> Node:
    ret = get_child_by_type(node, type)
    assert ret is not None
    return ret


def is_int_list(val: list[Any]) -> TypeGuard[list[int]]:
    return all(isinstance(x, int) for x in val)
