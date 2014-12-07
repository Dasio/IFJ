#!/usr/bin/env ruby
require "pp"
require "yaml"

all_variable_types = [:local, :global, :const]
all_data_types = [:string, :double, :int, :bool]

conversion = {
					var_type: {"L" => 0, "G" => 1, "C" => 2},
					data_type: {"S" => 0, "D" => 1, "I" => 2, "B" => 3}
				}

instruction_codes = {
	neg: 0,
	not: 1,
	mul: 2,
	div: 3,
	and: 4,
	add: 5,
	sub: 6,
	or:  7,
	xor: 8,
	l:   9,
	g:   10,
	le:  11,
	ge:  12,
	eq:  13,
	ne:  14
}

func_table = {}

comb = [["C", "L", "G"], # VarType SRC1
		["C", "L", "G"], # VarType SRC2
							  # DST Implicit
		["I", "D", "B", "S"], # SRC1
		["I", "D", "B", "S"]  # SRC2
	]

comb = comb.first.product(*comb[1..-1]).map(&:join).reject {|s| s =~ /CC/}

instructions = {
	neg: /[LG].[ID]./,
	not: /[LG].[B]./,

	mul: /[CLG][CLG][ID][ID]/,
	div: /[CLG][CLG][ID][ID]/,
	and: /[CLG][CLG]BB/,
	add: /[CLG][CLG]([ID][ID]|SS)/,
	sub: /[CLG][CLG][ID][ID]/,
	or:  /[CLG][CLG]BB/,
	xor: /[CLG][CLG]BB/,
	l:   /[CLG][CLG](II|DD|BB|SS)/,
	g:   /[CLG][CLG](II|DD|BB|SS)/,
	le:  /[CLG][CLG](II|DD|BB|SS)/,
	ge:  /[CLG][CLG](II|DD|BB|SS)/,
	eq:  /[CLG][CLG](II|DD|BB|SS)/,
	ne:  /[CLG][CLG](II|DD|BB|SS)/
}

	c = File.open("../../instructions_generated.c", "w")
	h = File.open("../../instructions_generated.h", "w")

	h.puts '#include "system.h"'
	h.puts '#include "instruction.h"'
	h.puts '#include "stack.h"'
	h.puts '#include "memory_mgmt.h"'
	h.puts
	h.puts '#ifndef _INSTRUCTIONS_GENERATED_H'
	h.puts '#define _INSTRUCTIONS_GENERATED_H'

	c.puts '#include "instructions_generated.h"'
	c.puts 'extern Stack stack;'
	c.puts '#define vectorAt(v, i) (StackData*)((StackData*)(v->array) + (i))'
	c.puts
	c.puts '
#if defined(__clang__)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"

#elif defined(__GNUC__) || defined(__GNUG__)

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

#endif

'

	# Definition
	c.puts "#define extract_data() \\"
	c.puts "	/* Pointers to local data */ \\"
	c.puts "	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset); \\"
	c.puts "	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_2.offset); \\"
	c.puts "	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);   \\"
	c.puts "\\"
	c.puts "	/* Pointers to constants */ \\"
	c.puts "	int     *constant_src_1_I = &i->src_1.int_;   \\"
	c.puts "	bool    *constant_src_1_B = &i->src_1.bool_;  \\"
	c.puts "	double  *constant_src_1_D = &i->src_1.double_;\\"
	c.puts "	String  *constant_src_1_S =  i->src_1.str;    \\"
	c.puts "\\"
	c.puts "	int     *constant_src_2_I = &i->src_2.int_;   \\"
	c.puts "	bool    *constant_src_2_B = &i->src_2.bool_;  \\"
	c.puts "	double  *constant_src_2_D = &i->src_2.double_;\\"
	c.puts "	String  *constant_src_2_S =  i->src_2.str;    \\"
	c.puts "	/* Pointers to global data */ \\"
	c.puts "	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset); \\"
	c.puts "	StackData *global_src2 = vectorAt(stack.vect, i->src_2.offset);"
	c.puts ""



operators = {:add => "+", :mul => "*"}

def operation(name, src1, src2)
	"#{src1} #{operations[op]} #{src2}"
end

prototypes = {}
types = {"I" => "int_", "D" => "double_", "B" => "bool_", "S" => "str"}

instructions.each do |name, regex|
	puts name
	prototypes[name] = comb.select {|s| s =~ regex}

	prototypes[name].each do |proto|
		function_name = "Instr_#{name.upcase}_#{proto}"
		implemented = false

		# Prototype
		h.puts "void #{function_name}(Instruction *i);"

		c.puts "void #{function_name}(Instruction *i) {"
		c.puts "	extract_data() // Macro for unrolling pointers"

		#c.puts "	local_dst->int_ = local_src1->int_ + local_src2->int_;"
		c.puts "	//#{proto}"

		if proto[0] == "L"
			src1     = "local_src1->"+types[proto[2]].to_s
		elsif proto[0] == "G"
			src1     = "global_src1->"+types[proto[2]].to_s
		elsif proto[0] == "C"
			src1     = "*constant_src_1_"+proto[2]
			src1_raw = "constant_src_1_"+proto[2]
		end

		if proto[1] == "L"
			src2     = "local_src2->"+types[proto[3]].to_s
		elsif proto[1] == "G"
			src2     = "global_src2->"+types[proto[3]].to_s
		elsif proto[1] == "C"
			src2     = "*constant_src_2_"+proto[3]
			src2_raw = "constant_src_2_"+proto[3]
		end

		# Uninitialized access protection
		if proto[0] != "C"
			c.puts "	if(i->src_1.initialized == false) {"
			c.puts "		setError(ERR_UnitializedAccess);"
			c.puts "		die();"
			c.puts "	}"
		end

		if proto[1] != "C" && name != :neg && name != :not
			c.puts "	if(i->src_2.initialized == false) {"
			c.puts "		setError(ERR_UnitializedAccess);"
			c.puts "		die();"
			c.puts "	}"
		end
		c.puts

		# proto ma format "LLII"
		src_types = proto[2,2] # Vybere SRC1 a SRC2 typy ako string
		src_type1 = proto[2]
		src_type2 = proto[3]

		if    src_types == "II"
			case name # Instruction switch
			when :mul
				c.puts "	local_dst->int_ = #{src1} * #{src2};"; implemented = true
			when :div
				c.puts "	if(#{src2} == 0) {"
				c.puts "		setError(ERR_DivisionByZero);"
				c.puts "		die();"
				c.puts "		return;"
				c.puts "	}"
				c.puts ""
				c.puts "	local_dst->double_ = (double)#{src1} / #{src2};"; implemented = true
			when :add
				c.puts "	local_dst->int_ = #{src1} + #{src2};"; implemented = true
			when :sub
				c.puts "	local_dst->int_ = #{src1} - #{src2};"; implemented = true
			when :l
				c.puts "	local_dst->bool_ = #{src1} < #{src2};"; implemented = true
			when :g
				c.puts "	local_dst->bool_ = #{src1} > #{src2};"; implemented = true
			when :le
				c.puts "	local_dst->bool_ = #{src1} <= #{src2};"; implemented = true
			when :ge
				c.puts "	local_dst->bool_ = #{src1} >= #{src2};"; implemented = true
			when :eq
				c.puts "	local_dst->bool_ = #{src1} == #{src2};"; implemented = true
			when :ne
				c.puts "	local_dst->bool_ = #{src1} != #{src2};"; implemented = true
			end
		elsif src_types == "ID" || src_types == "DI" || src_types == "DD"
			case name # Instruction switch
			when :mul
				c.puts "	local_dst->double_ = #{src1} * #{src2};"; implemented = true
			when :div
				c.puts "	if(#{src2} == 0.0) {"
				c.puts "		setError(ERR_DivisionByZero);"
				c.puts "		die();"
				c.puts "		return;"
				c.puts "	}"
				c.puts ""
				c.puts "	local_dst->double_ = #{src1} / #{src2};"; implemented = true
			when :add
				c.puts "	local_dst->double_ = #{src1} + #{src2};"; implemented = true
			when :sub
				c.puts "	local_dst->double_ = #{src1} - #{src2};"; implemented = true
			when :l
				c.puts "	local_dst->bool_ = #{src1} < #{src2};"; implemented = true
			when :g
				c.puts "	local_dst->bool_ = #{src1} > #{src2};"; implemented = true
			when :le
				c.puts "	local_dst->bool_ = #{src1} <= #{src2};"; implemented = true
			when :ge
				c.puts "	local_dst->bool_ = #{src1} >= #{src2};"; implemented = true
			when :eq
				c.puts "	local_dst->bool_ = #{src1} == #{src2};"; implemented = true
			when :ne
				c.puts "	local_dst->bool_ = #{src1} != #{src2};"; implemented = true
			end
		elsif src_types == "BB"
			case name # Instruction switch
			when :and
				c.puts "	local_dst->bool_ = #{src1} && #{src2};"; implemented = true
			when :or
				c.puts "	local_dst->bool_ = #{src1} || #{src2};"; implemented = true
			when :xor
				c.puts "	local_dst->bool_ = #{src1} ^ #{src2};"; implemented = true
			when :l
				c.puts "	local_dst->bool_ = #{src1} < #{src2};"; implemented = true
			when :g
				c.puts "	local_dst->bool_ = #{src1} > #{src2};"; implemented = true
			when :le
				c.puts "	local_dst->bool_ = #{src1} <= #{src2};"; implemented = true
			when :ge
				c.puts "	local_dst->bool_ = #{src1} >= #{src2};"; implemented = true
			when :eq
				c.puts "	local_dst->bool_ = #{src1} == #{src2};"; implemented = true
			when :ne
				c.puts "	local_dst->bool_ = #{src1} != #{src2};"; implemented = true
			end
		elsif src_types == "SS"
			if name == :add
				c.puts "	local_dst->str = concatStringToString(#{proto[0] == "C" && src1_raw || src1}, #{proto[1] == "C" && src2_raw || src2});"
				implemented = true
			else
				c.puts ""
				c.puts "	int compare_result = strcmp(#{proto[0] == "C" && src1_raw || src1}->data, #{proto[1] == "C" && src2_raw || src2}->data);"
				case name # Instruction switch
				when :l
					c.puts "	local_dst->bool_ = compare_result < 0;"; implemented = true
				when :g
					c.puts "	local_dst->bool_ = compare_result > 0;"; implemented = true
				when :le
					c.puts "	local_dst->bool_ = compare_result <= 0;"; implemented = true
				when :ge
					c.puts "	local_dst->bool_ = compare_result >= 0;"; implemented = true
				when :eq
					c.puts "	local_dst->bool_ = compare_result == 0;"; implemented = true
				when :ne
					c.puts "	local_dst->bool_ = compare_result != 0;"; implemented = true
				end
			end
		end

		# Must be separated
		if src_types[0] == "B"
			case name
			when :not
				c.puts "	local_dst->bool_ = !#{src1};"; implemented = true
			end
		end

		if src_types[0] == "I"
			case name
			when :neg
				c.puts "	local_dst->int_ = (-1)* #{src1};"; implemented = true
			end
		end

		if src_types[0] == "D"
			case name
			when :neg
				c.puts "	local_dst->double_ = (-1)* #{src1};"; implemented = true
			end
		end
		#
		c.puts "	local_dst->initialized = true;"
		c.puts "	stack.SP = stack.SP + local_dst->sp_inc;"
		if not implemented
			c.puts
			c.puts "	assert(false && \"Instruction not implemented!\");"
		end
		c.puts "}"
		c.puts

		# Table generation
		if proto =~ /x/
			puts proto
			next
		end
		id = instruction_codes[name] << 8 |
			 conversion[:var_type][proto[0]] << 6 |
		     conversion[:var_type][proto[1]] << 4 |
		     conversion[:data_type][proto[2]] << 2 |
		     conversion[:data_type][proto[3]]
		puts "#{proto} - #{id}"

		func_table[id] = function_name
	end

end

c.puts '
#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#endif'

	h.puts
	# Max index
	func_size = func_table.max_by{|k,v| k}.first


	h.puts "const InstrFuncPtr instruction_table[#{func_size+1}];"

	c.puts "const InstrFuncPtr instruction_table[#{func_size+1}] = {"

	func_table.each_with_index do |(key,value),index|
		c.puts "	[#{key}] = #{value},"
	end

	c.puts "};"
	h.puts

	h.puts '#endif'

h.close
c.close