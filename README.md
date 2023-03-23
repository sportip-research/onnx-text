# onnxbuilder

[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/regen100/onnxbuilder/ci.yml)](https://github.com/regen100/onnxbuilder/actions/workflows/ci.yml)
[![Read the Docs](https://img.shields.io/readthedocs/onnxbuilder)](http://onnxbuilder.readthedocs.io/)

Simple ONNX Builder from Scratch

## Usage

```bash
$ pip install onnxbuilder onnxruntime
```

### Python Interface

```python
import numpy as np
import onnxruntime

from onnxbuilder import to_model

# convert to ONNX Model
code = """
x: float32[N]
y: float32[N]
sum = Add(x, y): float32
"""
model = to_model(code)

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
$ python -m onnxbuilder <code.txt >model.onnx
```
