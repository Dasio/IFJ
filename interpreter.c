#include "interpreter.h"

/**
 * "Global" tape containing instructions
 */
InstructionVector *tape;
extern int instr_counter;

/**
 * Pointer to instruction tape at beginning
 */
uint64_t IP = 0;

Stack stack;

void initInterpret() {
	stack.vect = StackDataVectorInit(DEFAULT_STACK_SIZE);

	// TODO: Test optimal initial size
	if(!tape)
		tape = InstructionVectorInit(512);
}

/**
 * CORE
 */

void generateExprInstruction(InstructionOp op, Operand* a, Operand* b, Operand* c) {

	instr_counter++;
	int instruction_offset = op << 8 | b->var_type << 6 | c->var_type << 4 |
						b->data_type << 2 | c->data_type;

	assert(instruction_table[instruction_offset]);
	Instruction i = (Instruction) {.instr = instruction_table[instruction_offset],
										 .dst = *a, .src_1 = *b, .src_2 = *c};
	InstructionVectorAppend(tape, i);
}

void generateInstruction(InstructionOp op, Operand* a, Operand* b) {

	instr_counter++;
	// switch(op) {
	// 	case(CALL):
	// }

	//Instruction i = (Instruction) {.instr = NULL, .dst = *a, .src_1 = *b, .src_2 = *c};
	//InstructionVectorAppend(tape, i);
}

static bool interpretationStep() {
	Instruction *IP_ptr = InstructionVectorAt(tape, IP);
	assert(IP_ptr);

	//(IP_ptr->instr)(IP_ptr);
	Instr_ADD_CLII(IP_ptr);

	return false;
}

void runInterpretation() {
	assert(tape && "Call initInterpret() before running interpreter");

	while(true) {
	 	bool ret = interpretationStep();
	 	if(!ret)
	 		break;
	}
}
