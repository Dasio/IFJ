/*
 * Project name:
 * Implementace interpretu imperativního jazyka IFJ14
 *
 * Repository:
 * https://github.com/Dasio/IFJ
 *
 * Team:
 * Dávid Mikúš			(xmikus15)
 * Peter Hostačný		(xhosta03)
 * Tomáš Kello			(xkello00)
 * Adam Lučanský		(xlucan01)
 * Michaela Lukášova	(xlukas09)
 */

#include "instructions_regular.h"
#include <ctype.h>

TokenVector *tokenVectorMain;
Scanner scannerMain;

extern void *mem_alloc(size_t len);
extern Stack stack;
extern int64_t IP;

static StackData operand;
static StackData empty = { .initialized=false };

#define vectorAt(v, i) ((StackData*)(v->array) + (i))

// READLN 6   [LG][SDI]  len DST
void Instr_READLN_LS(Instruction *i) {

	int c;

	String *str = mem_alloc(sizeof(String));
	*str = initEmptyString();
	while((c=getchar()) != EOF && c != '\n')
	{
		appendCharToString(str,c);
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

	String str = initEmptyString();
	while((c=getchar()) != EOF)
	{
		if(isspace(c) && start)
		{
			if(c == '\n' || c == EOF)
				break;
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else if(!isspace(c))
		{
			start=true;
			appendCharToString(&str,c);
		}
	}

	d = strtod(str.data,&error);

	if(*error != 0)
	{
		setError(ERR_ReadInput);
		die();
	}
	destroyString(&str);

	operand.double_ = d;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_READLN_LI(Instruction *i) {

	bool start=false;
	char *error;
	int c;
	int n;

	String str = initEmptyString();
	while((c=getchar()) != EOF)
	{
		if(isspace(c) && start)
		{
			if(c == '\n' || c == EOF)
				break;
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else if(!isspace(c))
		{
			start=true;
			appendCharToString(&str,c);
		}
	}

	n = strtol(str.data,&error,10);

	if(*error != 0)
	{
		setError(ERR_ReadInput);
		die();
	}
	destroyString(&str);

	operand.int_ = n;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_READLN_GS(Instruction *i) {

	int c;

	String *str = mem_alloc(sizeof(String));
	*str = initEmptyString();
	while((c=getchar()) != EOF && c != '\n')
	{
		appendCharToString(str,c);
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

	String str = initEmptyString();
	while((c=getchar()) != EOF)
	{
		if(isspace(c) && start)
		{
			if(c == '\n' || c == EOF)
				break;
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else if(!isspace(c))
		{
			start=true;
			appendCharToString(&str,c);
		}
	}

	d = strtod(str.data,&error);

	if(*error != 0)
	{
		setError(ERR_ReadInput);
		die();
	}
	destroyString(&str);

	operand.double_ = d;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}

void Instr_READLN_GI(Instruction *i) {

	bool start=false;
	char *error;
	int c;
	int n;

	String str = initEmptyString();
	while((c=getchar()) != EOF)
	{
		if(isspace(c) && start)
		{
			if(c == '\n' || c == EOF)
				break;
			while((c=getchar()) != '\n' && c != EOF);
			break;
		}
		else if(!isspace(c))
		{
			start=true;
			appendCharToString(&str,c);
		}
	}

	n = strtol(str.data,&error,10);

	if(*error != 0)
	{
		setError(ERR_ReadInput);
		die();
	}
	destroyString(&str);

	operand.int_ = n;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}


// WRITE 1    number of arguments - first operand ...
//            offset of last pushed argument - second operand
void Instr_WRITE(Instruction *i) {
	StackData *op = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	for (int x = 0; x < i->dst.int_; x++)
	{
		//fprintf(stderr,"Write, data = %d\n",op->data_type);
		//die();
		switch(op->data_type)
		{
			case STRING:
				if(op->str->length != 0)
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
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

// MOV 4      [G][SDIB]   only DST
void Instr_MOV_GS(Instruction *i) {

	operand.str = vectorAt(stack.vect, stack.BP + i->src_2.offset)->str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}

void Instr_MOV_GD(Instruction *i) {

	operand.double_ = vectorAt(stack.vect, stack.BP + i->src_2.offset)->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}

void Instr_MOV_GI(Instruction *i) {

	operand.int_ = vectorAt(stack.vect, stack.BP + i->src_2.offset)->int_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}

void Instr_MOV_GB(Instruction *i) {

	operand.bool_ = vectorAt(stack.vect, stack.BP + i->src_2.offset)->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, i->dst.offset, operand);
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

// PUSH 12    [CLG][SDIB] len SRC
void Instr_PUSH_C(Instruction *i) {

	operand = i->src_1;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
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

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
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

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
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
	operand.str = local_src->str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_PUSHX_LD(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.double_ = local_src->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_PUSHX_LI(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.int_ = local_src->int_;
	operand.initialized = true;


	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_PUSHX_LB(Instruction *i) {

	if(vectorAt(stack.vect, stack.BP + i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *local_src = vectorAt(stack.vect, stack.BP + i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.bool_ = local_src->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_PUSHX_GS(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.str = global_src->str;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_PUSHX_GD(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.double_ = global_src->double_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_PUSHX_GI(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.int_ = global_src->int_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_PUSHX_GB(Instruction *i) {

	if(vectorAt(stack.vect, i->src_1.offset)->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	StackData *global_src = vectorAt(stack.vect, i->src_1.offset);

	operand.data_type = i->src_1.data_type;
	operand.bool_ = global_src->bool_;
	operand.initialized = true;

	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

// CALL
void Instr_CALL(Instruction *i) {

	int64_t offset = stack.BP + i->src_2.offset;

	operand.offset = stack.BP;
	StackDataVectorAtSet(stack.vect, ++offset, operand);
	stack.BP = offset;

	operand.offset = IP;
	StackDataVectorAtSet(stack.vect, ++offset, operand);

	for (int x = 0; x < i->src_1.int_; x++) // number of local variables
	{
		StackDataVectorAtSet(stack.vect, ++offset, empty);
	}

	IP = i->dst.offset;
}



// CALL_LENGTH
void Instr_CALL_LENGTH(Instruction *i) {

	(void) i;	// dummy conversion
	StackData *op = vectorAt(stack.vect, stack.BP + i->src_2.offset);
	uint32_t len = op->str->length;
	(--op)->int_ = len;
	op->initialized = true;
}



// CALL_COPY
void Instr_CALL_COPY(Instruction *i) {

	(void) i;	// dummy conversion
	StackData *op = vectorAt(stack.vect, stack.BP + i->src_2.offset);
	String *s = op->str;
	int32_t pos = (--op)->int_;
	int32_t n = (--op)->int_;

	String *str = mem_alloc(sizeof(String));
	*str = initStringSize(n+1);

	int32_t length = s->length;
	if(n > length)
		n = length;
	// If Index is larger than the length of the string S or index is negative,
	// then an empty string is returned.
	if(pos > length)
	{
		str->length = 0;
		str->data[0] = '\0';
	}
	else
	{
		if(pos < 1)
			pos = 1;
		if(n+pos > length)
			n = length - pos + 1;
		memcpy(str->data,s->data+pos-1,n);
		str->data[n] = '\0';
		str->length = n;
	}

	mem_ptradd(str->data);

	(--op)->str = str;
	op->initialized = true;
}


// CALL_FIND
void Instr_CALL_FIND(Instruction *i) {

	(void) i;	// dummy conversion
	StackData *op = vectorAt(stack.vect, stack.BP + i->src_2.offset);
	String *s = op->str;
	String *string = (--op)->str;
	int n = FindString(s,string);

	(--op)->int_ = n;
	op->initialized = true;
}

// CALL_SORT
void Instr_CALL_SORT(Instruction *i) {

	(void) i;	// dummy conversion
	StackData *op = vectorAt(stack.vect, stack.BP + i->src_2.offset);
	String *s = op->str;
	String *str = mem_alloc(sizeof(String));
	*str = initStringSize(s->length+1);
	// Make copy
	memcpy(str->data,s->data,s->length+1);
	str->length = s->length;
	QuickSort(str);

	mem_ptradd(str->data);
	(--op)->str = str;
	op->initialized = true;
}


// RET (controlling initialized flag of return vale isn't needed here)
void Instr_RET(Instruction *i) {

	(void) i;
	StackData *BP_ptr = vectorAt(stack.vect, stack.BP);
	stack.BP = BP_ptr->offset;
	IP = (++BP_ptr)->offset;
}


// JMP_F
void Instr_JMP_F(Instruction *i) {

	if (vectorAt(stack.vect, stack.BP + i->src_1.offset)->bool_ == false)
		IP = i->dst.offset;
}

// JMP
void Instr_JMP(Instruction *i) {

	IP = i->dst.offset;
}

// HALT
void Instr_HALT(Instruction *i) {
	(void) i; // Dummy pretype because of unused variable

	die(0);
}
