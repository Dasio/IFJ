#include "interpreter.h"

/**
 * "Global" tape containing instructions
 */
static InstructionVector *tape;

static STACK stack;

void initInterpret() {
	// Already initialization
	if(tape)
		return;
	// TODO: Test optimal initial size
	tape = InstructionInitVector(256);

	StackInit(stack);

	return;
}
