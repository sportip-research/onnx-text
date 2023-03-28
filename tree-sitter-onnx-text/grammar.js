module.exports = grammar({
  name: "onnx_text",

  extras: ($) => [$.comment, /\s/],

  conflicts: ($) => [
    [$.value_info_list, $.fun_inout_list],
    [$.type, $.tensor_constant],
  ],

  rules: {
    source_file: ($) => choice($.model, $.function),

    comment: () => /#.*/,

    id: () => /[a-zA-Z][a-zA-Z0-9_/]*/,

    str_constant: () => /"[^"]*"/, // TODO: support escape chars
    int_constant: () => /[+-]?\d+/,
    float_constant: () => /[+-]?(\d*\.\d+|\d+\.\d*)/, // TODO: support 1e-1
    prim_constant: ($) =>
      choice($.str_constant, $.int_constant, $.float_constant, $.id),
    prim_constants: ($) => list1($.prim_constant),

    prim_type: () =>
      choice(
        "bfloat16",
        "bool",
        "complex128",
        "complex64",
        "double",
        "float",
        "float16",
        "int16",
        "int32",
        "int64",
        "int8",
        "string",
        "uint16",
        "uint32",
        "uint64",
        "uint8"
      ),

    tensor_dim: ($) => choice(alias("?", $.unk), $.id, $.int_constant),
    tensor_dims: ($) => list1($.tensor_dim),
    tensor_type: ($) =>
      choice(
        $.prim_type,
        seq($.prim_type, "[", "]"),
        seq($.prim_type, "[", $.tensor_dims, "]")
      ),
    type: ($) => choice($.tensor_type), // TODO: seq, map, ...

    value_info: ($) => seq($.type, $.id),
    value_info_list: ($) => seq("(", list($.value_info), ")"),

    tensor_constant: ($) =>
      seq(
        $.tensor_type,
        optional($.id),
        optional("="),
        "{",
        $.prim_constants,
        "}"
      ),

    attr_ref: ($) => seq("@", $.id),
    single_attr_value: ($) =>
      choice($.tensor_constant, $.graph, $.prim_constant, $.type),
    attr_value_list: ($) => seq("[", list($.single_attr_value), "]"),
    attr_value: ($) =>
      choice($.single_attr_value, $.attr_value_list, $.attr_ref),
    attr_type: ($) => seq(":", $.id),
    attr: ($) => seq($.id, optional($.attr_type), "=", $.attr_value),
    attr_list: ($) => seq("<", list($.attr), ">"),

    typed_id: ($) => seq(optional($.type), $.id),
    typed_id_list: ($) => list1($.typed_id),
    qualified_id: ($) => list1($.id, token.immediate(".")),
    node_inputs: ($) => seq("(", list($._expr), ")"),
    node_call: ($) =>
      seq(
        $.qualified_id,
        choice(
          seq(optional($.attr_list), $.node_inputs),
          seq($.node_inputs, $.attr_list)
        )
      ),
    node: ($) => seq($.typed_id_list, "=", $.node_call),

    none: () => /""/,
    _expr: ($) => choice($.node_call, $.id, $.none, $.tensor_constant),
    expr_list: ($) => list1($._expr),

    statement: ($) => choice($.node, $.tensor_constant),
    statement_list: ($) => seq("{", repeat($.statement), "}"),

    graph: ($) =>
      seq(
        field("name", $.id),
        field("inputs", $.value_info_list),
        "=>",
        field("outputs", $.value_info_list),
        field("body", $.statement_list)
      ),

    key_value_pair: ($) =>
      seq(field("key", $.str_constant), ":", field("value", $.prim_constant)),
    key_value_list: ($) => seq("[", list($.key_value_pair), "]"),
    other_data: ($) =>
      seq(
        field("name", $.id),
        ":",
        field("value", choice($.prim_constant, $.key_value_list))
      ),
    other_data_list: ($) => seq("<", list($.other_data), ">"),

    model: ($) => seq(optional($.other_data_list), $.graph, repeat($.function)),

    fun_attr_list: ($) => seq("<", list(choice($.id, $.attr)), ">"),
    fun_inout_list: ($) => seq("(", list($.id), ")"),
    function: ($) =>
      seq(
        optional(field("header", $.other_data_list)),
        field("name", $.id),
        optional(field("attrs", $.fun_attr_list)),
        field("inputs", $.fun_inout_list),
        "=>",
        field("outputs", $.fun_inout_list),
        field("body", $.statement_list)
      ),
  },
});

function list(expr, sep = ",") {
  return optional(list1(expr, sep));
}

function list1(expr, sep = ",") {
  return seq(expr, repeat(seq(sep, expr)), optional(sep));
}
