import subprocess

import pytest

have_tree_sitter = subprocess.run(["tree-sitter", "-V"]).returncode == 0


@pytest.mark.skipif(not have_tree_sitter, reason="no tree-sitter command")
def test_treesitter() -> None:
    root = "tree-sitter-onnx-text"
    subprocess.run(["tree-sitter", "generate", "--no-bindings"], check=True, cwd=root)
    subprocess.run(["tree-sitter", "test"], check=True, cwd=root)
