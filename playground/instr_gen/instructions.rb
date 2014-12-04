#!/usr/bin/env ruby
require "pp"
require "yaml"

all_variable_types = [:local, :global, :const]
all_data_types = [:string, :double, :int, :bool]

comb = [["L", "G"],      # VarType DST
		["C", "L", "G","x"], # VarType SRC1
		["C", "L", "G","x"], # VarType SRC2
							  # DST Implicit
		["I", "D", "B", "S", "x"], # SRC1
		["I", "D", "B", "S", "x"]  # SRC2
	]

comb = comb.first.product(*comb[1..-1]).map(&:join).reject {|s| s =~ /CC/}

instructions = {
	neg: /[LG][xLG][x][ID]x/,
	not: /[LG][xLG][x][B]x/,

	mul: /[LG][CLG][CLG][ID][ID]/,
	div: /[LG][CLG][CLG][ID][ID]/,
	and: /[LG][CLG][CLG]BB/,
	add: /[LG][CLG][CLG]([ID][ID]|SS)/,
	sub: /[LG][CLG][CLG][ID][ID]/,
	or:  /[LG][CLG][CLG]BB/,
	xor: /[LG][CLG][CLG]BB/,
	l:   /[LG][CLG][CLG](II|DD|BB|SS)/,
	g:   /[LG][CLG][CLG](II|DD|BB|SS)/,
	le:  /[LG][CLG][CLG](II|DD|BB|SS)/,
	ge:  /[LG][CLG][CLG](II|DD|BB|SS)/,
	eq:  /[LG][CLG][CLG](II|DD|BB|SS)/,
	ne:  /[LG][CLG][CLG](II|DD|BB|SS)/
}

	c = File.open("instructions.c", "w")
	h = File.open("instructions.h", "w")

	h.puts '#include "system.h"'
	h.puts '#include "instruction.h"'
	h.puts '#include "stack.h"'
	h.puts
	h.puts '#ifndef _INSTRUCTIONS_H'
	h.puts '#define _INSTRUCTIONS_H'

	c.puts '#include "instructions.h"'
	c.puts 'extern Stack stack;'
	c.puts '#define vectorAt(v, i) (StackData*)((StackData*)(v->array) + (i))'
	c.puts
	c.puts '#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"'

prototypes = {}

instructions.each do |name, regex|
	puts name
	prototypes[name] = comb.select {|s| s =~ regex}

	prototypes[name].each do |proto|
		function_name = "Instr_#{name.upcase}_#{proto}"

		# Prototype
		h.puts "void #{function_name}(Instruction *i);"

		# Definition
		c.puts "void #{function_name}(Instruction *i) {"
		c.puts "	// Pointers to local data"
		c.puts "	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);"
		c.puts "	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);"
		c.puts "	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);"
		c.puts ""
		c.puts "	// Pointers to global data"
		c.puts "	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);"
		c.puts "	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);"
		c.puts "	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);"
		c.puts ""
		c.puts "	global_dst->int_ = local_src1->int_ + local_src2->int_;"
		c.puts "}"
		c.puts
	end

end

c.puts "#pragma clang diagnostic pop"
c.puts "#pragma GCC diagnostic pop"


	h.puts '#endif'

h.close
c.close
