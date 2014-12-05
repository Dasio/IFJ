#include "instructions_regular.h"
#include "ctype.h"

extern void *mem_alloc(size_t len);
extern Stack stack;

#define vectorAt(v, i) (StackData*)((StackData*)(v->array) + (i))

// READLN 8   [LG][SDIB]  len DST
void Instr_READLN_LS(Instruction *i) {
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	bool start=false;
	char *error;
	int c;

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

	local_dst->int_ = n;
	local_dst->initialized = true;
}

void Instr_READLN_GS(Instruction *i) {
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	bool start=false;
	char *error;
	int c;

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

	global_dst->int_ = n;
	global_dst->initialized = true;
}









// WRITELN 1      src1->int_ pocet argumentov
void Instr_WRITELN(Instruction *i) {

}


// MOV 4      [G][SDIB]   len DST
void Instr_MOV_GS(Instruction *i) {
	// Zobere ->offset z prveho operandu (index), skopiruje z vrchu zasobiku
	// na ten index
}

void Instr_MOV_GD(Instruction *i) {

}

void Instr_MOV_GI(Instruction *i) {

}

void Instr_MOV_GB(Instruction *i) {

}


// PUSH 12    [CLG][SDIB] len SRC
void Instr_PUSH_CS(Instruction *i) {
	// Zobere z operandu SRC a setAt ++SP + 1
	// Nastavi initialized = true
}

void Instr_PUSH_CD(Instruction *i) {

}

void Instr_PUSH_CI(Instruction *i) {

}

void Instr_PUSH_CB(Instruction *i) {

}

void Instr_PUSH_LS(Instruction *i) {

}

void Instr_PUSH_LD(Instruction *i) {

}

void Instr_PUSH_LI(Instruction *i) {

}

void Instr_PUSH_LB(Instruction *i) {

}

void Instr_PUSH_GS(Instruction *i) {

}

void Instr_PUSH_GD(Instruction *i) {

}

void Instr_PUSH_GI(Instruction *i) {

}

void Instr_PUSH_GB(Instruction *i) {

}


// CALL
void Instr_CALL(Instruction *i) {

}


// RET
void Instr_RET(Instruction *i) {

}
