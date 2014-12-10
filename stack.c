#include "stack.h"

// From interpreter.c global
extern Stack stack;

#ifndef NDEBUG
	static const char data_type_translation[] = { 'S', 'D', 'I', 'B', 'U' };
	static const char var_type_translation[] = { 'L', 'G', 'C', 'U' };
#endif

void dumpStack() {
#ifndef NDEBUG

	//int64_t stack_length = stack.SP;
	//StackData *first = StackDataVectorFirst(stack.vect);

	//DEBUG_PRINT("============================\n");
	DEBUG_PRINT("STACK:");
	/*DEBUG_PRINT("\n");
	for(int64_t i = 0; i <= stack_length; i++) {
		StackData *s = first+i;
		DEBUG_PRINT("%ld\t", i);
		DEBUG_PRINT("%c ", data_type_translation[s->data_type]);
		DEBUG_PRINT("%c ",  var_type_translation[s->var_type]);
		DEBUG_PRINT("%d ",  s->initialized);
		DEBUG_PRINT("\n");
	}*/
	DEBUG_PRINT("   BP: %ld", stack.BP);
#endif
}

GenVectorFunctions(StackData)
