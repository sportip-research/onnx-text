from pathlib import Path

import pytest

from onnx_text import parse_function, parse_model

cases_dir = Path(__file__).parent / "cases"
model_dir = cases_dir / "model"
func_dir = cases_dir / "func"


def idfn(val: Path) -> str:
    return val.stem


@pytest.mark.parametrize("case", model_dir.glob("*.otxt"), ids=idfn)
def test_parse_model(case: Path) -> None:
    otxt = case.read_text()
    proto = parse_model(otxt, case.parent)
    expected = case.with_suffix(".pbtxt").read_text()
    assert str(proto) == expected


@pytest.mark.parametrize("case", func_dir.glob("*.otxt"), ids=idfn)
def test_parse_function(case: Path) -> None:
    otxt = case.read_text()
    proto = parse_function(otxt)
    expected = case.with_suffix(".pbtxt").read_text()
    assert str(proto) == expected
