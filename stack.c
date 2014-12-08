#include "stack.h"

// From interpreter.c global
extern Stack stack;

static char data_type_translation[] = { 'S', 'D', 'I', 'B', 'U' };

static char var_type_translation[] = { 'L', 'G', 'C', 'U' };

void dumpStack() {
	uint32_t stack_length = stack.vect->used;
	StackData *first = StackDataVectorFirst(stack.vect);

	fprintf(stderr, "============================\n");
	fprintf(stderr, "STACK:");
	fprintf(stderr, "\n");
	for(uint32_t i = 0; i < stack_length; i++) {
		StackData *s = first+i;
		fprintf(stderr, "%d\t\t", i);
		fprintf(stderr, "%c\t", data_type_translation[s->data_type]);
		fprintf(stderr, "%c\n",  var_type_translation[s->var_type]);
		fprintf(stderr, "\n");
	}
	fprintf(stderr, "==== BP: %lu === SP: %lu ===\n", stack.BP, stack.SP);
}

GenVectorFunctions(StackData)
