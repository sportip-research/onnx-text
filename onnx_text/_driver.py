import onnx

from . import _parser


def parse_model(text: str) -> onnx.ModelProto:
    """Parse a string to build a ONNX model

    :param text: text string
    :return: exported model
    """

    tree = _parser.to_ast(text.encode())
    _parser.check_node(tree.root_node)
    return _parser.parse_model(tree.root_node)


def parse_graph(text: str) -> onnx.GraphProto:
    """Parse a string to build a ONNX graph

    :param text: text string
    :return: exported graph
    """

    return parse_model(text).graph


def parse_function(text: str) -> onnx.FunctionProto:
    """Parse a string to build a ONNX function

    :param text: text string
    :return: exported function
    """

    tree = _parser.to_ast(text.encode())
    _parser.check_node(tree.root_node)
    return _parser.parse_function(tree.root_node)
