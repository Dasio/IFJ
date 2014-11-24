/**
 * Definition of instruction
 */

#ifndef _INSTRUCTION_H
#define _INSTRUCTION_H

	typedef enum {
		INST_Mov,
		INST_Add,
		INST_Sub
	} InstructionOp;

	typedef struct {
		InstructionOp opcode;
		int32_t src_1;
		int32_t src_2;
		int32_t dst;
	} Instruction;

#endif
