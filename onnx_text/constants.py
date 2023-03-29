import numpy as np
import onnx

NUMERIC_CONSTANTS = {}
"""Constants in contexts where numeric literals are expected"""

NUMERIC_CONSTANTS["INF"] = np.inf
NUMERIC_CONSTANTS["NINF"] = np.NINF
NUMERIC_CONSTANTS["NAN"] = np.nan
NUMERIC_CONSTANTS["NZERO"] = np.NZERO
NUMERIC_CONSTANTS["PZERO"] = np.PZERO
NUMERIC_CONSTANTS["EULER_GAMMA"] = np.euler_gamma
NUMERIC_CONSTANTS["PI"] = np.pi
NUMERIC_CONSTANTS["E"] = np.e
for bits in [8, 16, 32, 64]:
    iinfo = np.iinfo(f"int{bits}")
    NUMERIC_CONSTANTS[f"INT{bits}_MIN"] = iinfo.min
    NUMERIC_CONSTANTS[f"INT{bits}_MAX"] = iinfo.max
    iinfo = np.iinfo(f"uint{bits}")
    NUMERIC_CONSTANTS[f"UINT{bits}_MIN"] = iinfo.min
    NUMERIC_CONSTANTS[f"UINT{bits}_MAX"] = iinfo.max
for bits in [16, 32, 64]:
    finfo = np.finfo(f"float{bits}")
    NUMERIC_CONSTANTS[f"FLOAT{bits}_MIN"] = float(finfo.min)
    NUMERIC_CONSTANTS[f"FLOAT{bits}_MAX"] = float(finfo.max)

for k, v in onnx.TensorProto.DataType.items():
    if k == "UNDEFINED":
        continue
    NUMERIC_CONSTANTS[f"TYPE_{k}"] = v
