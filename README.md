# onnx-text

[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/regen100/onnx-text/ci.yml)](https://github.com/regen100/onnx-text/actions/workflows/ci.yml)
[![Read the Docs](https://img.shields.io/readthedocs/onnx-text)](http://onnx-text.readthedocs.io/)

Text Format for Building ONNX Models

## Overview

ONNX has its own [text format](https://github.com/onnx/onnx/blob/main/docs/Syntax.md). However, it is not sufficient for practical use. This project provides an extended syntax and tools to support model creation.

*   Nested node `y = f(g(x))`
*   Inline initalizer `int8 a = {0}`
*   Inline tensor value `y = f(int8 {0})`
*   Typed node output `float[N, ?] y = f()`
*   Numeric constant `y = f(float {PI}, int64 {INT64_MAX})`
*   Empty input `y = f("", x)`
*   Trailing comma `y = f(x,)`
*   Including function file `%include "func.otxt"`
*   Syntax highlight

## Usage

```bash
$ pip install onnx-text onnxruntime
```

### Python Interface

```python
import numpy as np
import onnxruntime

from onnx_text import parse_model

code = """
agraph (float[N] x, float[N] y) => (float[N] z) {
  z = Add(x, y)
}
"""
model = parse_model(code)

# check output
session = onnxruntime.InferenceSession(
    model.SerializeToString(), providers=["CPUExecutionProvider"]
)
x = np.array([3, 4, 5], np.float32)
y = np.array([3, 4, 5], np.float32)
outputs = session.run(None, {"x": x, "y": y})
print(outputs)  # [array([ 6.,  8., 10.], dtype=float32)]
```

### CLI

```bash
$ python -m onnx_text <tests/cases/model/add.otxt >model.onnx
```

### Highlight

```bash
$ cd tree-sitter-onnx-text
$ tree-sitter generate --no-bindings
$ tree-sitter highlight ../tests/cases/model/add.otxt
```
