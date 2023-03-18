# onnxbuilder

[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/regen100/onnxbuilder/ci.yml)](https://github.com/regen100/onnxbuilder/actions/workflows/ci.yml)
[![Read the Docs](https://img.shields.io/readthedocs/onnxbuilder)](http://onnxbuilder.readthedocs.io/)

Simple ONNX Builder from Scratch

## Usage

```bash
$ pip install onnxbuilder onnxruntime
```

```python
import numpy as np
import onnx
import onnxruntime

from onnxbuilder import Graph

g = Graph("g")
x = g.value(np.float32, ("N",), "x")
y = g.node("Abs", inputs=[x], outputs=g.value(np.float32))
model = onnx.helper.make_model(g.build(inputs=[x], outputs=[y]))

session = onnxruntime.InferenceSession(
    model.SerializeToString(), providers=["CPUExecutionProvider"]
)
outputs = session.run(None, {"x": np.array([-1, 0, 1], np.float32)})
print(outputs)  # [array([1., 0., 1.], dtype=float32)]
```
