import argparse
import sys

from . import to_model


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--name", default="root", help="Graph name")
    parser.add_argument(
        "--format",
        choices=["text", "binary"],
        help="Output format. The default value is determined according to isatty",
    )
    args = parser.parse_args()

    code = sys.stdin.read()
    model = to_model(code, args.name)

    if args.format is None:
        args.format = "text" if sys.stdout.isatty() else "binary"
    match args.format:
        case "text":
            print(model)
        case "binary":
            sys.stdout.buffer.write(model.SerializeToString())


if __name__ == "__main__":
    main()
