#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 227
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  sym_source_file = 38,
  sym_prim_constant = 39,
  sym_prim_constants = 40,
  sym_prim_type = 41,
  sym_tensor_dim = 42,
  sym_tensor_dims = 43,
  sym_tensor_type = 44,
  sym_type = 45,
  sym_value_info = 46,
  sym_value_info_list = 47,
  sym_tensor_constant = 48,
  sym_attr_ref = 49,
  sym_single_attr_value = 50,
  sym_attr_value_list = 51,
  sym_attr_value = 52,
  sym_attr_type = 53,
  sym_attr = 54,
  sym_attr_list = 55,
  sym_typed_id = 56,
  sym_typed_id_list = 57,
  sym_qualified_id = 58,
  sym_node_inputs = 59,
  sym_node_call = 60,
  sym_node = 61,
  sym__expr = 62,
  sym_statement = 63,
  sym_statement_list = 64,
  sym_graph = 65,
  sym_key_value_pair = 66,
  sym_key_value_list = 67,
  sym_other_data = 68,
  sym_other_data_list = 69,
  sym_model = 70,
  sym_fun_attr_list = 71,
  sym_fun_inout_list = 72,
  sym_function = 73,
  aux_sym_prim_constants_repeat1 = 74,
  aux_sym_tensor_dims_repeat1 = 75,
  aux_sym_value_info_list_repeat1 = 76,
  aux_sym_attr_value_list_repeat1 = 77,
  aux_sym_attr_list_repeat1 = 78,
  aux_sym_typed_id_list_repeat1 = 79,
  aux_sym_qualified_id_repeat1 = 80,
  aux_sym_node_inputs_repeat1 = 81,
  aux_sym_statement_list_repeat1 = 82,
  aux_sym_key_value_list_repeat1 = 83,
  aux_sym_other_data_list_repeat1 = 84,
  aux_sym_model_repeat1 = 85,
  aux_sym_fun_attr_list_repeat1 = 86,
  aux_sym_fun_inout_list_repeat1 = 87,
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
  [78] = 54,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '[') ADVANCE(146);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '}') ADVANCE(153);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '[') ADVANCE(146);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(160);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(15);
      if (lookahead == '8') ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(16);
      if (lookahead == '8') ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(129);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(139);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '4') ADVANCE(131);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(141);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(127);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(137);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(125);
      END_STATE();
    case 21:
      if (lookahead == '6') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == '8') ADVANCE(117);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(10);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 57:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '[') ADVANCE(146);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '}') ADVANCE(153);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(149);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(156);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead == '[') ADVANCE(146);
      if (lookahead == ']') ADVANCE(147);
      if (lookahead == '{') ADVANCE(152);
      if (lookahead == '}') ADVANCE(153);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == '3') ADVANCE(65);
      if (lookahead == '6') ADVANCE(68);
      if (lookahead == '8') ADVANCE(134);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '3') ADVANCE(66);
      if (lookahead == '6') ADVANCE(69);
      if (lookahead == '8') ADVANCE(144);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == '6') ADVANCE(70);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '1') ADVANCE(74);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '2') ADVANCE(130);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '2') ADVANCE(140);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '2') ADVANCE(75);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '4') ADVANCE(132);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '4') ADVANCE(142);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '4') ADVANCE(120);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '6') ADVANCE(128);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '6') ADVANCE(138);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '6') ADVANCE(126);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '6') ADVANCE(114);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '8') ADVANCE(118);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(103);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(104);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'b') ADVANCE(87);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(107);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(122);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(97);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'g') ADVANCE(136);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(91);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'i') ADVANCE(93);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(116);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(79);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(80);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(96);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(98);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'm') ADVANCE(99);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(82);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(102);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(105);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(90);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(106);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(76);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(85);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'o') ADVANCE(77);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(86);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(83);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(100);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(61);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(123);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(64);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(62);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'u') ADVANCE(78);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'x') ADVANCE(63);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_str_constant);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_int_constant);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_float_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_bfloat16);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_bfloat16);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_complex128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_complex128);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_complex64);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_complex64);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_double);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '1') ADVANCE(73);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '1') ADVANCE(20);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_float16);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_float16);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_int16);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_int8);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_string);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_none);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 58},
  [40] = {.lex_state = 58},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 58},
  [44] = {.lex_state = 58},
  [45] = {.lex_state = 58},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 58},
  [48] = {.lex_state = 58},
  [49] = {.lex_state = 58},
  [50] = {.lex_state = 58},
  [51] = {.lex_state = 58},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 58},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 58},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 58},
  [61] = {.lex_state = 58},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 58},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 58},
  [67] = {.lex_state = 58},
  [68] = {.lex_state = 58},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 58},
  [78] = {.lex_state = 58},
  [79] = {.lex_state = 58},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 58},
  [83] = {.lex_state = 58},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 58},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 58},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 58},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 58},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 58},
  [104] = {.lex_state = 58},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 58},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 58},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 58},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 58},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 58},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 58},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 58},
  [122] = {.lex_state = 58},
  [123] = {.lex_state = 58},
  [124] = {.lex_state = 58},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 58},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 58},
  [131] = {.lex_state = 58},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 58},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 58},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 58},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 58},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 58},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 58},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 58},
  [172] = {.lex_state = 58},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 58},
  [180] = {.lex_state = 58},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 58},
  [187] = {.lex_state = 58},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 58},
  [193] = {.lex_state = 58},
  [194] = {.lex_state = 58},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 58},
  [198] = {.lex_state = 58},
  [199] = {.lex_state = 3},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 58},
  [202] = {.lex_state = 58},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 58},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 58},
  [207] = {.lex_state = 58},
  [208] = {.lex_state = 58},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 58},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 58},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 58},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 58},
  [226] = {.lex_state = 3},
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
  },
  [1] = {
    [sym_source_file] = STATE(224),
    [sym_graph] = STATE(55),
    [sym_other_data_list] = STATE(139),
    [sym_model] = STATE(222),
    [sym_function] = STATE(222),
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
    STATE(40), 1,
      sym_prim_type,
    STATE(54), 1,
      sym_tensor_type,
    STATE(182), 1,
      sym_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(177), 3,
      sym_attr_ref,
      sym_single_attr_value,
      sym_attr_value_list,
    STATE(96), 4,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(54), 1,
      sym_tensor_type,
    STATE(154), 1,
      sym_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(177), 3,
      sym_attr_ref,
      sym_single_attr_value,
      sym_attr_value_list,
    STATE(96), 4,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(54), 1,
      sym_tensor_type,
    STATE(118), 1,
      sym_single_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(96), 4,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(54), 1,
      sym_tensor_type,
    STATE(164), 1,
      sym_single_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(96), 4,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(54), 1,
      sym_tensor_type,
    STATE(164), 1,
      sym_single_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(96), 4,
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
  [266] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_id,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_prim_type,
    STATE(78), 1,
      sym_tensor_type,
    STATE(130), 1,
      sym_typed_id,
    STATE(223), 1,
      sym_typed_id_list,
    STATE(225), 1,
      sym_type,
    STATE(7), 2,
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
  [317] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_prim_type,
    STATE(78), 1,
      sym_tensor_type,
    STATE(130), 1,
      sym_typed_id,
    STATE(223), 1,
      sym_typed_id_list,
    STATE(225), 1,
      sym_type,
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
  [368] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_id,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(40), 1,
      sym_prim_type,
    STATE(54), 1,
      sym_tensor_type,
    STATE(164), 1,
      sym_single_attr_value,
    ACTIONS(11), 2,
      sym_str_constant,
      sym_float_constant,
    STATE(96), 4,
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
  [415] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_prim_type,
    STATE(78), 1,
      sym_tensor_type,
    STATE(130), 1,
      sym_typed_id,
    STATE(223), 1,
      sym_typed_id_list,
    STATE(225), 1,
      sym_type,
    STATE(7), 2,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(72), 1,
      sym_qualified_id,
    STATE(95), 1,
      sym_tensor_type,
    STATE(151), 3,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(72), 1,
      sym_qualified_id,
    STATE(95), 1,
      sym_tensor_type,
    STATE(151), 3,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(72), 1,
      sym_qualified_id,
    STATE(95), 1,
      sym_tensor_type,
    STATE(94), 3,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(72), 1,
      sym_qualified_id,
    STATE(95), 1,
      sym_tensor_type,
    STATE(151), 3,
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
  [643] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    ACTIONS(53), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_prim_type,
    STATE(172), 1,
      sym_typed_id,
    STATE(198), 1,
      sym_tensor_type,
    STATE(225), 1,
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
  [683] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_id,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_prim_type,
    STATE(102), 1,
      sym_value_info,
    STATE(198), 1,
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
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
    ACTIONS(59), 17,
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
  [753] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    ACTIONS(63), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_prim_type,
    STATE(172), 1,
      sym_typed_id,
    STATE(198), 1,
      sym_tensor_type,
    STATE(225), 1,
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
  [823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_GT,
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
  [853] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LT,
    STATE(34), 1,
      sym_attr_list,
    ACTIONS(75), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(73), 17,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [945] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_float,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_prim_type,
    STATE(102), 1,
      sym_value_info,
    STATE(198), 1,
      sym_tensor_type,
    STATE(208), 1,
      sym_type,
    ACTIONS(87), 15,
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
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(91), 17,
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
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LT,
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
  [1071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(103), 17,
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
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(107), 17,
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
  [1129] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_float,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_prim_type,
    STATE(170), 1,
      sym_value_info,
    STATE(198), 1,
      sym_tensor_type,
    STATE(208), 1,
      sym_type,
    ACTIONS(87), 15,
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
  [1168] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_id,
    STATE(40), 1,
      sym_prim_type,
    STATE(172), 1,
      sym_typed_id,
    STATE(198), 1,
      sym_tensor_type,
    STATE(225), 1,
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
  [1205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_LT,
    ACTIONS(113), 17,
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
  [1234] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_float,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym_prim_type,
    STATE(170), 1,
      sym_value_info,
    STATE(198), 1,
      sym_tensor_type,
    STATE(208), 1,
      sym_type,
    ACTIONS(87), 15,
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
    STATE(40), 1,
      sym_prim_type,
    STATE(170), 1,
      sym_value_info,
    STATE(198), 1,
      sym_tensor_type,
    STATE(208), 1,
      sym_type,
    ACTIONS(87), 15,
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
  [1389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 7,
      sym_id,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_GT,
  [1402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    STATE(166), 2,
      sym_prim_constant,
      sym_key_value_list,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 6,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_GT,
  [1436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_qualified_id_repeat1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(141), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [1454] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym_id,
    STATE(204), 1,
      sym_other_data_list,
    STATE(59), 2,
      sym_function,
      aux_sym_model_repeat1,
  [1474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      sym_id,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_other_data_list,
    STATE(59), 2,
      sym_function,
      aux_sym_model_repeat1,
  [1494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym_prim_constant,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1512] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(132), 1,
      sym_prim_constant,
    STATE(200), 1,
      sym_prim_constants,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1530] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_tensor_dim,
    STATE(211), 1,
      sym_tensor_dims,
    ACTIONS(153), 3,
      sym_id,
      sym_int_constant,
      anon_sym_QMARK,
  [1548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym_prim_constant,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym_id,
    STATE(204), 1,
      sym_other_data_list,
    STATE(43), 2,
      sym_function,
      aux_sym_model_repeat1,
  [1586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
  [1598] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      anon_sym_GT,
    STATE(125), 1,
      aux_sym_fun_attr_list_repeat1,
    STATE(221), 1,
      sym_attr_type,
  [1620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 6,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
  [1632] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(132), 1,
      sym_prim_constant,
    STATE(217), 1,
      sym_prim_constants,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 6,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_GT,
  [1662] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_id,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
  [1680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(147), 1,
      sym_id,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(204), 1,
      sym_other_data_list,
    STATE(42), 2,
      sym_function,
      aux_sym_model_repeat1,
  [1700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 6,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_GT,
  [1712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LT,
      anon_sym_GT,
  [1724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(132), 1,
      sym_prim_constant,
    STATE(218), 1,
      sym_prim_constants,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1742] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 1,
      sym_id,
    ACTIONS(192), 1,
      anon_sym_LT,
    STATE(204), 1,
      sym_other_data_list,
    STATE(59), 2,
      sym_function,
      aux_sym_model_repeat1,
  [1762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym_tensor_dim,
    ACTIONS(153), 3,
      sym_id,
      sym_int_constant,
      anon_sym_QMARK,
  [1777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(156), 1,
      sym_prim_constant,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_value_info_list,
    ACTIONS(197), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
  [1807] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LT,
    STATE(153), 1,
      sym_fun_attr_list,
    STATE(212), 1,
      sym_fun_inout_list,
    STATE(216), 1,
      sym_value_info_list,
  [1826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_int_constant,
    STATE(184), 1,
      sym_prim_constant,
    ACTIONS(11), 3,
      sym_id,
      sym_str_constant,
      sym_float_constant,
  [1841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LT,
    STATE(175), 1,
      sym_fun_attr_list,
    STATE(203), 1,
      sym_fun_inout_list,
    STATE(216), 1,
      sym_value_info_list,
  [1860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(165), 1,
      anon_sym_COLON,
    STATE(221), 1,
      sym_attr_type,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym_tensor_dim,
    ACTIONS(153), 3,
      sym_id,
      sym_int_constant,
      anon_sym_QMARK,
  [1892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(144), 1,
      sym_tensor_dim,
    ACTIONS(153), 3,
      sym_id,
      sym_int_constant,
      anon_sym_QMARK,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1914] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_fun_attr_list,
    STATE(203), 1,
      sym_fun_inout_list,
  [1930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_qualified_id_repeat1,
    ACTIONS(141), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [1944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LT,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_node_inputs,
    STATE(191), 1,
      sym_attr_list,
  [1960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_qualified_id_repeat1,
    ACTIONS(213), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [1974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_qualified_id_repeat1,
    ACTIONS(217), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [1988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LT,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym_fun_attr_list,
    STATE(212), 1,
      sym_fun_inout_list,
  [2004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_tensor_dims_repeat1,
  [2017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
  [2026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_id,
  [2039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_id,
    ACTIONS(231), 1,
      anon_sym_GT,
    STATE(152), 1,
      sym_other_data,
  [2052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_GT,
    STATE(80), 1,
      aux_sym_other_data_list_repeat1,
  [2065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_GT,
    STATE(81), 1,
      aux_sym_attr_list_repeat1,
  [2078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_id,
    ACTIONS(245), 1,
      anon_sym_GT,
    STATE(148), 1,
      sym_attr,
  [2091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_id,
    ACTIONS(249), 1,
      anon_sym_GT,
    STATE(105), 1,
      sym_attr,
  [2104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_node_inputs_repeat1,
  [2117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_GT,
    STATE(81), 1,
      aux_sym_attr_list_repeat1,
  [2130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_fun_inout_list_repeat1,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_id,
    ACTIONS(258), 1,
      anon_sym_GT,
    STATE(148), 1,
      sym_attr,
  [2156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      aux_sym_tensor_dims_repeat1,
  [2169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_node_inputs_repeat1,
  [2182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_GT,
    STATE(110), 1,
      aux_sym_other_data_list_repeat1,
  [2195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_GT,
    STATE(85), 1,
      aux_sym_attr_list_repeat1,
  [2208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_value_info_list_repeat1,
  [2221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(165), 1,
      anon_sym_COLON,
    STATE(221), 1,
      sym_attr_type,
  [2234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_node_inputs_repeat1,
  [2247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_id,
    ACTIONS(177), 1,
      anon_sym_EQ,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
  [2260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_GT,
  [2269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_fun_inout_list_repeat1,
  [2282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_id,
    ACTIONS(296), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [2293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DOT,
  [2302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_id,
    ACTIONS(300), 1,
      anon_sym_GT,
    STATE(173), 1,
      sym_attr,
  [2315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_GT,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_fun_attr_list_repeat1,
  [2328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_value_info_list_repeat1,
  [2341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_id,
    ACTIONS(309), 1,
      anon_sym_GT,
    STATE(91), 1,
      sym_attr,
  [2354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
  [2363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_GT,
    STATE(125), 1,
      aux_sym_fun_attr_list_repeat1,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_id,
    ACTIONS(213), 2,
      anon_sym_LPAREN,
      anon_sym_LT,
  [2387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      aux_sym_key_value_list_repeat1,
  [2400] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_prim_constants_repeat1,
  [2413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_id,
    ACTIONS(322), 1,
      anon_sym_GT,
    STATE(152), 1,
      sym_other_data,
  [2426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_GT,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_other_data_list_repeat1,
  [2439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_EQ,
    STATE(111), 1,
      aux_sym_typed_id_list_repeat1,
  [2452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_prim_constants_repeat1,
  [2465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_fun_inout_list_repeat1,
  [2478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_id,
    ACTIONS(337), 1,
      anon_sym_GT,
    STATE(90), 1,
      sym_other_data,
  [2491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_attr_value_list_repeat1,
  [2504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
  [2513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_key_value_list_repeat1,
  [2526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_attr_value_list_repeat1,
  [2539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_str_constant,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      sym_key_value_pair,
  [2552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_value_info_list_repeat1,
  [2565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_id,
    ACTIONS(361), 1,
      anon_sym_GT,
    STATE(173), 1,
      sym_attr,
  [2578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_str_constant,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym_key_value_pair,
  [2591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_id,
    STATE(36), 1,
      sym_node_call,
    STATE(72), 1,
      sym_qualified_id,
  [2604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_EQ,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_typed_id_list_repeat1,
  [2617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_GT,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_fun_attr_list_repeat1,
  [2630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_str_constant,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      sym_key_value_pair,
  [2643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      aux_sym_tensor_dims_repeat1,
  [2656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_key_value_list_repeat1,
  [2669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_attr_value_list_repeat1,
  [2682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_EQ,
    STATE(124), 1,
      aux_sym_typed_id_list_repeat1,
  [2695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 3,
      ts_builtin_sym_end,
      sym_id,
      anon_sym_LT,
  [2704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_prim_constants_repeat1,
  [2717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [2725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [2741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_statement_list,
  [2751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_id,
    STATE(148), 1,
      sym_attr,
  [2761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_fun_inout_list,
  [2771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_id,
    STATE(48), 1,
      sym_graph,
  [2781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [2789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_statement_list,
  [2799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_statement_list,
  [2817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_fun_inout_list,
  [2835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_id,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
  [2877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_fun_inout_list,
  [2903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_EQ,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      sym_id,
  [3051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_EQ,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_fun_inout_list,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(131), 1,
      sym_statement_list,
  [3095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym_str_constant,
    STATE(158), 1,
      sym_key_value_pair,
  [3121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_id,
    STATE(173), 1,
      sym_attr,
  [3131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_fun_inout_list,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_fun_inout_list,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_id,
    STATE(152), 1,
      sym_other_data,
  [3185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_id,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [3195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_statement_list,
  [3205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_value_info_list,
  [3215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [3223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_node_inputs,
  [3233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_id,
  [3240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_id,
  [3247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_id,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [3261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_EQ_GT,
  [3268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_EQ,
  [3275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_id,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_EQ_GT,
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
  [3296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_id,
  [3303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_id,
  [3310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_EQ_GT,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_id,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_id,
  [3338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_id,
  [3345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_id,
  [3352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
  [3359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COLON,
  [3366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_EQ_GT,
  [3380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
  [3387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
  [3394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym_id,
  [3401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_EQ_GT,
  [3408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
  [3415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
  [3422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
  [3429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
  [3436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_EQ,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
  [3450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_EQ,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
  [3464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_id,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 166,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 368,
  [SMALL_STATE(10)] = 415,
  [SMALL_STATE(11)] = 466,
  [SMALL_STATE(12)] = 511,
  [SMALL_STATE(13)] = 556,
  [SMALL_STATE(14)] = 601,
  [SMALL_STATE(15)] = 643,
  [SMALL_STATE(16)] = 683,
  [SMALL_STATE(17)] = 723,
  [SMALL_STATE(18)] = 753,
  [SMALL_STATE(19)] = 793,
  [SMALL_STATE(20)] = 823,
  [SMALL_STATE(21)] = 853,
  [SMALL_STATE(22)] = 887,
  [SMALL_STATE(23)] = 916,
  [SMALL_STATE(24)] = 945,
  [SMALL_STATE(25)] = 984,
  [SMALL_STATE(26)] = 1013,
  [SMALL_STATE(27)] = 1042,
  [SMALL_STATE(28)] = 1071,
  [SMALL_STATE(29)] = 1100,
  [SMALL_STATE(30)] = 1129,
  [SMALL_STATE(31)] = 1168,
  [SMALL_STATE(32)] = 1205,
  [SMALL_STATE(33)] = 1234,
  [SMALL_STATE(34)] = 1273,
  [SMALL_STATE(35)] = 1301,
  [SMALL_STATE(36)] = 1337,
  [SMALL_STATE(37)] = 1363,
  [SMALL_STATE(38)] = 1389,
  [SMALL_STATE(39)] = 1402,
  [SMALL_STATE(40)] = 1421,
  [SMALL_STATE(41)] = 1436,
  [SMALL_STATE(42)] = 1454,
  [SMALL_STATE(43)] = 1474,
  [SMALL_STATE(44)] = 1494,
  [SMALL_STATE(45)] = 1512,
  [SMALL_STATE(46)] = 1530,
  [SMALL_STATE(47)] = 1548,
  [SMALL_STATE(48)] = 1566,
  [SMALL_STATE(49)] = 1586,
  [SMALL_STATE(50)] = 1598,
  [SMALL_STATE(51)] = 1620,
  [SMALL_STATE(52)] = 1632,
  [SMALL_STATE(53)] = 1650,
  [SMALL_STATE(54)] = 1662,
  [SMALL_STATE(55)] = 1680,
  [SMALL_STATE(56)] = 1700,
  [SMALL_STATE(57)] = 1712,
  [SMALL_STATE(58)] = 1724,
  [SMALL_STATE(59)] = 1742,
  [SMALL_STATE(60)] = 1762,
  [SMALL_STATE(61)] = 1777,
  [SMALL_STATE(62)] = 1792,
  [SMALL_STATE(63)] = 1807,
  [SMALL_STATE(64)] = 1826,
  [SMALL_STATE(65)] = 1841,
  [SMALL_STATE(66)] = 1860,
  [SMALL_STATE(67)] = 1877,
  [SMALL_STATE(68)] = 1892,
  [SMALL_STATE(69)] = 1904,
  [SMALL_STATE(70)] = 1914,
  [SMALL_STATE(71)] = 1930,
  [SMALL_STATE(72)] = 1944,
  [SMALL_STATE(73)] = 1960,
  [SMALL_STATE(74)] = 1974,
  [SMALL_STATE(75)] = 1988,
  [SMALL_STATE(76)] = 2004,
  [SMALL_STATE(77)] = 2017,
  [SMALL_STATE(78)] = 2026,
  [SMALL_STATE(79)] = 2039,
  [SMALL_STATE(80)] = 2052,
  [SMALL_STATE(81)] = 2065,
  [SMALL_STATE(82)] = 2078,
  [SMALL_STATE(83)] = 2091,
  [SMALL_STATE(84)] = 2104,
  [SMALL_STATE(85)] = 2117,
  [SMALL_STATE(86)] = 2130,
  [SMALL_STATE(87)] = 2143,
  [SMALL_STATE(88)] = 2156,
  [SMALL_STATE(89)] = 2169,
  [SMALL_STATE(90)] = 2182,
  [SMALL_STATE(91)] = 2195,
  [SMALL_STATE(92)] = 2208,
  [SMALL_STATE(93)] = 2221,
  [SMALL_STATE(94)] = 2234,
  [SMALL_STATE(95)] = 2247,
  [SMALL_STATE(96)] = 2260,
  [SMALL_STATE(97)] = 2269,
  [SMALL_STATE(98)] = 2282,
  [SMALL_STATE(99)] = 2293,
  [SMALL_STATE(100)] = 2302,
  [SMALL_STATE(101)] = 2315,
  [SMALL_STATE(102)] = 2328,
  [SMALL_STATE(103)] = 2341,
  [SMALL_STATE(104)] = 2354,
  [SMALL_STATE(105)] = 2363,
  [SMALL_STATE(106)] = 2376,
  [SMALL_STATE(107)] = 2387,
  [SMALL_STATE(108)] = 2400,
  [SMALL_STATE(109)] = 2413,
  [SMALL_STATE(110)] = 2426,
  [SMALL_STATE(111)] = 2439,
  [SMALL_STATE(112)] = 2452,
  [SMALL_STATE(113)] = 2465,
  [SMALL_STATE(114)] = 2478,
  [SMALL_STATE(115)] = 2491,
  [SMALL_STATE(116)] = 2504,
  [SMALL_STATE(117)] = 2513,
  [SMALL_STATE(118)] = 2526,
  [SMALL_STATE(119)] = 2539,
  [SMALL_STATE(120)] = 2552,
  [SMALL_STATE(121)] = 2565,
  [SMALL_STATE(122)] = 2578,
  [SMALL_STATE(123)] = 2591,
  [SMALL_STATE(124)] = 2604,
  [SMALL_STATE(125)] = 2617,
  [SMALL_STATE(126)] = 2630,
  [SMALL_STATE(127)] = 2643,
  [SMALL_STATE(128)] = 2656,
  [SMALL_STATE(129)] = 2669,
  [SMALL_STATE(130)] = 2682,
  [SMALL_STATE(131)] = 2695,
  [SMALL_STATE(132)] = 2704,
  [SMALL_STATE(133)] = 2717,
  [SMALL_STATE(134)] = 2725,
  [SMALL_STATE(135)] = 2733,
  [SMALL_STATE(136)] = 2741,
  [SMALL_STATE(137)] = 2751,
  [SMALL_STATE(138)] = 2761,
  [SMALL_STATE(139)] = 2771,
  [SMALL_STATE(140)] = 2781,
  [SMALL_STATE(141)] = 2789,
  [SMALL_STATE(142)] = 2799,
  [SMALL_STATE(143)] = 2807,
  [SMALL_STATE(144)] = 2817,
  [SMALL_STATE(145)] = 2825,
  [SMALL_STATE(146)] = 2835,
  [SMALL_STATE(147)] = 2843,
  [SMALL_STATE(148)] = 2851,
  [SMALL_STATE(149)] = 2859,
  [SMALL_STATE(150)] = 2867,
  [SMALL_STATE(151)] = 2877,
  [SMALL_STATE(152)] = 2885,
  [SMALL_STATE(153)] = 2893,
  [SMALL_STATE(154)] = 2903,
  [SMALL_STATE(155)] = 2911,
  [SMALL_STATE(156)] = 2919,
  [SMALL_STATE(157)] = 2927,
  [SMALL_STATE(158)] = 2935,
  [SMALL_STATE(159)] = 2943,
  [SMALL_STATE(160)] = 2953,
  [SMALL_STATE(161)] = 2961,
  [SMALL_STATE(162)] = 2969,
  [SMALL_STATE(163)] = 2977,
  [SMALL_STATE(164)] = 2985,
  [SMALL_STATE(165)] = 2993,
  [SMALL_STATE(166)] = 3001,
  [SMALL_STATE(167)] = 3009,
  [SMALL_STATE(168)] = 3017,
  [SMALL_STATE(169)] = 3025,
  [SMALL_STATE(170)] = 3033,
  [SMALL_STATE(171)] = 3041,
  [SMALL_STATE(172)] = 3051,
  [SMALL_STATE(173)] = 3059,
  [SMALL_STATE(174)] = 3067,
  [SMALL_STATE(175)] = 3075,
  [SMALL_STATE(176)] = 3085,
  [SMALL_STATE(177)] = 3095,
  [SMALL_STATE(178)] = 3103,
  [SMALL_STATE(179)] = 3111,
  [SMALL_STATE(180)] = 3121,
  [SMALL_STATE(181)] = 3131,
  [SMALL_STATE(182)] = 3141,
  [SMALL_STATE(183)] = 3149,
  [SMALL_STATE(184)] = 3159,
  [SMALL_STATE(185)] = 3167,
  [SMALL_STATE(186)] = 3175,
  [SMALL_STATE(187)] = 3185,
  [SMALL_STATE(188)] = 3195,
  [SMALL_STATE(189)] = 3205,
  [SMALL_STATE(190)] = 3215,
  [SMALL_STATE(191)] = 3223,
  [SMALL_STATE(192)] = 3233,
  [SMALL_STATE(193)] = 3240,
  [SMALL_STATE(194)] = 3247,
  [SMALL_STATE(195)] = 3254,
  [SMALL_STATE(196)] = 3261,
  [SMALL_STATE(197)] = 3268,
  [SMALL_STATE(198)] = 3275,
  [SMALL_STATE(199)] = 3282,
  [SMALL_STATE(200)] = 3289,
  [SMALL_STATE(201)] = 3296,
  [SMALL_STATE(202)] = 3303,
  [SMALL_STATE(203)] = 3310,
  [SMALL_STATE(204)] = 3317,
  [SMALL_STATE(205)] = 3324,
  [SMALL_STATE(206)] = 3331,
  [SMALL_STATE(207)] = 3338,
  [SMALL_STATE(208)] = 3345,
  [SMALL_STATE(209)] = 3352,
  [SMALL_STATE(210)] = 3359,
  [SMALL_STATE(211)] = 3366,
  [SMALL_STATE(212)] = 3373,
  [SMALL_STATE(213)] = 3380,
  [SMALL_STATE(214)] = 3387,
  [SMALL_STATE(215)] = 3394,
  [SMALL_STATE(216)] = 3401,
  [SMALL_STATE(217)] = 3408,
  [SMALL_STATE(218)] = 3415,
  [SMALL_STATE(219)] = 3422,
  [SMALL_STATE(220)] = 3429,
  [SMALL_STATE(221)] = 3436,
  [SMALL_STATE(222)] = 3443,
  [SMALL_STATE(223)] = 3450,
  [SMALL_STATE(224)] = 3457,
  [SMALL_STATE(225)] = 3464,
  [SMALL_STATE(226)] = 3471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(135),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_list_repeat1, 2), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id_list, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tensor_constant, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_constant, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id_list, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tensor_constant, 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_constant, 6),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tensor_constant, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_constant, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_call, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_call, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_inputs, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_inputs, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_inputs, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_inputs, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_inputs, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_inputs, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_inputs, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_inputs, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_call, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_call, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_type, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_type, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_id, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_constants, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_constants, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5, .production_id = 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_type, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_type, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_list, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2), SHIFT_REPEAT(75),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_repeat1, 2), SHIFT_REPEAT(114),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_dims, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_constant, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_attr_list_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_dims, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_id, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_id_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_id_repeat1, 2), SHIFT_REPEAT(207),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 3),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type, 1), SHIFT(159),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_other_data_list_repeat1, 2), SHIFT_REPEAT(186),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_other_data_list_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_list_repeat1, 2), SHIFT_REPEAT(137),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_list_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_inputs_repeat1, 2), SHIFT_REPEAT(14),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_inputs_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_inout_list_repeat1, 2), SHIFT_REPEAT(206),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_inout_list_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_dims, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_info_list_repeat1, 2), SHIFT_REPEAT(35),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_info_list_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_attr_value, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_id, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_attr_list_repeat1, 2), SHIFT_REPEAT(180),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prim_constants_repeat1, 2), SHIFT_REPEAT(64),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prim_constants_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typed_id_list_repeat1, 2), SHIFT_REPEAT(31),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typed_id_list_repeat1, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_value_list_repeat1, 2), SHIFT_REPEAT(9),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_value_list_repeat1, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 7, .production_id = 6),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(179),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tensor_dims_repeat1, 2), SHIFT_REPEAT(68),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tensor_dims_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id_list, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim_constants, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_id, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_inout_list, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_inout_list, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tensor_dim, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_pair, 3, .production_id = 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_ref, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info_list, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value_list, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data, 3, .production_id = 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info_list, 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info_list, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_inout_list, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_inout_list, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_value, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 5),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_info_list, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data_list, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data_list, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data_list, 5),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_type, 2),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_value_info_list, 2), REDUCE(sym_fun_inout_list, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_data_list, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_attr_list, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_attr_list, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_attr_list, 5),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_attr_list, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [517] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
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
