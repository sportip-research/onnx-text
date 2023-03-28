import distutils.ccompiler
import os
from pathlib import Path

from pdm.backend.hooks import Context
from pdm.backend.wheel import WheelBuilder

grammar_dir = Path("tree-sitter-onnx-text")


def pdm_build_initialize(context: Context) -> None:
    if isinstance(context.builder, WheelBuilder):
        dir = context.build_dir / context.config.metadata["name"].replace("-", "_")
        wd = os.getcwd()
        try:
            os.chdir(grammar_dir / "src")
            compiler = distutils.ccompiler.new_compiler()
            compiler.compile(["parser.c"], include_dirs=["."])
            compiler.link("shared_library", ["parser.o"], "parser", str(dir))
        finally:
            os.chdir(wd)
