(graph name: (id) @function)
(graph inputs: (value_info_list (value_info (id) @variable.parameter)))
(graph outputs: (value_info_list (value_info (id) @variable)))

(function name: (id) @function)
(function inputs: (fun_inout_list (id) @variable.parameter))
(function outputs: (fun_inout_list (id) @variable))

(tensor_constant (id) @variable)
(typed_id (id) @variable)
(node_inputs (id) @variable)

(type) @type
(prim_type) @type

(qualified_id) @function

(int_constant) @number
(float_constant) @number
(str_constant) @string
(unk) @constant
(none) @constant
(prim_constant (id) @constant)

(include_keyword) @keyword

(comment) @comment
