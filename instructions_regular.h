#include "instruction.h"
#include "stack.h"

#ifndef _INSTRUCTIONS_REGULAR_H
#define _INSTRUCTIONS_REGULAR_H
	// InstructionOp defines in instruction.h

	// READLN 6   [LG][SDI]  len DST
	void Instr_READLN_LS(Instruction *i);
	void Instr_READLN_LD(Instruction *i);
	void Instr_READLN_LI(Instruction *i);
	void Instr_READLN_GS(Instruction *i);
	void Instr_READLN_GD(Instruction *i);
	void Instr_READLN_GI(Instruction *i);

	// WRITELN 1      src1->int_ pocet argumentov
	void Instr_WRITELN(Instruction *i);

	// MOV 4      [G][SDIB]   len DST
	void Instr_MOV_GS(Instruction *i);
	void Instr_MOV_GD(Instruction *i);
	void Instr_MOV_GI(Instruction *i);
	void Instr_MOV_GB(Instruction *i);

	// PUSH 12    [CLG][SDIB] len SRC
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

	// CALL
	void Instr_CALL(Instruction *i);

	// RET
	void Instr_RET(Instruction *i);
#endif
