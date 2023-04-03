#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 232
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum {
  sym_comment = 1,
  sym_id = 2,
  sym_str_constant = 3,
  sym_int_constant = 4,
  sym_float_constant = 5,
  anon_sym_COMMA = 6,
  anon_sym_bfloat16 = 7,
  anon_sym_bool = 8,
  anon_sym_complex128 = 9,
  anon_sym_complex64 = 10,
  anon_sym_double = 11,
  anon_sym_float = 12,
  anon_sym_float16 = 13,
  anon_sym_int16 = 14,
  anon_sym_int32 = 15,
  anon_sym_int64 = 16,
  anon_sym_int8 = 17,
  anon_sym_string = 18,
  anon_sym_uint16 = 19,
  anon_sym_uint32 = 20,
  anon_sym_uint64 = 21,
  anon_sym_uint8 = 22,
  anon_sym_QMARK = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_EQ = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_AT = 31,
  anon_sym_COLON = 32,
  anon_sym_LT = 33,
  anon_sym_GT = 34,
  anon_sym_DOT = 35,
  sym_none = 36,
  anon_sym_EQ_GT = 37,
  anon_sym_PERCENT = 38,
  anon_sym_include = 39,
  sym_source_file = 40,
  sym_prim_constant = 41,
  sym_prim_constants = 42,
  sym_prim_type = 43,
  sym_tensor_dim = 44,
  sym_tensor_dims = 45,
  sym_tensor_type = 46,
  sym_type = 47,
  sym_value_info = 48,
  sym_value_info_list = 49,
  sym_tensor_constant = 50,
  sym_attr_ref = 51,
  sym_single_attr_value = 52,
  sym_attr_value_list = 53,
  sym_attr_value = 54,
  sym_attr_type = 55,
  sym_attr = 56,
  sym_attr_list = 57,
  sym_typed_id = 58,
  sym_typed_id_list = 59,
  sym_qualified_id = 60,
  sym_node_inputs = 61,
  sym_node_call = 62,
  sym_node = 63,
  sym__expr = 64,
  sym_statement = 65,
  sym_statement_list = 66,
  sym_graph = 67,
  sym_key_value_pair = 68,
  sym_key_value_list = 69,
  sym_other_data = 70,
  sym_other_data_list = 71,
  sym_model = 72,
  sym_fun_attr_list = 73,
  sym_fun_inout_list = 74,
  sym_function = 75,
  sym_include_keyword = 76,
  sym_include = 77,
  sym_function_or_include = 78,
  aux_sym_prim_constants_repeat1 = 79,
  aux_sym_tensor_dims_repeat1 = 80,
  aux_sym_value_info_list_repeat1 = 81,
  aux_sym_attr_value_list_repeat1 = 82,
  aux_sym_attr_list_repeat1 = 83,
  aux_sym_typed_id_list_repeat1 = 84,
  aux_sym_qualified_id_repeat1 = 85,
  aux_sym_node_inputs_repeat1 = 86,
  aux_sym_statement_list_repeat1 = 87,
  aux_sym_key_value_list_repeat1 = 88,
  aux_sym_other_data_list_repeat1 = 89,
  aux_sym_model_repeat1 = 90,
  aux_sym_fun_attr_list_repeat1 = 91,
  aux_sym_fun_inout_list_repeat1 = 92,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_id] = "id",
  [sym_str_constant] = "str_constant",
  [sym_int_constant] = "int_constant",
  [sym_float_constant] = "float_constant",
  [anon_sym_COMMA] = ",",
  [anon_sym_bfloat16] = "bfloat16",
  [anon_sym_bool] = "bool",
  [anon_sym_complex128] = "complex128",
  [anon_sym_complex64] = "complex64",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_float16] = "float16",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_int8] = "int8",
  [anon_sym_string] = "string",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_uint8] = "uint8",
  [anon_sym_QMARK] = "unk",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DOT] = ".",
  [sym_none] = "none",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PERCENT] = "%",
  [anon_sym_include] = "include",
  [sym_source_file] = "source_file",
  [sym_prim_constant] = "prim_constant",
  [sym_prim_constants] = "prim_constants",
  [sym_prim_type] = "prim_type",
  [sym_tensor_dim] = "tensor_dim",
  [sym_tensor_dims] = "tensor_dims",
  [sym_tensor_type] = "tensor_type",
  [sym_type] = "type",
  [sym_value_info] = "value_info",
  [sym_value_info_list] = "value_info_list",
  [sym_tensor_constant] = "tensor_constant",
  [sym_attr_ref] = "attr_ref",
  [sym_single_attr_value] = "single_attr_value",
  [sym_attr_value_list] = "attr_value_list",
  [sym_attr_value] = "attr_value",
  [sym_attr_type] = "attr_type",
  [sym_attr] = "attr",
  [sym_attr_list] = "attr_list",
  [sym_typed_id] = "typed_id",
  [sym_typed_id_list] = "typed_id_list",
  [sym_qualified_id] = "qualified_id",
  [sym_node_inputs] = "node_inputs",
  [sym_node_call] = "node_call",
  [sym_node] = "node",
  [sym__expr] = "_expr",
  [sym_statement] = "statement",
  [sym_statement_list] = "statement_list",
  [sym_graph] = "graph",
  [sym_key_value_pair] = "key_value_pair",
  [sym_key_value_list] = "key_value_list",
  [sym_other_data] = "other_data",
  [sym_other_data_list] = "other_data_list",
  [sym_model] = "model",
  [sym_fun_attr_list] = "fun_attr_list",
  [sym_fun_inout_list] = "fun_inout_list",
  [sym_function] = "function",
  [sym_include_keyword] = "include_keyword",
  [sym_include] = "include",
  [sym_function_or_include] = "function_or_include",
  [aux_sym_prim_constants_repeat1] = "prim_constants_repeat1",
  [aux_sym_tensor_dims_repeat1] = "tensor_dims_repeat1",
  [aux_sym_value_info_list_repeat1] = "value_info_list_repeat1",
  [aux_sym_attr_value_list_repeat1] = "attr_value_list_repeat1",
  [aux_sym_attr_list_repeat1] = "attr_list_repeat1",
  [aux_sym_typed_id_list_repeat1] = "typed_id_list_repeat1",
  [aux_sym_qualified_id_repeat1] = "qualified_id_repeat1",
  [aux_sym_node_inputs_repeat1] = "node_inputs_repeat1",
  [aux_sym_statement_list_repeat1] = "statement_list_repeat1",
  [aux_sym_key_value_list_repeat1] = "key_value_list_repeat1",
  [aux_sym_other_data_list_repeat1] = "other_data_list_repeat1",
  [aux_sym_model_repeat1] = "model_repeat1",
  [aux_sym_fun_attr_list_repeat1] = "fun_attr_list_repeat1",
  [aux_sym_fun_inout_list_repeat1] = "fun_inout_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_id] = sym_id,
  [sym_str_constant] = sym_str_constant,
  [sym_int_constant] = sym_int_constant,
  [sym_float_constant] = sym_float_constant,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_bfloat16] = anon_sym_bfloat16,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_complex128] = anon_sym_complex128,
  [anon_sym_complex64] = anon_sym_complex64,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_float16] = anon_sym_float16,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_none] = sym_none,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_include] = anon_sym_include,
  [sym_source_file] = sym_source_file,
  [sym_prim_constant] = sym_prim_constant,
  [sym_prim_constants] = sym_prim_constants,
  [sym_prim_type] = sym_prim_type,
  [sym_tensor_dim] = sym_tensor_dim,
  [sym_tensor_dims] = sym_tensor_dims,
  [sym_tensor_type] = sym_tensor_type,
  [sym_type] = sym_type,
  [sym_value_info] = sym_value_info,
  [sym_value_info_list] = sym_value_info_list,
  [sym_tensor_constant] = sym_tensor_constant,
  [sym_attr_ref] = sym_attr_ref,
  [sym_single_attr_value] = sym_single_attr_value,
  [sym_attr_value_list] = sym_attr_value_list,
  [sym_attr_value] = sym_attr_value,
  [sym_attr_type] = sym_attr_type,
  [sym_attr] = sym_attr,
  [sym_attr_list] = sym_attr_list,
  [sym_typed_id] = sym_typed_id,
  [sym_typed_id_list] = sym_typed_id_list,
  [sym_qualified_id] = sym_qualified_id,
  [sym_node_inputs] = sym_node_inputs,
  [sym_node_call] = sym_node_call,
  [sym_node] = sym_node,
  [sym__expr] = sym__expr,
  [sym_statement] = sym_statement,
  [sym_statement_list] = sym_statement_list,
  [sym_graph] = sym_graph,
  [sym_key_value_pair] = sym_key_value_pair,
  [sym_key_value_list] = sym_key_value_list,
  [sym_other_data] = sym_other_data,
  [sym_other_data_list] = sym_other_data_list,
  [sym_model] = sym_model,
  [sym_fun_attr_list] = sym_fun_attr_list,
  [sym_fun_inout_list] = sym_fun_inout_list,
  [sym_function] = sym_function,
  [sym_include_keyword] = sym_include_keyword,
  [sym_include] = sym_include,
  [sym_function_or_include] = sym_function_or_include,
  [aux_sym_prim_constants_repeat1] = aux_sym_prim_constants_repeat1,
  [aux_sym_tensor_dims_repeat1] = aux_sym_tensor_dims_repeat1,
  [aux_sym_value_info_list_repeat1] = aux_sym_value_info_list_repeat1,
  [aux_sym_attr_value_list_repeat1] = aux_sym_attr_value_list_repeat1,
  [aux_sym_attr_list_repeat1] = aux_sym_attr_list_repeat1,
  [aux_sym_typed_id_list_repeat1] = aux_sym_typed_id_list_repeat1,
  [aux_sym_qualified_id_repeat1] = aux_sym_qualified_id_repeat1,
  [aux_sym_node_inputs_repeat1] = aux_sym_node_inputs_repeat1,
  [aux_sym_statement_list_repeat1] = aux_sym_statement_list_repeat1,
  [aux_sym_key_value_list_repeat1] = aux_sym_key_value_list_repeat1,
  [aux_sym_other_data_list_repeat1] = aux_sym_other_data_list_repeat1,
  [aux_sym_model_repeat1] = aux_sym_model_repeat1,
  [aux_sym_fun_attr_list_repeat1] = aux_sym_fun_attr_list_repeat1,
  [aux_sym_fun_inout_list_repeat1] = aux_sym_fun_inout_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_str_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_int_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_float_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bfloat16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_none] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_prim_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_prim_constants] = {
    .visible = true,
    .named = true,
  },
  [sym_prim_type] = {
    .visible = true,
    .named = true,
  },
  [sym_tensor_dim] = {
    .visible = true,
    .named = true,
  },
  [sym_tensor_dims] = {
    .visible = true,
    .named = true,
  },
  [sym_tensor_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_value_info] = {
    .visible = true,
    .named = true,
  },
  [sym_value_info_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tensor_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_single_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_type] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_list] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_id] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_id_list] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_id] = {
    .visible = true,
    .named = true,
  },
  [sym_node_inputs] = {
    .visible = true,
    .named = true,
  },
  [sym_node_call] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_list] = {
    .visible = true,
    .named = true,
  },
  [sym_graph] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_other_data] = {
    .visible = true,
    .named = true,
  },
  [sym_other_data_list] = {
    .visible = true,
    .named = true,
  },
  [sym_model] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_attr_list] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_inout_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_include_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_function_or_include] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_prim_constants_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tensor_dims_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_info_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typed_id_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_inputs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_other_data_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_model_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fun_attr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fun_inout_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_attrs = 1,
  field_body = 2,
  field_header = 3,
  field_inputs = 4,
  field_key = 5,
  field_name = 6,
  field_outputs = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attrs] = "attrs",
  [field_body] = "body",
  [field_header] = "header",
  [field_inputs] = "inputs",
  [field_key] = "key",
  [field_name] = "name",
  [field_outputs] = "outputs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 5},
  [4] = {.index = 11, .length = 5},
  [5] = {.index = 16, .length = 2},
  [6] = {.index = 18, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
  [2] =
    {field_body, 4},
    {field_inputs, 1},
    {field_name, 0},
    {field_outputs, 3},
  [6] =
    {field_attrs, 1},
    {field_body, 5},
    {field_inputs, 2},
    {field_name, 0},
    {field_outputs, 4},
  [11] =
    {field_body, 5},
    {field_header, 0},
    {field_inputs, 2},
    {field_name, 1},
    {field_outputs, 4},
  [16] =
    {field_key, 0},
    {field_value, 2},
  [18] =
    {field_attrs, 2},
    {field_body, 6},
    {field_header, 0},
    {field_inputs, 3},
    {field_name, 1},
    {field_outputs, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 59,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '%') ADVANCE(172);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == '>') ADVANCE(167);
      if (lookahead == '?') ADVANCE(155);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(167);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '}') ADVANCE(163);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(170);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(143);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(153);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(149);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(141);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(147);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(135);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == '8') ADVANCE(127);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(171);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'x') ADVANCE(10);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '%') ADVANCE(172);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == '>') ADVANCE(167);
      if (lookahead == '?') ADVANCE(155);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '%') ADVANCE(172);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(167);
      if (lookahead == '?') ADVANCE(155);
      if (lookahead == '[') ADVANCE(156);
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '3') ADVANCE(69);
      if (lookahead == '6') ADVANCE(72);
      if (lookahead == '8') ADVANCE(144);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == '3') ADVANCE(70);
      if (lookahead == '6') ADVANCE(73);
      if (lookahead == '8') ADVANCE(154);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '6') ADVANCE(74);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '1') ADVANCE(78);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '2') ADVANCE(140);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '2') ADVANCE(150);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '2') ADVANCE(79);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '4') ADVANCE(142);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '4') ADVANCE(152);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '4') ADVANCE(130);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '6') ADVANCE(138);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '6') ADVANCE(148);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '6') ADVANCE(136);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '6') ADVANCE(124);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '8') ADVANCE(128);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(112);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(113);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(95);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 't') ADVANCE(65);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'd') ADVANCE(87);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(117);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(132);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(174);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(106);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(146);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(101);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(100);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(126);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(85);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(116);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(86);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(105);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(107);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(108);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(83);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(89);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(114);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(111);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(98);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(115);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(80);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(92);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(81);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(93);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(91);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(109);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(65);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(133);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(68);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(66);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(82);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(84);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(67);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_str_constant);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_int_constant);
      if (lookahead == '.') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_float_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_bfloat16);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_bfloat16);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_complex128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_complex128);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_complex64);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_complex64);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_double);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '1') ADVANCE(77);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '1') ADVANCE(20);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_float16);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_float16);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_string);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_include);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 62},
  [39] = {.lex_state = 62},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 62},
  [44] = {.lex_state = 62},
  [45] = {.lex_state = 62},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 62},
  [51] = {.lex_state = 62},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 62},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 62},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 62},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 62},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 62},
  [68] = {.lex_state = 62},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 62},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 62},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 62},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 62},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 62},
  [108] = {.lex_state = 62},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 62},
  [114] = {.lex_state = 62},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 62},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 62},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 62},
  [125] = {.lex_state = 62},
  [126] = {.lex_state = 62},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 62},
  [133] = {.lex_state = 62},
  [134] = {.lex_state = 62},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 62},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 62},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 62},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 62},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 62},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 62},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 62},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 62},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 62},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 62},
  [185] = {.lex_state = 62},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 62},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 62},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 62},
  [199] = {.lex_state = 62},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 62},
  [202] = {.lex_state = 62},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 62},
  [205] = {.lex_state = 62},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 62},
  [208] = {.lex_state = 62},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 62},
  [212] = {.lex_state = 62},
  [213] = {.lex_state = 62},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 62},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 62},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 62},
  [223] = {.lex_state = 62},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 62},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_id] = ACTIONS(1),
    [sym_str_constant] = ACTIONS(1),
    [sym_int_constant] = ACTIONS(1),
    [sym_float_constant] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_bfloat16] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_complex128] = ACTIONS(1),
    [anon_sym_complex64] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_float16] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_none] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(197),
    [sym_graph] = STATE(42),
    [sym_other_data_list] = STATE(148),
    [sym_model] = STATE(227),
    [sym_function] = STATE(227),
    [sym_comment] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_id,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_prim_type,
    STATE(59), 1,
      sym_tensor_type,
    STATE(150), 1,
      sym_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(164), 3,
      sym_attr_ref,
      sym_single_attr_value,
      sym_attr_value_list,
    STATE(100), 4,
      sym_prim_constant,
      sym_type,
      sym_tensor_constant,
      sym_graph,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [58] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_id,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_AT,
    STATE(45), 1,
      sym_prim_type,
    STATE(59), 1,
      sym_tensor_type,
    STATE(193), 1,
      sym_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(164), 3,
      sym_attr_ref,
      sym_single_attr_value,
      sym_attr_value_list,
    STATE(100), 4,
      sym_prim_constant,
      sym_type,
      sym_tensor_constant,
      sym_graph,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [116] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_id,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_prim_type,
    STATE(59), 1,
      sym_tensor_type,
    STATE(169), 1,
      sym_single_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(100), 4,
      sym_prim_constant,
      sym_type,
      sym_tensor_constant,
      sym_graph,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [166] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_id,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_prim_type,
    STATE(59), 1,
      sym_tensor_type,
    STATE(169), 1,
      sym_single_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(100), 4,
      sym_prim_constant,
      sym_type,
      sym_tensor_constant,
      sym_graph,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [216] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_id,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_prim_type,
    STATE(59), 1,
      sym_tensor_type,
    STATE(123), 1,
      sym_single_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(100), 4,
      sym_prim_constant,
      sym_type,
      sym_tensor_constant,
      sym_graph,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [266] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_id,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(45), 1,
      sym_prim_type,
    STATE(59), 1,
      sym_tensor_type,
    STATE(169), 1,
      sym_single_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(100), 4,
      sym_prim_constant,
      sym_type,
      sym_tensor_constant,
      sym_graph,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [313] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_id,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_prim_type,
    STATE(85), 1,
      sym_tensor_type,
    STATE(134), 1,
      sym_typed_id,
    STATE(208), 1,
      sym_type,
    STATE(211), 1,
      sym_typed_id_list,
    STATE(8), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    STATE(37), 2,
      sym_tensor_constant,
      sym_node,
    ACTIONS(30), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [364] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_prim_type,
    STATE(85), 1,
      sym_tensor_type,
    STATE(134), 1,
      sym_typed_id,
    STATE(208), 1,
      sym_type,
    STATE(211), 1,
      sym_typed_id_list,
    STATE(10), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    STATE(37), 2,
      sym_tensor_constant,
      sym_node,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [415] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_prim_type,
    STATE(85), 1,
      sym_tensor_type,
    STATE(134), 1,
      sym_typed_id,
    STATE(208), 1,
      sym_type,
    STATE(211), 1,
      sym_typed_id_list,
    STATE(8), 2,
      sym_statement,
      aux_sym_statement_list_repeat1,
    STATE(37), 2,
      sym_tensor_constant,
      sym_node,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_id,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      sym_none,
    STATE(45), 1,
      sym_prim_type,
    STATE(71), 1,
      sym_qualified_id,
    STATE(101), 1,
      sym_tensor_type,
    STATE(171), 3,
      sym_tensor_constant,
      sym_node_call,
      sym__expr,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [511] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_id,
    ACTIONS(45), 1,
      sym_none,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_prim_type,
    STATE(71), 1,
      sym_qualified_id,
    STATE(101), 1,
      sym_tensor_type,
    STATE(171), 3,
      sym_tensor_constant,
      sym_node_call,
      sym__expr,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [556] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_id,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      sym_none,
    STATE(45), 1,
      sym_prim_type,
    STATE(71), 1,
      sym_qualified_id,
    STATE(101), 1,
      sym_tensor_type,
    STATE(99), 3,
      sym_tensor_constant,
      sym_node_call,
      sym__expr,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [601] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_id,
    ACTIONS(45), 1,
      sym_none,
    STATE(45), 1,
      sym_prim_type,
    STATE(71), 1,
      sym_qualified_id,
    STATE(101), 1,
      sym_tensor_type,
    STATE(171), 3,
      sym_tensor_constant,
      sym_node_call,
      sym__expr,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(53), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [673] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_id,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_prim_type,
    STATE(83), 1,
      sym_value_info,
    STATE(198), 1,
      sym_type,
    STATE(199), 1,
      sym_tensor_type,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [713] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    ACTIONS(61), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_prim_type,
    STATE(177), 1,
      sym_typed_id,
    STATE(199), 1,
      sym_tensor_type,
    STATE(208), 1,
      sym_type,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [753] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    ACTIONS(63), 1,
      anon_sym_EQ,
    STATE(45), 1,
      sym_prim_type,
    STATE(177), 1,
      sym_typed_id,
    STATE(199), 1,
      sym_tensor_type,
    STATE(208), 1,
      sym_type,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(65), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [823] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LT,
    STATE(34), 1,
      sym_attr_list,
    ACTIONS(71), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(69), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(75), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(79), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(83), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(87), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [974] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_float,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_prim_type,
    STATE(180), 1,
      sym_value_info,
    STATE(198), 1,
      sym_type,
    STATE(199), 1,
      sym_tensor_type,
    ACTIONS(91), 15,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(95), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(99), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1071] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_float,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_prim_type,
    STATE(180), 1,
      sym_value_info,
    STATE(198), 1,
      sym_type,
    STATE(199), 1,
      sym_tensor_type,
    ACTIONS(91), 15,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(105), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(109), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1168] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_float,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      sym_prim_type,
    STATE(83), 1,
      sym_value_info,
    STATE(198), 1,
      sym_type,
    STATE(199), 1,
      sym_tensor_type,
    ACTIONS(91), 15,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1207] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    STATE(45), 1,
      sym_prim_type,
    STATE(177), 1,
      sym_typed_id,
    STATE(199), 1,
      sym_tensor_type,
    STATE(208), 1,
      sym_type,
    ACTIONS(15), 16,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(115), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(119), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1301] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_float,
    STATE(45), 1,
      sym_prim_type,
    STATE(180), 1,
      sym_value_info,
    STATE(198), 1,
      sym_type,
    STATE(199), 1,
      sym_tensor_type,
    ACTIONS(91), 15,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(127), 17,
      sym_id,
      anon_sym_bfloat16,
      anon_sym_bool,
      anon_sym_complex128,
      anon_sym_complex64,
      anon_sym_double,
      anon_sym_float,
      anon_sym_float16,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_int8,
      anon_sym_string,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_uint8,
  [1389] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym_id,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    STATE(204), 1,
      sym_include_keyword,
    STATE(205), 1,
      sym_other_data_list,
    STATE(40), 2,
      sym_function_or_include,
      aux_sym_model_repeat1,
    STATE(80), 2,
      sym_function,
      sym_include,
  [1419] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym_id,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    STATE(204), 1,
      sym_include_keyword,
    STATE(205), 1,
      sym_other_data_list,
    STATE(41), 2,
      sym_function_or_include,
      aux_sym_model_repeat1,
    STATE(80), 2,
      sym_function,
      sym_include,
  [1449] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_id,
    ACTIONS(142), 1,
      anon_sym_LT,
    ACTIONS(145), 1,
      anon_sym_PERCENT,
    STATE(204), 1,
      sym_include_keyword,
    STATE(205), 1,
      sym_other_data_list,
    STATE(40), 2,
      sym_function_or_include,
      aux_sym_model_repeat1,
    STATE(80), 2,
      sym_function,
      sym_include,
  [1479] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(133), 1,
      sym_id,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_include_keyword,
    STATE(205), 1,
      sym_other_data_list,
    STATE(40), 2,
      sym_function_or_include,
      aux_sym_model_repeat1,
    STATE(80), 2,
      sym_function,
      sym_include,
  [1509] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(133), 1,
      sym_id,
    ACTIONS(135), 1,
      anon_sym_PERCENT,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_include_keyword,
    STATE(205), 1,
      sym_other_data_list,
    STATE(38), 2,
      sym_function_or_include,
      aux_sym_model_repeat1,
    STATE(80), 2,
      sym_function,
      sym_include,
  [1539] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    STATE(153), 2,
      sym_prim_constant,
      sym_key_value_list,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PERCENT,
  [1571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 6,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_GT,
  [1586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PERCENT,
  [1599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PERCENT,
  [1612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 7,
      sym_id,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_GT,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 6,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_GT,
  [1637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(127), 1,
      sym_prim_constant,
    STATE(225), 1,
      sym_prim_constants,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_prim_constant,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_tensor_dim,
    STATE(216), 1,
      sym_tensor_dims,
    ACTIONS(170), 3,
      sym_id,
      sym_int_constant,
      anon_sym_QMARK,
  [1691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(127), 1,
      sym_prim_constant,
    STATE(220), 1,
      sym_prim_constants,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(127), 1,
      sym_prim_constant,
    STATE(196), 1,
      sym_prim_constants,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_qualified_id_repeat1,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(176), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [1745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 6,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_GT,
  [1757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_prim_constant,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1775] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(190), 1,
      anon_sym_GT,
    STATE(130), 1,
      aux_sym_fun_attr_list_repeat1,
    STATE(194), 1,
      sym_attr_type,
  [1797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_id,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
  [1815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym_tensor_dim,
    ACTIONS(170), 3,
      sym_id,
      sym_int_constant,
      anon_sym_QMARK,
  [1830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LT,
    STATE(173), 1,
      sym_fun_attr_list,
    STATE(217), 1,
      sym_fun_inout_list,
    STATE(221), 1,
      sym_value_info_list,
  [1849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(161), 1,
      sym_prim_constant,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      anon_sym_COLON,
    STATE(194), 1,
      sym_attr_type,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1881] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_LT,
    STATE(175), 1,
      sym_fun_attr_list,
    STATE(219), 1,
      sym_fun_inout_list,
    STATE(221), 1,
      sym_value_info_list,
  [1900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(186), 1,
      sym_prim_constant,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(221), 1,
      sym_value_info_list,
    ACTIONS(208), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
  [1930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym_tensor_dim,
    ACTIONS(170), 3,
      sym_id,
      sym_int_constant,
      anon_sym_QMARK,
  [1945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
      anon_sym_PERCENT,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_qualified_id_repeat1,
    ACTIONS(176), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [1979] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LT,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_node_inputs,
    STATE(191), 1,
      sym_attr_list,
  [1995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_fun_attr_list,
    STATE(219), 1,
      sym_fun_inout_list,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 4,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
      anon_sym_PERCENT,
  [2021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_qualified_id_repeat1,
    ACTIONS(222), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [2035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
      anon_sym_PERCENT,
  [2045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
      anon_sym_PERCENT,
  [2055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(145), 1,
      sym_tensor_dim,
    ACTIONS(170), 3,
      sym_id,
      sym_int_constant,
      anon_sym_QMARK,
  [2067] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_qualified_id_repeat1,
    ACTIONS(230), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
      anon_sym_PERCENT,
  [2091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 4,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
      anon_sym_PERCENT,
  [2101] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_fun_attr_list,
    STATE(217), 1,
      sym_fun_inout_list,
  [2117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_prim_constants_repeat1,
  [2130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_value_info_list_repeat1,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_GT,
    STATE(84), 1,
      aux_sym_other_data_list_repeat1,
  [2156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym_id,
  [2169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_GT,
    STATE(86), 1,
      aux_sym_attr_list_repeat1,
  [2182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_id,
    ACTIONS(260), 1,
      anon_sym_GT,
    STATE(154), 1,
      sym_attr,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_id,
    ACTIONS(264), 1,
      anon_sym_GT,
    STATE(111), 1,
      sym_attr,
  [2208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_node_inputs_repeat1,
  [2221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_fun_inout_list_repeat1,
  [2234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_GT,
    STATE(86), 1,
      aux_sym_attr_list_repeat1,
  [2247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_tensor_dims_repeat1,
  [2260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_id,
    ACTIONS(278), 1,
      anon_sym_GT,
    STATE(154), 1,
      sym_attr,
  [2273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_node_inputs_repeat1,
  [2286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_GT,
    STATE(115), 1,
      aux_sym_other_data_list_repeat1,
  [2299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_value_info_list_repeat1,
  [2312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_GT,
    STATE(91), 1,
      aux_sym_attr_list_repeat1,
  [2325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(188), 1,
      anon_sym_COLON,
    STATE(194), 1,
      sym_attr_type,
  [2338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_node_inputs_repeat1,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
  [2360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_id,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
  [2373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_fun_inout_list_repeat1,
  [2386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_id,
    ACTIONS(311), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [2397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_id,
    ACTIONS(315), 1,
      anon_sym_GT,
    STATE(183), 1,
      sym_attr,
  [2410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_GT,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_fun_attr_list_repeat1,
  [2423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DOT,
  [2432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_id,
    ACTIONS(320), 1,
      anon_sym_GT,
    STATE(97), 1,
      sym_attr,
  [2445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_id,
    ACTIONS(324), 1,
      anon_sym_GT,
    STATE(167), 1,
      sym_other_data,
  [2458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_id,
    ACTIONS(222), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [2469] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      aux_sym_key_value_list_repeat1,
  [2482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_GT,
    STATE(130), 1,
      aux_sym_fun_attr_list_repeat1,
  [2495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_prim_constants_repeat1,
  [2508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_id,
    ACTIONS(335), 1,
      anon_sym_GT,
    STATE(167), 1,
      sym_other_data,
  [2521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_EQ,
    STATE(114), 1,
      aux_sym_typed_id_list_repeat1,
  [2534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_GT,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_other_data_list_repeat1,
  [2547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      aux_sym_attr_value_list_repeat1,
  [2560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_id,
    ACTIONS(349), 1,
      anon_sym_GT,
    STATE(95), 1,
      sym_other_data,
  [2573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_tensor_dims_repeat1,
  [2586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_fun_inout_list_repeat1,
  [2599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_key_value_list_repeat1,
  [2612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_str_constant,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_key_value_pair,
  [2625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_value_info_list_repeat1,
  [2638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      aux_sym_attr_value_list_repeat1,
  [2651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym_id,
    STATE(36), 1,
      sym_node_call,
    STATE(71), 1,
      sym_qualified_id,
  [2664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_typed_id_list_repeat1,
  [2677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_id,
    ACTIONS(376), 1,
      anon_sym_GT,
    STATE(183), 1,
      sym_attr,
  [2690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_prim_constants_repeat1,
  [2703] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_attr_value_list_repeat1,
  [2716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_tensor_dims_repeat1,
  [2729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_GT,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_fun_attr_list_repeat1,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_key_value_list_repeat1,
  [2755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_str_constant,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_key_value_pair,
  [2768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_str_constant,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_key_value_pair,
  [2781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_EQ,
    STATE(125), 1,
      aux_sym_typed_id_list_repeat1,
  [2794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_id,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [2812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_fun_inout_list,
  [2822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [2830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_statement_list,
  [2840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_id,
    STATE(154), 1,
      sym_attr,
  [2850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [2866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_statement_list,
  [2876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_id,
    STATE(183), 1,
      sym_attr,
  [2886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_statement_list,
  [2904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_id,
    STATE(39), 1,
      sym_graph,
  [2922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_fun_inout_list,
  [2948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [2980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [2988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_str_constant,
    STATE(163), 1,
      sym_key_value_pair,
  [2998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      sym_id,
  [3120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_fun_inout_list,
  [3130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(231), 1,
      sym_fun_inout_list,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_statement_list,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_fun_inout_list,
  [3200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_fun_inout_list,
  [3210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_EQ,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
  [3228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_id,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
  [3238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_value_info_list,
  [3256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_id,
    STATE(167), 1,
      sym_other_data,
  [3266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_statement_list,
  [3284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_node_inputs,
  [3294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_EQ,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COLON,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [3338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_id,
  [3345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_id,
  [3352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_EQ_GT,
  [3359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_id,
  [3366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_EQ,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_EQ_GT,
  [3380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_str_constant,
  [3387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      sym_id,
  [3394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
  [3401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_id,
  [3408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_id,
  [3415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_include,
  [3422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
  [3429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_EQ,
  [3436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_id,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_id,
  [3450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_id,
  [3464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_EQ_GT,
  [3478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_str_constant,
  [3485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_EQ_GT,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [3499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_EQ_GT,
  [3506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_id,
  [3513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_id,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_LBRACE,
  [3527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_id,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
  [3548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
  [3555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
  [3569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 166,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 313,
  [SMALL_STATE(9)] = 364,
  [SMALL_STATE(10)] = 415,
  [SMALL_STATE(11)] = 466,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 556,
  [SMALL_STATE(14)] = 601,
  [SMALL_STATE(15)] = 643,
  [SMALL_STATE(16)] = 673,
  [SMALL_STATE(17)] = 713,
  [SMALL_STATE(18)] = 753,
  [SMALL_STATE(19)] = 793,
  [SMALL_STATE(20)] = 823,
  [SMALL_STATE(21)] = 857,
  [SMALL_STATE(22)] = 887,
  [SMALL_STATE(23)] = 916,
  [SMALL_STATE(24)] = 945,
  [SMALL_STATE(25)] = 974,
  [SMALL_STATE(26)] = 1013,
  [SMALL_STATE(27)] = 1042,
  [SMALL_STATE(28)] = 1071,
  [SMALL_STATE(29)] = 1110,
  [SMALL_STATE(30)] = 1139,
  [SMALL_STATE(31)] = 1168,
  [SMALL_STATE(32)] = 1207,
  [SMALL_STATE(33)] = 1244,
  [SMALL_STATE(34)] = 1273,
  [SMALL_STATE(35)] = 1301,
  [SMALL_STATE(36)] = 1337,
  [SMALL_STATE(37)] = 1363,
  [SMALL_STATE(38)] = 1389,
  [SMALL_STATE(39)] = 1419,
  [SMALL_STATE(40)] = 1449,
  [SMALL_STATE(41)] = 1479,
  [SMALL_STATE(42)] = 1509,
  [SMALL_STATE(43)] = 1539,
  [SMALL_STATE(44)] = 1558,
  [SMALL_STATE(45)] = 1571,
  [SMALL_STATE(46)] = 1586,
  [SMALL_STATE(47)] = 1599,
  [SMALL_STATE(48)] = 1612,
  [SMALL_STATE(49)] = 1625,
  [SMALL_STATE(50)] = 1637,
  [SMALL_STATE(51)] = 1655,
  [SMALL_STATE(52)] = 1673,
  [SMALL_STATE(53)] = 1691,
  [SMALL_STATE(54)] = 1709,
  [SMALL_STATE(55)] = 1727,
  [SMALL_STATE(56)] = 1745,
  [SMALL_STATE(57)] = 1757,
  [SMALL_STATE(58)] = 1775,
  [SMALL_STATE(59)] = 1797,
  [SMALL_STATE(60)] = 1815,
  [SMALL_STATE(61)] = 1830,
  [SMALL_STATE(62)] = 1849,
  [SMALL_STATE(63)] = 1864,
  [SMALL_STATE(64)] = 1881,
  [SMALL_STATE(65)] = 1900,
  [SMALL_STATE(66)] = 1915,
  [SMALL_STATE(67)] = 1930,
  [SMALL_STATE(68)] = 1945,
  [SMALL_STATE(69)] = 1955,
  [SMALL_STATE(70)] = 1965,
  [SMALL_STATE(71)] = 1979,
  [SMALL_STATE(72)] = 1995,
  [SMALL_STATE(73)] = 2011,
  [SMALL_STATE(74)] = 2021,
  [SMALL_STATE(75)] = 2035,
  [SMALL_STATE(76)] = 2045,
  [SMALL_STATE(77)] = 2055,
  [SMALL_STATE(78)] = 2067,
  [SMALL_STATE(79)] = 2081,
  [SMALL_STATE(80)] = 2091,
  [SMALL_STATE(81)] = 2101,
  [SMALL_STATE(82)] = 2117,
  [SMALL_STATE(83)] = 2130,
  [SMALL_STATE(84)] = 2143,
  [SMALL_STATE(85)] = 2156,
  [SMALL_STATE(86)] = 2169,
  [SMALL_STATE(87)] = 2182,
  [SMALL_STATE(88)] = 2195,
  [SMALL_STATE(89)] = 2208,
  [SMALL_STATE(90)] = 2221,
  [SMALL_STATE(91)] = 2234,
  [SMALL_STATE(92)] = 2247,
  [SMALL_STATE(93)] = 2260,
  [SMALL_STATE(94)] = 2273,
  [SMALL_STATE(95)] = 2286,
  [SMALL_STATE(96)] = 2299,
  [SMALL_STATE(97)] = 2312,
  [SMALL_STATE(98)] = 2325,
  [SMALL_STATE(99)] = 2338,
  [SMALL_STATE(100)] = 2351,
  [SMALL_STATE(101)] = 2360,
  [SMALL_STATE(102)] = 2373,
  [SMALL_STATE(103)] = 2386,
  [SMALL_STATE(104)] = 2397,
  [SMALL_STATE(105)] = 2410,
  [SMALL_STATE(106)] = 2423,
  [SMALL_STATE(107)] = 2432,
  [SMALL_STATE(108)] = 2445,
  [SMALL_STATE(109)] = 2458,
  [SMALL_STATE(110)] = 2469,
  [SMALL_STATE(111)] = 2482,
  [SMALL_STATE(112)] = 2495,
  [SMALL_STATE(113)] = 2508,
  [SMALL_STATE(114)] = 2521,
  [SMALL_STATE(115)] = 2534,
  [SMALL_STATE(116)] = 2547,
  [SMALL_STATE(117)] = 2560,
  [SMALL_STATE(118)] = 2573,
  [SMALL_STATE(119)] = 2586,
  [SMALL_STATE(120)] = 2599,
  [SMALL_STATE(121)] = 2612,
  [SMALL_STATE(122)] = 2625,
  [SMALL_STATE(123)] = 2638,
  [SMALL_STATE(124)] = 2651,
  [SMALL_STATE(125)] = 2664,
  [SMALL_STATE(126)] = 2677,
  [SMALL_STATE(127)] = 2690,
  [SMALL_STATE(128)] = 2703,
  [SMALL_STATE(129)] = 2716,
  [SMALL_STATE(130)] = 2729,
  [SMALL_STATE(131)] = 2742,
  [SMALL_STATE(132)] = 2755,
  [SMALL_STATE(133)] = 2768,
  [SMALL_STATE(134)] = 2781,
  [SMALL_STATE(135)] = 2794,
  [SMALL_STATE(136)] = 2802,
  [SMALL_STATE(137)] = 2812,
  [SMALL_STATE(138)] = 2822,
  [SMALL_STATE(139)] = 2830,
  [SMALL_STATE(140)] = 2840,
  [SMALL_STATE(141)] = 2850,
  [SMALL_STATE(142)] = 2858,
  [SMALL_STATE(143)] = 2866,
  [SMALL_STATE(144)] = 2876,
  [SMALL_STATE(145)] = 2886,
  [SMALL_STATE(146)] = 2894,
  [SMALL_STATE(147)] = 2904,
  [SMALL_STATE(148)] = 2912,
  [SMALL_STATE(149)] = 2922,
  [SMALL_STATE(150)] = 2930,
  [SMALL_STATE(151)] = 2938,
  [SMALL_STATE(152)] = 2948,
  [SMALL_STATE(153)] = 2956,
  [SMALL_STATE(154)] = 2964,
  [SMALL_STATE(155)] = 2972,
  [SMALL_STATE(156)] = 2980,
  [SMALL_STATE(157)] = 2988,
  [SMALL_STATE(158)] = 2998,
  [SMALL_STATE(159)] = 3006,
  [SMALL_STATE(160)] = 3014,
  [SMALL_STATE(161)] = 3022,
  [SMALL_STATE(162)] = 3030,
  [SMALL_STATE(163)] = 3038,
  [SMALL_STATE(164)] = 3046,
  [SMALL_STATE(165)] = 3054,
  [SMALL_STATE(166)] = 3062,
  [SMALL_STATE(167)] = 3070,
  [SMALL_STATE(168)] = 3078,
  [SMALL_STATE(169)] = 3086,
  [SMALL_STATE(170)] = 3094,
  [SMALL_STATE(171)] = 3102,
  [SMALL_STATE(172)] = 3110,
  [SMALL_STATE(173)] = 3120,
  [SMALL_STATE(174)] = 3130,
  [SMALL_STATE(175)] = 3138,
  [SMALL_STATE(176)] = 3148,
  [SMALL_STATE(177)] = 3156,
  [SMALL_STATE(178)] = 3164,
  [SMALL_STATE(179)] = 3172,
  [SMALL_STATE(180)] = 3182,
  [SMALL_STATE(181)] = 3190,
  [SMALL_STATE(182)] = 3200,
  [SMALL_STATE(183)] = 3210,
  [SMALL_STATE(184)] = 3218,
  [SMALL_STATE(185)] = 3228,
  [SMALL_STATE(186)] = 3238,
  [SMALL_STATE(187)] = 3246,
  [SMALL_STATE(188)] = 3256,
  [SMALL_STATE(189)] = 3266,
  [SMALL_STATE(190)] = 3274,
  [SMALL_STATE(191)] = 3284,
  [SMALL_STATE(192)] = 3294,
  [SMALL_STATE(193)] = 3302,
  [SMALL_STATE(194)] = 3310,
  [SMALL_STATE(195)] = 3317,
  [SMALL_STATE(196)] = 3324,
  [SMALL_STATE(197)] = 3331,
  [SMALL_STATE(198)] = 3338,
  [SMALL_STATE(199)] = 3345,
  [SMALL_STATE(200)] = 3352,
  [SMALL_STATE(201)] = 3359,
  [SMALL_STATE(202)] = 3366,
  [SMALL_STATE(203)] = 3373,
  [SMALL_STATE(204)] = 3380,
  [SMALL_STATE(205)] = 3387,
  [SMALL_STATE(206)] = 3394,
  [SMALL_STATE(207)] = 3401,
  [SMALL_STATE(208)] = 3408,
  [SMALL_STATE(209)] = 3415,
  [SMALL_STATE(210)] = 3422,
  [SMALL_STATE(211)] = 3429,
  [SMALL_STATE(212)] = 3436,
  [SMALL_STATE(213)] = 3443,
  [SMALL_STATE(214)] = 3450,
  [SMALL_STATE(215)] = 3457,
  [SMALL_STATE(216)] = 3464,
  [SMALL_STATE(217)] = 3471,
  [SMALL_STATE(218)] = 3478,
  [SMALL_STATE(219)] = 3485,
  [SMALL_STATE(220)] = 3492,
  [SMALL_STATE(221)] = 3499,
  [SMALL_STATE(222)] = 3506,
  [SMALL_STATE(223)] = 3513,
  [SMALL_STATE(224)] = 3520,
  [SMALL_STATE(225)] = 3527,
  [SMALL_STATE(226)] = 3534,
  [SMALL_STATE(227)] = 3541,
  [SMALL_STATE(228)] = 3548,
  [SMALL_STATE(229)] = 3555,
  [SMALL_STATE(230)] = 3562,
  [SMALL_STATE(231)] = 3569,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(142),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tensor_constant, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_constant, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id_list, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id_list, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tensor_constant, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_constant, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_call, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_call, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tensor_constant, 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_constant, 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_inputs, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_inputs, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_inputs, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_inputs, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_inputs, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_inputs, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_inputs, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_inputs, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_call, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_call, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2), SHIFT_REPEAT(81),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2), SHIFT_REPEAT(117),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2), SHIFT_REPEAT(209),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_type, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5, .production_id = 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_type, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_type, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_constants, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_id, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_type, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_constants, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_dims, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_attr_list_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_constant, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_dims, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_id, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_id_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_id_repeat1, 2), SHIFT_REPEAT(212),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_or_include, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_other_data_list_repeat1, 2), SHIFT_REPEAT(188),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_other_data_list_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type, 1), SHIFT(184),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_list_repeat1, 2), SHIFT_REPEAT(140),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_list_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_inputs_repeat1, 2), SHIFT_REPEAT(14),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_inputs_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_inout_list_repeat1, 2), SHIFT_REPEAT(222),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_inout_list_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_dims, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_info_list_repeat1, 2), SHIFT_REPEAT(35),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_info_list_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_attr_value, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_id, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_attr_list_repeat1, 2), SHIFT_REPEAT(144),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prim_constants_repeat1, 2), SHIFT_REPEAT(65),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prim_constants_repeat1, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typed_id_list_repeat1, 2), SHIFT_REPEAT(32),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typed_id_list_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(7),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_value_list_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(157),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_constants, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tensor_dims_repeat1, 2), SHIFT_REPEAT(77),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tensor_dims_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id_list, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_inout_list, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data, 3, .production_id = 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_inout_list, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_ref, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info_list, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3, .production_id = 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info_list, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_inout_list, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_dim, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info_list, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_inout_list, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info_list, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [475] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_value_info_list, 2), REDUCE(sym_fun_inout_list, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data_list, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_type, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_attr_list, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_attr_list, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data_list, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data_list, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_keyword, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data_list, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_attr_list, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_attr_list, 5),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_onnx_text(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
