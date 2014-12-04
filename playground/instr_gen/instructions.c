#include "instructions.h"
extern Stack stack;
#define vectorAt(v, i) (StackData*)((StackData*)(v->array) + (i))

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
void Instr_NEG_LLxIx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_LLxDx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_LGxIx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_LGxDx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_LxxIx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_LxxDx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_GLxIx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_GLxDx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_GGxIx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_GGxDx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_GxxIx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NEG_GxxDx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NOT_LLxBx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NOT_LGxBx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NOT_LxxBx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NOT_GLxBx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NOT_GGxBx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NOT_GxxBx(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LCLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LCLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LCGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LCGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GCLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GCLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GCGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GCGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_MUL_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LCLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LCLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LCGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LCGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GCLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GCLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GCGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GCGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_DIV_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_AND_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_GGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LCLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LCLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LCGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LCGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GCLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GCLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GCGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GCGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_SUB_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_OR_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_XOR_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_LGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_L_GGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_LGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_G_GGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_LGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_LE_GGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_LGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_GE_GGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_LGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_EQ_GGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_LGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GCLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GCLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GCLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GCLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GCGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GCGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GCGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GCGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GLGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGCBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGLBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGGBB(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_NE_GGGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_dst  = vectorAt(stack.vect, i->dst.offset);

	global_dst->int_ = local_src1->int_ + local_src2->int_;
}

#pragma clang diagnostic pop
#pragma GCC diagnostic pop
