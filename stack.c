#include "stack.h"

// From interpreter.c global
extern Stack stack;

static char data_type_translation[] = { 'S', 'D', 'I', 'B', 'U' };

static char var_type_translation[] = { 'L', 'G', 'C', 'U' };

void dumpStack() {
	int64_t stack_length = stack.SP;
	StackData *first = StackDataVectorFirst(stack.vect);

	fprintf(stderr, "============================\n");
	fprintf(stderr, "STACK:");
	fprintf(stderr, "\n");
	for(int64_t i = 0; i <= stack_length; i++) {
		StackData *s = first+i;
		fprintf(stderr, "%ld\t", i);
		fprintf(stderr, "%c ", data_type_translation[s->data_type]);
		fprintf(stderr, "%c ",  var_type_translation[s->var_type]);
		fprintf(stderr, "%d ",  s->initialized);
		fprintf(stderr, "\n");
	}
	fprintf(stderr, "   BP: %lu \n   SP: %lu\n", stack.BP, stack.SP);
}

GenVectorFunctions(StackData)
