#include "instructions_regular.h"
#include "ctype.h"

/**
 * Global variables assigned in ifj.c#main(), must be here due to cleanup
 * at HALT.
 */
bool token_vector_initialized;
bool scanner_initialized;
TokenVector *tokenVectorMain;
Scanner scannerMain;

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


// WRITE 1    number of arguments - first operand
void Instr_WRITE(Instruction *i) {
	StackData *op = vectorAt(stack.vect, stack.SP);
	for (int x = 0; x < i->dst.int_; x++)
	{
		fprintf(stderr,"Write, data = %d\n",op->data_type);

		switch(op->data_type)
		{
			case STRING:
				printf("%s", op->str->data);
				break;
			case DOUBLE:
				printf("%g", op->double_);
				break;
			case INT:
				printf("%d", op->int_);
				break;
			case BOOL:
				if(op->bool_)
					printf("TRUE");
				else
					printf("FALSE");
				break;
			default:
				break;
		}
		op--;
	}

	stack.SP -= i->dst.int_; // args_count
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

// MOV 4      [G][SDIB]   only DST
void Instr_MOV_GS(Instruction *i) {

	operand.str = vectorAt(stack.vect, stack.SP)->str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);

	stack.SP--;
}

void Instr_MOV_GD(Instruction *i) {

	operand.double_ = vectorAt(stack.vect, stack.SP)->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);

	stack.SP--;
}

void Instr_MOV_GI(Instruction *i) {

	operand.int_ = vectorAt(stack.vect, stack.SP)->int_;
	operand.initialized = true;

	fprintf(stderr, "MOV GI: %d\n", operand.int_);

	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);

	stack.SP--;

	fprintf(stderr, "SP:  %lu\n", stack.SP);
}

void Instr_MOV_GB(Instruction *i) {

	operand.bool_ = vectorAt(stack.vect, stack.SP)->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);

	stack.SP--;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

// PUSH 12    [CLG][SDIB] len SRC
void Instr_PUSH_C(Instruction *i) {

	operand = i->src_1;

	fprintf(stderr, "PUSH const: %d\n", i->src_1.int_);

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;

	fprintf(stderr, "SP:  %lu\n", stack.SP);
}

void Instr_PUSH_LS(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.str = local_src->str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_LD(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.double_ = local_src->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_LI(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.int_ = local_src->int_;
	operand.initialized = true;


	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_LB(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.bool_ = local_src->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_GS(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.str = global_src->str;
	operand.initialized = true;

	fprintf(stderr, "PUSH GS: %s\n", global_src->str->data);

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;

	fprintf(stderr, "SP:  %lu\n", stack.SP);
}

void Instr_PUSH_GD(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.double_ = global_src->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSH_GI(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.int_ = global_src->int_;
	operand.initialized = true;

	fprintf(stderr, "PUSH GI: %d\n", global_src->int_);

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;

	fprintf(stderr, "SP:  %lu\n", stack.SP);
}

void Instr_PUSH_GB(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.bool_ = global_src->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void Instr_PUSHX_LS(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.var_type = CONST;
	operand.str = local_src->str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSHX_LD(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.var_type = CONST;
	operand.double_ = local_src->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSHX_LI(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.var_type = CONST;
	operand.int_ = local_src->int_;
	operand.initialized = true;


	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSHX_LB(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.var_type = CONST;
	operand.bool_ = local_src->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSHX_GS(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.var_type = CONST;
	operand.str = global_src->str;
	operand.initialized = true;

	fprintf(stderr, "PUSH GS: %s\n", global_src->str->data);

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;

	fprintf(stderr, "SP:  %lu\n", stack.SP);
}

void Instr_PUSHX_GD(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.var_type = CONST;
	operand.double_ = global_src->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

void Instr_PUSHX_GI(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.var_type = CONST;
	operand.int_ = global_src->int_;
	operand.initialized = true;

	fprintf(stderr, "PUSH GI: %d\n", global_src->int_);

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;

	fprintf(stderr, "SP:  %lu\n", stack.SP);
}

void Instr_PUSHX_GB(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.var_type = CONST;
	operand.bool_ = global_src->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);

	stack.SP = stack.SP + i->dst.sp_inc;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

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



// CALL_LENGTH
void Instr_CALL_LENGTH(Instruction *i) {

	(void) i;	// dummy conversion
}



// CALL_COPY
void Instr_CALL_COPY(Instruction *i) {

	(void) i;	// dummy conversion
	StackData *op = vectorAt(stack.vect, stack.SP);
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


// CALL_FIND
void Instr_CALL_FIND(Instruction *i) {

	(void) i;	// dummy conversion
}

// CALL_SORT
void Instr_CALL_SORT(Instruction *i) {

	(void) i;	// dummy conversion
}


// RET (controlling initialized flag of return vale isn't needed here)
void Instr_RET(Instruction *i) {

	StackData *BP_ptr = vectorAt(stack.vect, stack.BP);
	stack.SP = stack.BP;
	stack.BP = BP_ptr->offset;
	IP = (++BP_ptr)->offset;

	stack.SP -= i->dst.int_; // args_count
}

// JMP_T
void Instr_JMP_T(Instruction *i) {

	if (vectorAt(stack.vect, stack.SP)->bool_ == true)
		IP = i->dst.offset;

	stack.SP--;
}

// JMP_F
void Instr_JMP_F(Instruction *i) {

	if (vectorAt(stack.vect, stack.SP)->bool_ == false)
		IP = i->dst.offset;

	stack.SP--;
}

// JMP
void Instr_JMP(Instruction *i) {

	IP = i->dst.offset;

	stack.SP--;
}

// HALT
void Instr_HALT(Instruction *i) {
	(void) i; // Dummy pretype because of unused variable

	if(token_vector_initialized)
		destroyTokenVector(tokenVectorMain);
	if(scanner_initialized)
		destroyScanner(&scannerMain);

	implodeMemory();
	exit(0);
}
