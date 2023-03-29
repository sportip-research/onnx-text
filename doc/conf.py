project = "onnx-text"
copyright = "2023, Regen"
author = "Regen"

extensions = [
    "sphinx.ext.autodoc",
    "sphinx.ext.viewcode",
    "sphinx.ext.intersphinx",
]

html_theme = "sphinx_rtd_theme"

autodoc_member_order = "bysource"

intersphinx_mapping = {
    "onnx": ("https://onnx.ai/onnx/", None),
}
