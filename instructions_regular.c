#include "instructions_regular.h"
#include "ctype.h"

extern void *mem_alloc(size_t len);
extern Stack stack;
extern uint64_t IP;

#define vectorAt(v, i) (StackData*)((StackData*)(v->array) + (i))

// READLN 6   [LG][SDI]  len DST
void Instr_READLN_LS(Instruction *i) {
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	bool begin=true;
	int c;

	String *str = mem_alloc(sizeof(String));
	*str = initEmptyString();
	while((c=getchar()) != EOF && c != '\n')
	{
		if(isspace(c) && begin)
		{
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else
		{
			begin=false;
			appendCharToString(str,c);
		}
	}

	mem_ptradd(str->data);

	local_dst->str = str;
	local_dst->initialized = true;
}

void Instr_READLN_LD(Instruction *i) {
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	bool start=false;
	char *error;
	int c;
	double d;

	String *str = mem_alloc(sizeof(String));
	*str = initEmptyString();
	while((c=getchar()) != EOF)
	{
		if(isspace(c) && start)
		{
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else if(!isspace(c))
		{
			start=true;
			appendCharToString(str,c);
		}
	}

	d = strtod(str->data,&error);

	mem_ptradd(str->data);

	if(*error != 0)
	{
		setError(ERR_ReadInput);
		return;
	}

	local_dst->double_ = d;
	local_dst->initialized = true;
}

void Instr_READLN_LI(Instruction *i) {
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	bool start=false;
	char *error;
	int c;
	int n;

	String *str = mem_alloc(sizeof(String));
	*str = initEmptyString();
	while((c=getchar()) != EOF)
	{
		if(isspace(c) && start)
		{
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else if(!isspace(c))
		{
			start=true;
			appendCharToString(str,c);
		}
	}

	n = strtol(str->data,&error,10);

	mem_ptradd(str->data);

	if(*error != 0)
	{
		setError(ERR_ReadInput);
		return;
	}

	local_dst->int_ = n;
	local_dst->initialized = true;
}

void Instr_READLN_GS(Instruction *i) {
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	bool begin=true;
	int c;

	String *str = mem_alloc(sizeof(String));
	*str = initEmptyString();
	while((c=getchar()) != EOF && c != '\n')
	{
		if(isspace(c) && begin)
		{
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else
		{
			begin=false;
			appendCharToString(str,c);
		}
	}

	mem_ptradd(str->data);

	global_dst->str = str;
	global_dst->initialized = true;
}

void Instr_READLN_GD(Instruction *i) {
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	bool start=false;
	char *error;
	int c;
	double d;

	String *str = mem_alloc(sizeof(String));
	*str = initEmptyString();
	while((c=getchar()) != EOF)
	{
		if(isspace(c) && start)
		{
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else if(!isspace(c))
		{
			start=true;
			appendCharToString(str,c);
		}
	}

	d = strtod(str->data,&error);

	mem_ptradd(str->data);
	if(*error != 0)
	{
		setError(ERR_ReadInput);
		return;
	}

	global_dst->double_ = d;
	global_dst->initialized = true;
}

void Instr_READLN_GI(Instruction *i) {
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	bool start=false;
	char *error;
	int c;
	int n;

	String *str = mem_alloc(sizeof(String));
	*str = initEmptyString();
	while((c=getchar()) != EOF)
	{
		if(isspace(c) && start)
		{
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else if(!isspace(c))
		{
			start=true;
			appendCharToString(str,c);
		}
	}

	n = strtol(str->data,&error,10);

	mem_ptradd(str->data);

	if(*error != 0)
	{
		setError(ERR_ReadInput);
		return;
	}

	global_dst->int_ = n;
	global_dst->initialized = true;
}

void Instr_COPY_LS(Instruction *i) {

	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);
	StackData *op;
	op = vectorAt(stack.vect, stack.BP - 1);
	String *s = op->str;
	//op-- ?
	op = vectorAt(stack.vect, stack.BP - 2);
	uint32_t pos = op->int_;
	op = vectorAt(stack.vect, stack.BP - 3);
	uint32_t n = op->int_;
	String *str = malloc(sizeof(String));
	*str = initStringSize(n+1);

	uint32_t length = s->length;
	if(n > length)
		n=length;
	// If Index is larger than the length of the string S or index is negative,
	// then an empty string is returned.
	if(pos > length)
	{
		str->length = 0;
		str->data[0] = '\0';
	}
	else
	{
		memcpy(str->data,s->data+pos-1,n);
		str->data[n] = '\0';
		str->length = n;
	}

	mem_ptradd(str->data);

	local_dst->str = str;
	local_dst->initialized = true;

}


// // WRITELN 1      src1->int_ pocet argumentov
// void Instr_WRITELN(Instruction *i) {

// }


// // MOV 4      [G][SDIB]   len DST
// void Instr_MOV_GS(Instruction *i) {
// 	// Zobere ->offset z prveho operandu (index), skopiruje z vrchu zasobiku
// 	// na ten index
// }

// void Instr_MOV_GD(Instruction *i) {

// }

// void Instr_MOV_GI(Instruction *i) {

// }

// void Instr_MOV_GB(Instruction *i) {

// }


// PUSH 12    [CLG][SDIB] len SRC
void Instr_PUSH_CS(Instruction *i) {
	//assert(i->src_1.data_type == STRING);

	stack.SP++;
	StackDataVectorAtSet(stack.vect, stack.SP, i->src_1);
	StackDataVectorAt(stack.vect, stack.SP)->initialized = true;
}

// void Instr_PUSH_CD(Instruction *i) {
// 	assert(i->src_1.data_type == DOUBLE);

// 	stack.SP++;
// 	StackDataVectorAtSet(stack.vect, stack.SP, i->src_1);
// 	StackDataVectorAt(stack.vect, stack.SP)->initialized = true;
// }

// void Instr_PUSH_CI(Instruction *i) {
// 	assert(i->src_1.data_type == INT);

// 	stack.SP++;
// 	StackDataVectorAtSet(stack.vect, stack.SP, i->src_1);
// 	StackDataVectorAt(stack.vect, stack.SP)->initialized = true;
// }

// void Instr_PUSH_CB(Instruction *i) {
// 	assert(i->src_1.data_type == BOOL);

// 	stack.SP++;
// 	StackDataVectorAtSet(stack.vect, stack.SP, i->src_1);
// 	StackDataVectorAt(stack.vect, stack.SP)->initialized = true;
// }

void Instr_PUSH_LS(Instruction *i) {
	//assert(i->src_1.data_type == STRING);

	int32_t pos = stack.BP + i->src_1.offset;

	stack.SP++;
	StackDataVectorAtSet(stack.vect, pos, i->src_1);
	StackDataVectorAt(stack.vect, pos)->initialized = true;
}

// void Instr_PUSH_LD(Instruction *i) {

// }

// void Instr_PUSH_LI(Instruction *i) {

// }

// void Instr_PUSH_LB(Instruction *i) {

// }

void Instr_PUSH_GS(Instruction *i) {
	//stack.SP++;
	StackDataVectorAtSet(stack.vect, i->src_1.offset, i->src_1);
	StackDataVectorAt(stack.vect, i->src_1.offset)->initialized = true;
}

// void Instr_PUSH_GD(Instruction *i) {

// }

// void Instr_PUSH_GI(Instruction *i) {

// }

// void Instr_PUSH_GB(Instruction *i) {

// }


// CALL
void Instr_CALL(Instruction *i) {
	// Pri appendovani BP a RetAddr sa ma incrementovat SP
	//
	// V cykle pushovanie premennych, kazdej nastavit flag ze je
	// neinicializovana.

	StackData *top_of_stack = vectorAt(stack.vect, ++stack.SP);

	top_of_stack->offset = stack.BP;
	top_of_stack++;
	stack.SP++;
	top_of_stack->offset = ++IP; // push adress

	for (int x = 0; x < i->src_1.int_; x++)
	{
		top_of_stack++;
		stack.SP++;
		top_of_stack->initialized = false;
	}

	IP = i->dst.offset;

}


// RET
// void Instr_RET(Instruction *i) {

// }
