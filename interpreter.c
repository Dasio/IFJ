#include "interpreter.h"

/**
 * "Global" tape containing instructions
 */
static InstructionVector *tape;

/**
 * Pointer to instruction tape at beginning
 */
static uint64_t IP = 0;

static STACK stack;

void initInterpret() {
	StackInit(stack);

	// TODO: Test optimal initial size
	if(!tape)
		tape = InstructionVectorInit(256);

	return;
}

/**
 * CORE
 */

// void sum_i(Operand *a, Operand *b, Operand *c) {
// 	printf("%d\n", a->int_ + b->int_);
// }

// void sum_f(Operand *a, Operand *b, Operand *c) {
// 	printf("%f\n", a->double_ + b->double_);
// }

//const instrFunc instructions[2] = {sum_i, sum_f};

// void generate_add(Operand *a, Operand *b, Operand *c) {
// 	//instrFunc add_instructions = {sum_i, sum_f};

// 	if(b->data_type == DOUBLE && c->data_type == INT) {

// 		appendInstruction(sum_i);
// 	}
// }


static bool interpretationStep() {
	Instruction *IP_ptr = InstructionVectorAt(tape, IP);
	assert(IP_ptr);

	return true;
}



void runInterpretation() {
	assert(tape && "Call initInterpret() before running interpreter");

	// (instructions[I_])( &(Operand) {.data_type = INT, .int_ = 20},
	// 					&(Operand) {.data_type = INT, .int_ = 20},
	// 					&(Operand) {.data_type = INT, .int_ = 20});


	// (instructions[1])(  &(Operand) {.data_type = DOUBLE, .double_ = 20.5},
	// 					&(Operand) {.data_type = DOUBLE, .double_ = 20.8},
	// 					&(Operand) {.data_type = DOUBLE, .double_ = 20});
	// // while(true) {
	// 	bool ret = interpretationStep();
	// 	if(!ret)
	// 		break;
	// }
}
