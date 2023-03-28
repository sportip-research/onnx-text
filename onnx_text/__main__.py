import argparse
import sys

from . import parse_model


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Parse stdin and export a model to stdout"
    )
    parser.add_argument(
        "--format",
        choices=["text", "binary"],
        help="output format (the default value is determined according to isatty)",
    )
    args = parser.parse_args()

    code = sys.stdin.read()
    model = parse_model(code)

    if args.format is None:
        args.format = "text" if sys.stdout.isatty() else "binary"
    match args.format:
        case "text":
            print(model)
        case "binary":
            sys.stdout.buffer.write(model.SerializeToString())


if __name__ == "__main__":
    main()
