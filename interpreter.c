#include "interpreter.h"

/**
 * "Global" tape containing instructions
 */
static InstructionVector *tape;

/**
 * Pointer to instruction tape at beginning
 */
static Instruction *IP;

static STACK stack;

void initInterpret() {
	StackInit(stack);

	// TODO: Test optimal initial size
	if(!tape)
		tape = InstructionVectorInit(256);

	return;
}

void setInitialInterpreterPosition(uint32_t pos) {
	assert(tape && "Call initInterpret() before running interpreter");

	IP = InstructionVectorAt(tape, pos);

	assert(IP && "IP still not initialized, no instruction on tape?");
}

/**
 * CORE
 */

static void interpretationStep() {
	switch(IP->opcode) {
		case INST_AddI:
			return;
		default:
			assert(false && "Unknown instruction");
	}
}

void runInterpretation() {
	assert(tape && "Call initInterpret() before running interpreter");

	if(!IP)
		setInitialInterpreterPosition(0);

	while(true) {
		interpretationStep();
	}
}
