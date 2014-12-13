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

#include "interpreter.h"

/**
 * "Global" tape containing instructions
 */
InstructionVector *tape;
extern int instr_counter;

/**
 * Pointer to instruction tape at beginning
 */
int64_t IP = 0;

Stack stack = {.BP = 0};

void initInterpret() {
	stack.vect = StackDataVectorInit(DEFAULT_STACK_SIZE);
	initialized_items.stack = true;

	// TODO: Test optimal initial size
	if(!tape) {
		tape = InstructionVectorInit(512);
		initialized_items.tape = true;
	}
}

/**
 * CORE
 */

void generateExprInstruction(InstructionOp op, Operand* a, Operand* b, Operand* c) {

	instr_counter++;
	int instruction_offset = op << 8 | b->var_type << 6 | c->var_type << 4 |
						b->data_type << 2 | c->data_type;

	assert(instruction_table[instruction_offset]);
	Instruction i = (Instruction) {.instr = instruction_table[instruction_offset],
										 .dst = *a, .src_1 = *b, .src_2 = *c};
	InstructionVectorAppend(tape, i);
}

void generateInstruction(InstructionOp op, Operand* a, Operand* b, Operand* c) {

	instr_counter++;
	InstrFuncPtr i_ptr = NULL;

	switch(op) {
		case PUSH:
			switch(b->var_type)
			{
				case LOCAL:
					switch(b->data_type)
					{
						case STRING:
							i_ptr = Instr_PUSH_LS;
							break;
						case DOUBLE:
							i_ptr = Instr_PUSH_LD;
							break;
						case INT:
							i_ptr = Instr_PUSH_LI;
							break;
						case BOOL:
							i_ptr = Instr_PUSH_LB;
							break;
						default:
							break;
					}
					break;
				case GLOBAL:
					switch(b->data_type)
					{
						case STRING:
							i_ptr = Instr_PUSH_GS;
							break;
						case DOUBLE:
							i_ptr = Instr_PUSH_GD;
							break;
						case INT:
							i_ptr = Instr_PUSH_GI;
							break;
						case BOOL:
							i_ptr = Instr_PUSH_GB;
							break;
						default:
							break;
					}
					break;
				case CONST:
					i_ptr = Instr_PUSH_C;
					break;
				default:
					break;
			}
			break;
		case PUSHX:
			switch(b->var_type)
			{
				case LOCAL:
					switch(b->data_type)
					{
						case STRING:
							i_ptr = Instr_PUSHX_LS;
							break;
						case DOUBLE:
							i_ptr = Instr_PUSHX_LD;
							break;
						case INT:
							i_ptr = Instr_PUSHX_LI;
							break;
						case BOOL:
							i_ptr = Instr_PUSHX_LB;
							break;
						default:
							break;
					}
					break;
				case GLOBAL:
					switch(b->data_type)
					{
						case STRING:
							i_ptr = Instr_PUSHX_GS;
							break;
						case DOUBLE:
							i_ptr = Instr_PUSHX_GD;
							break;
						case INT:
							i_ptr = Instr_PUSHX_GI;
							break;
						case BOOL:
							i_ptr = Instr_PUSHX_GB;
							break;
						default:
							break;
					}
					break;
				case CONST:
					i_ptr = Instr_PUSH_C;
					break;
				default:
					break;
			}
			break;
		case JMP_F:
			i_ptr = Instr_JMP_F;
			break;
		case JMP:
			i_ptr = Instr_JMP;
			break;
		case CALL:
			i_ptr = Instr_CALL;
			break;
		case CALL_LENGTH:
			i_ptr = Instr_CALL_LENGTH;
			break;
		case CALL_COPY:
			i_ptr = Instr_CALL_COPY;
			break;
		case CALL_FIND:
			i_ptr = Instr_CALL_FIND;
			break;
		case CALL_SORT:
			i_ptr = Instr_CALL_SORT;
			break;
		case RET:
			i_ptr = Instr_RET;
			break;
		case MOV:
			switch(b->data_type)
			{
				case STRING:
					i_ptr = Instr_MOV_GS;
					break;
				case DOUBLE:
					i_ptr = Instr_MOV_GD;
					break;
				case INT:
					i_ptr = Instr_MOV_GI;
					break;
				case BOOL:
					i_ptr = Instr_MOV_GB;
					break;
				default:
					break;
			}
			break;
		case READLN:
			if (a->var_type == GLOBAL) {
				switch(a->data_type)
				{
					case STRING:
						i_ptr = Instr_READLN_GS;
						break;
					case DOUBLE:
						i_ptr = Instr_READLN_GD;
						break;
					case INT:
						i_ptr = Instr_READLN_GI;
						break;
					default:
						break;
				}
			}
			if (a->var_type == LOCAL) {
				switch(a->data_type)
				{
					case STRING:
						i_ptr = Instr_READLN_LS;
						break;
					case DOUBLE:
						i_ptr = Instr_READLN_LD;
						break;
					case INT:
						i_ptr = Instr_READLN_LI;
						break;
					default:
						break;
				}
			}
			break;
		case WRITE:
			i_ptr = Instr_WRITE;
			break;
		case HALT:
			i_ptr = Instr_HALT;
			break;
		default:
			i_ptr = Instr_CALL;
			break;
	}

	Instruction i = (Instruction) {.instr = i_ptr, .dst = *a, .src_1 = *b, .src_2 = *c};
	InstructionVectorAppend(tape, i);
}

void dumpTape() {
	assert(tape);

	uint32_t tape_length = tape->used;
	Instruction *first = InstructionVectorFirst(tape);

	fprintf(stderr, "============================\n");
	fprintf(stderr, "TAPE:   \t \t      offset");
	fprintf(stderr, "\n");
	for(uint32_t i = 0; i < tape_length; i++) {
		Instruction *inst = first+i;
		fprintf(stderr, "%d\t%s\t", i, stringifyInstructionPtr(inst->instr));
		fprintf(stderr, " \t%ld", inst->dst.offset);
		fprintf(stderr, "\n");
	}
	fprintf(stderr, "TAPE DUMP OVER === IP: %lu ==\n", IP);
}

void runInterpretation() {
	assert(tape && "Call initInterpret() before running interpreter");

	Instruction *first = InstructionVectorFirst(tape);
	assert(first && "Instruction tape is empty!");

	//dumpTape();

	while(true) {
		Instruction *i = first + IP;
		(i->instr)(i);
		fflush(stdout);
/*
		fprintf(stderr, "============================\n");
		fprintf(stderr, "|IP: %ld - %s\n", IP, stringifyInstructionPtr(i->instr));
		dumpStack();
		fprintf(stderr, "\n\n");
*/
		IP++;
	}
}
