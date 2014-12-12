#include "initializer.h"

InitializedItems initialized_items;

extern InstructionVector *tape; // interpreter.c
extern Stack stack; // interpreter.c
extern Scanner scannerMain; // instructions_regular.c
extern TokenVector *tokenVectorMain;

void deinitRegisteredStructures() {

	if(initialized_items.stack) {
		StackDataVectorFree(stack.vect); // interpreter.c
		initialized_items.stack = false;
	}

	if(initialized_items.tape) {
		InstructionVectorFree(tape); // interpreter.c
		initialized_items.tape = false;
	}

	if(initialized_items.tokens) {
		destroyTokenVector(tokenVectorMain); // instructions_regular.c
		initialized_items.tokens = false;
	}

	if(initialized_items.scanner) {
		destroyScanner(&scannerMain); // instructions_regular.c
		initialized_items.scanner = false;
	}
}
