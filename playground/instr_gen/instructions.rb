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
	neg: /[xLG][x][ID]x/,
	not: /[xLG][x][B]x/,

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
operations = {:add => "+", :mul => "*"}

def operation(name, src1, src2)
	"#{src1} #{operations[op]} #{src2}"
end

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
		c.puts ""
		c.puts "	local_dst->int_ = local_src1->int_ + local_src2->int_;"
		c.puts "}"
		c.puts
	end

end

c.puts '
#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#endif'


	h.puts '#endif'

h.close
c.close
