import os
from typing import Any

import onnx

from . import _parser


def parse_model(text: str, dir: os.PathLike[Any] | None = None) -> onnx.ModelProto:
    """Parse a string to build a ONNX model

    :param text: text string
    :param dir: base directroy to find function files
    :return: exported model
    """

    tree = _parser.to_ast(text.encode())
    _parser.check_node(tree.root_node)

    cwd = os.getcwd()
    try:
        if dir is not None:
            os.chdir(dir)
        return _parser.parse_model(tree.root_node)
    finally:
        os.chdir(cwd)


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
