#include "instructions_regular.h"
#include "ctype.h"

extern void *mem_alloc(size_t len);
extern Stack stack;
extern uint64_t IP;

static StackData operand;
static StackData empty = { .initialized=false };

#define vectorAt(v, i) ((StackData*)(v->array) + (i))

// READLN 6   [LG][SDI]  len DST
void Instr_READLN_LS(Instruction *i) {

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

	operand.str = str;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

}

void Instr_READLN_LD(Instruction *i) {

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
		die();
	}

	operand.double_ = d;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_READLN_LI(Instruction *i) {

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
		die();
	}

	operand.int_ = n;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_READLN_GS(Instruction *i) {

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

	operand.str = str;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}

void Instr_READLN_GD(Instruction *i) {

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
		die();
	}

	operand.double_ = d;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}

void Instr_READLN_GI(Instruction *i) {

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
		die();
	}

	operand.int_ = n;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}

// COPY  dst_{}
void Instr_COPY_LS() {

	StackData *op = vectorAt(stack.vect, stack.SP - 1);
	String *s = NULL;
	int32_t pos = 0;
	int32_t n = 0;

	switch(op->var_type)
	{
		case LOCAL:
			s = vectorAt(stack.vect, stack.BP + op->offset)->str;
			break;
		case GLOBAL:
			s = vectorAt(stack.vect, op->offset)->str;
			break;
		case CONST:
			s = op->str;
			break;
		default:
			break;
	}

	switch((--op)->var_type)
	{
		case LOCAL:
			pos = vectorAt(stack.vect, stack.BP + op->offset)->int_;
			break;
		case GLOBAL:
			pos = vectorAt(stack.vect, op->offset)->int_;
			break;
		case CONST:
			pos = op->int_;
			break;
		default:
			break;
	}

	switch((--op)->var_type)
	{
		case LOCAL:
			n = vectorAt(stack.vect, stack.BP + op->offset)->int_;
			break;
		case GLOBAL:
			n = vectorAt(stack.vect, op->offset)->int_;
			break;
		case CONST:
			n = op->int_;
			break;
		default:
			break;
	}

	String *str = mem_alloc(sizeof(String));
	*str = initStringSize(n+1);

	int32_t length = s->length;
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

	(--op)->str = str;
	op->initialized = true;

	stack.SP -= 3; // args_count
}


// // WRITELN 1    number of arguments - first operand
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

	operand.str = i->src_1.str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_CD(Instruction *i) {

	operand.double_ = i->src_1.double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_CI(Instruction *i) {

	operand.int_ = i->src_1.int_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_CB(Instruction *i) {

	operand.bool_ = i->src_1.bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_LS(Instruction *i) {

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.str = local_src->str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_LD(Instruction *i) {

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.double_ = local_src->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_LI(Instruction *i) {

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.int_ = local_src->int_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_LB(Instruction *i) {

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.bool_ = local_src->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_GS(Instruction *i) {

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.str = global_src->str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_GD(Instruction *i) {

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.double_ = global_src->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_GI(Instruction *i) {

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.int_ = global_src->int_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_GB(Instruction *i) {

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.bool_ = global_src->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}


// CALL
void Instr_CALL(Instruction *i) {

	operand.offset = stack.BP;
	StackDataVectorAtSet(stack.vect, ++stack.SP, operand);
	stack.BP = stack.SP;

	operand.offset = IP;
	StackDataVectorAtSet(stack.vect, ++stack.SP, operand);

	for (int x = 0; x < i->src_1.int_; x++)
	{
		StackDataVectorAtSet(stack.vect, ++stack.SP, empty);
	}

	IP = i->dst.offset;
}


// RET (controlling initialized flag of return vale isn't needed here)
void Instr_RET(Instruction *i) {

	StackData *BP_ptr = vectorAt(stack.vect, stack.BP);
	stack.SP = stack.BP;
	stack.BP = BP_ptr->offset;
	IP = (++BP_ptr)->offset;

	stack.SP -= i->dst.int_; // args_count
}
