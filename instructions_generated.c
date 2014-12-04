#include "instructions_generated.h"
extern Stack stack;
#define vectorAt(v, i) (StackData*)((StackData*)(v->array) + (i))


#if defined(__clang__)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"

#elif defined(__GNUC__) || defined(__GNUG__)

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

#endif

void Instr_ADD_CLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CLII
	local_dst->int_ = *constant_src_1_I + local_src2->int_;
}

void Instr_ADD_CLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CLID
	local_dst->int_ = *constant_src_1_I + local_src2->double_;
}

void Instr_ADD_CLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CLDI
	local_dst->double_ = *constant_src_1_D + local_src2->int_;
}

void Instr_ADD_CLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CLDD
	local_dst->double_ = *constant_src_1_D + local_src2->double_;
}

void Instr_ADD_CLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CLSS
	assert(false && "Instruction not implemented!");
}

void Instr_ADD_CGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CGII
	local_dst->int_ = *constant_src_1_I + global_src2->int_;
}

void Instr_ADD_CGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CGID
	local_dst->int_ = *constant_src_1_I + global_src2->double_;
}

void Instr_ADD_CGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CGDI
	local_dst->double_ = *constant_src_1_D + global_src2->int_;
}

void Instr_ADD_CGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CGDD
	local_dst->double_ = *constant_src_1_D + global_src2->double_;
}

void Instr_ADD_CGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//CGSS
	assert(false && "Instruction not implemented!");
}

void Instr_ADD_LCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LCII
	local_dst->int_ = local_src1->int_ + *constant_src_2_I;
}

void Instr_ADD_LCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LCID
	local_dst->int_ = local_src1->int_ + *constant_src_2_D;
}

void Instr_ADD_LCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LCDI
	local_dst->double_ = local_src1->double_ + *constant_src_2_I;
}

void Instr_ADD_LCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LCDD
	local_dst->double_ = local_src1->double_ + *constant_src_2_D;
}

void Instr_ADD_LCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LCSS
	assert(false && "Instruction not implemented!");
}

void Instr_ADD_LLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LLII
	local_dst->int_ = local_src1->int_ + local_src2->int_;
}

void Instr_ADD_LLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LLID
	local_dst->int_ = local_src1->int_ + local_src2->double_;
}

void Instr_ADD_LLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LLDI
	local_dst->double_ = local_src1->double_ + local_src2->int_;
}

void Instr_ADD_LLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LLDD
	local_dst->double_ = local_src1->double_ + local_src2->double_;
}

void Instr_ADD_LLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LLSS
	assert(false && "Instruction not implemented!");
}

void Instr_ADD_LGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LGII
	local_dst->int_ = local_src1->int_ + global_src2->int_;
}

void Instr_ADD_LGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LGID
	local_dst->int_ = local_src1->int_ + global_src2->double_;
}

void Instr_ADD_LGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LGDI
	local_dst->double_ = local_src1->double_ + global_src2->int_;
}

void Instr_ADD_LGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LGDD
	local_dst->double_ = local_src1->double_ + global_src2->double_;
}

void Instr_ADD_LGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//LGSS
	assert(false && "Instruction not implemented!");
}

void Instr_ADD_GCII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GCII
	local_dst->int_ = global_src1->int_ + *constant_src_2_I;
}

void Instr_ADD_GCID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GCID
	local_dst->int_ = global_src1->int_ + *constant_src_2_D;
}

void Instr_ADD_GCDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GCDI
	local_dst->double_ = global_src1->double_ + *constant_src_2_I;
}

void Instr_ADD_GCDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GCDD
	local_dst->double_ = global_src1->double_ + *constant_src_2_D;
}

void Instr_ADD_GCSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GCSS
	assert(false && "Instruction not implemented!");
}

void Instr_ADD_GLII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GLII
	local_dst->int_ = global_src1->int_ + local_src2->int_;
}

void Instr_ADD_GLID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GLID
	local_dst->int_ = global_src1->int_ + local_src2->double_;
}

void Instr_ADD_GLDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GLDI
	local_dst->double_ = global_src1->double_ + local_src2->int_;
}

void Instr_ADD_GLDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GLDD
	local_dst->double_ = global_src1->double_ + local_src2->double_;
}

void Instr_ADD_GLSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GLSS
	assert(false && "Instruction not implemented!");
}

void Instr_ADD_GGII(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GGII
	local_dst->int_ = global_src1->int_ + global_src2->int_;
}

void Instr_ADD_GGID(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GGID
	local_dst->int_ = global_src1->int_ + global_src2->double_;
}

void Instr_ADD_GGDI(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GGDI
	local_dst->double_ = global_src1->double_ + global_src2->int_;
}

void Instr_ADD_GGDD(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GGDD
	local_dst->double_ = global_src1->double_ + global_src2->double_;
}

void Instr_ADD_GGSS(Instruction *i) {
	// Pointers to local data
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_1.offset);
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);

	// Pointers to constants
	int     *constant_src_1_I = &i->src_2.int_;
	bool    *constant_src_1_B = &i->src_2.bool_;
	double  *constant_src_1_D = &i->src_2.double_;
	String  *constant_src_1_S =  i->src_2.str;

	int     *constant_src_2_I = &i->src_2.int_;
	bool    *constant_src_2_B = &i->src_2.bool_;
	double  *constant_src_2_D = &i->src_2.double_;
	String  *constant_src_2_S =  i->src_2.str;
	// Pointers to global data
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset);
	StackData *global_src2 = vectorAt(stack.vect, i->src_1.offset);

	//GGSS
	assert(false && "Instruction not implemented!");
}


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#endif
