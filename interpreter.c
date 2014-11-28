#include "interpreter.h"

/**
 * "Global" tape containing instructions
 */
static InstructionVector *tape;

/**
 * Pointer to instruction tape at beginning
 */
static uint64_t IP;

static STACK stack;

void initInterpret() {
	StackInit(stack);

	// TODO: Test optimal initial size
	if(!tape)
		tape = InstructionVectorInit(256);

	return;
}

void setInitialInterpreterPosition(uint64_t pos) {
	assert(tape && "Call initInterpret() before running interpreter");

	IP = pos;
}

/**
 * CORE
 */

static bool interpretationStep() {
	Instruction *IP_ptr = InstructionVectorAt(tape, IP);
	assert(IP_ptr);

	switch(IP_ptr->opcode) {
		case INST_Halt:
			return false;
		default:
			assert(false && "Unknown instruction");
			//setError()
			return false;
	}
}

void runInterpretation() {
	assert(tape && "Call initInterpret() before running interpreter");

	if(!IP)
		setInitialInterpreterPosition(0);

	while(true) {
		bool ret = interpretationStep();
		if(!ret)
			break;
	}
}
