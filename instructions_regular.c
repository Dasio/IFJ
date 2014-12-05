#include "instructions_regular.h"

extern Stack stack;

// READLN 8   [LG][SDIB]  len DST
void Instr_READLN_LS(Instruction *i) {
	// L : BP + offset
	// G : offset
	//
	//initialized = true
	//VSETKY !!!
}

void Instr_READLN_LD(Instruction *i) {

}

void Instr_READLN_LI(Instruction *i) {

}

void Instr_READLN_LB(Instruction *i) {

}

void Instr_READLN_GS(Instruction *i) {

}

void Instr_READLN_GD(Instruction *i) {

}

void Instr_READLN_GI(Instruction *i) {

}

void Instr_READLN_GB(Instruction *i) {

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
