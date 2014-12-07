#include "instruction.h"
#include "stack.h"
#include "memory_mgmt.h"

#ifndef _INSTRUCTIONS_REGULAR_H
#define _INSTRUCTIONS_REGULAR_H
	// InstructionOp defines in instruction.h

	// READLN 6   [LG][SDI]  only DST
	void Instr_READLN_LS(Instruction *i);
	void Instr_READLN_LD(Instruction *i);
	void Instr_READLN_LI(Instruction *i);
	void Instr_READLN_GS(Instruction *i);
	void Instr_READLN_GD(Instruction *i);
	void Instr_READLN_GI(Instruction *i);

	// COPY
	void Instr_COPY_LS();

	// WRITELN 1     number of arguments - first operand
	void Instr_WRITELN(Instruction *i);

	// MOV 4      [G][SDIB]   only DST
	void Instr_MOV_GS(Instruction *i);
	void Instr_MOV_GD(Instruction *i);
	void Instr_MOV_GI(Instruction *i);
	void Instr_MOV_GB(Instruction *i);

	// PUSH 12    [CLG][SDIB] only SRC
	void Instr_PUSH_CS(Instruction *i);
	void Instr_PUSH_CD(Instruction *i);
	void Instr_PUSH_CI(Instruction *i);
	void Instr_PUSH_CB(Instruction *i);
	void Instr_PUSH_LS(Instruction *i);
	void Instr_PUSH_LD(Instruction *i);
	void Instr_PUSH_LI(Instruction *i);
	void Instr_PUSH_LB(Instruction *i);
	void Instr_PUSH_GS(Instruction *i);
	void Instr_PUSH_GD(Instruction *i);
	void Instr_PUSH_GI(Instruction *i);
	void Instr_PUSH_GB(Instruction *i);

	// CALL ... Address - first operand, locals_count - second operand
	void Instr_CALL(Instruction *i);

	// RET ... arg_count in i->dst.int_
	void Instr_RET(Instruction *i);

	// JMP_T ... ADDR in i->dst.offset
	void Instr_JMP_T(Instruction *i);

	// JMP_F ... ADDR in i->dst.offset
	void Instr_JMP_F(Instruction *i);

	// JMP ... ADDR in i->dst.offset
	void Instr_JMP(Instruction *i);
#endif
