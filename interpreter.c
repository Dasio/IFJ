#include "interpreter.h"

/**
 * "Global" tape containing instructions
 */
static InstructionVector *tape;

/**
 * Pointer to instruction tape at beginning
 */
static uint64_t IP = 0;

Stack stack;

void initInterpret() {
	stack.vect = StackDataVectorInit(DEFAULT_STACK_SIZE);

	// TODO: Test optimal initial size
	if(!tape)
		tape = InstructionVectorInit(512);
}

/**
 * Generated
 */

//void Instr_ADD_LLCII(Instruction *i) {
	// i->src_1.offset;

	// StackData *dst = StackDataVectorAt(stack.vect, stack.BP+(i->src_1.offset));
	// StackData *src_1 = StackDataVectorAt(stack.vect, stack.BP+(i->src_2.offset));
	// int constant = i->dst.int;
//}

// void Inst_ADD_II(Operand* a, Operand* b, Operand* c) {
// 	printf("%d\n", b->int_ + c->int_);
// }

// void Inst_ADD_ID(Operand* a, Operand* b, Operand* c) {
// 	printf("%f\n", b->int_ + c->double_);
// }

// void Inst_ADD_DI(Operand* a, Operand* b, Operand* c) {
// 	printf("%f\n", b->double_ + c->int_);
// }

void Inst_ADD_DD(Instruction *i) {
	printf("%f\n", i->dst.double_ + i->src_1.double_ + i->src_2.double_);
}

/**
 * CORE
 */

void appendInstruction(InstructionOp op, InstrFuncPtr instr, Operand* a, Operand* b, Operand* c) {

	int instruction_offset = op << 10 |
						a->var_type << 8 | b->var_type << 6 | c->var_type << 4 |
						b->data_type << 2 |c->data_type;

	printf("%d\n", instruction_offset);

	//Instruction i = (Instruction) {.instr = NULL, .dst = *a, .src_1 = *b, .src_2 = *c};
	//InstructionVectorAppend(tape, i);
}

void generateInstruction(InstructionOp op, Operand* a, Operand* b, Operand* c) {
	switch(op) {
		case ADD:{
			// Invalid pointers yet
			if(b->data_type == INT && c->data_type == INT) {
				appendInstruction(op, Instr_ADD_CLII, a, b, c);
			} else if (b->data_type == INT && c->data_type == DOUBLE) {
				appendInstruction(op, Instr_ADD_CLII, a, b, c);
			} else if (b->data_type == DOUBLE && c->data_type == INT) {
				appendInstruction(op, Instr_ADD_CLII, a, b, c);
			} else if(b->data_type == DOUBLE && c->data_type == DOUBLE) {
				appendInstruction(op, Instr_ADD_CLII, a, b, c);
			} else {
				appendInstruction(op, Instr_ADD_CLII, a, b, c);
			}
			break;
		}
		default: {
			appendInstruction(op, Instr_ADD_CLII, a, b, c);
		}
	}
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
