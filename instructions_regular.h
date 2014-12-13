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

#include "instruction.h"
#include "stack.h"
#include "memory_mgmt.h"
#include "token.h"
#include "scanner.h"

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

	// WRITE 1     number of arguments - first operand
	void Instr_WRITE(Instruction *i);

	// MOV 4      [G][SDIB]   only DST
	void Instr_MOV_GS(Instruction *i);
	void Instr_MOV_GD(Instruction *i);
	void Instr_MOV_GI(Instruction *i);
	void Instr_MOV_GB(Instruction *i);

	// PUSH 9    [CLG][SDIB] only SRC
	void Instr_PUSH_C(Instruction *i);
	void Instr_PUSH_LS(Instruction *i);
	void Instr_PUSH_LD(Instruction *i);
	void Instr_PUSH_LI(Instruction *i);
	void Instr_PUSH_LB(Instruction *i);
	void Instr_PUSH_GS(Instruction *i);
	void Instr_PUSH_GD(Instruction *i);
	void Instr_PUSH_GI(Instruction *i);
	void Instr_PUSH_GB(Instruction *i);

	// PUSHX 8
	void Instr_PUSHX_LS(Instruction *i);
	void Instr_PUSHX_LD(Instruction *i);
	void Instr_PUSHX_LI(Instruction *i);
	void Instr_PUSHX_LB(Instruction *i);
	void Instr_PUSHX_GS(Instruction *i);
	void Instr_PUSHX_GD(Instruction *i);
	void Instr_PUSHX_GI(Instruction *i);
	void Instr_PUSHX_GB(Instruction *i);

	// CALL ... Address - first operand, locals_count - second operand
	void Instr_CALL(Instruction *i);

	// CALL_LENGTH
	void Instr_CALL_LENGTH(Instruction *i);

	// CALL_COPY
	void Instr_CALL_COPY(Instruction *i);

	// CALL_FIND
	void Instr_CALL_FIND(Instruction *i);

	// CALL_SORT
	void Instr_CALL_SORT(Instruction *i);

	// RET ... <arg_count + 1> in i->dst.int_
	void Instr_RET(Instruction *i);

	// JMP_T ... ADDR in i->dst.offset
	void Instr_JMP_T(Instruction *i);

	// JMP_F ... ADDR in i->dst.offset
	void Instr_JMP_F(Instruction *i);

	// JMP ... ADDR in i->dst.offset
	void Instr_JMP(Instruction *i);

	// HALT
	void Instr_HALT(Instruction *i);
#endif
