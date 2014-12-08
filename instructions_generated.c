#include "instructions_generated.h"
extern Stack stack;
#define vectorAt(v, i) ((StackData*)(v->array) + (i))


#if defined(__clang__)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"

#elif defined(__GNUC__) || defined(__GNUG__)

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

#endif

#define extract_data() \
	/* Pointers to local data */ \
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset); \
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_2.offset); \
\
	/* Pointers to constants */ \
	int     *constant_src_1_I = &i->src_1.int_;   \
	bool    *constant_src_1_B = &i->src_1.bool_;  \
	double  *constant_src_1_D = &i->src_1.double_;\
	String  *constant_src_1_S =  i->src_1.str;    \
\
	int     *constant_src_2_I = &i->src_2.int_;   \
	bool    *constant_src_2_B = &i->src_2.bool_;  \
	double  *constant_src_2_D = &i->src_2.double_;\
	String  *constant_src_2_S =  i->src_2.str;    \
	/* Pointers to global data */ \
	StackData *global_src1 = vectorAt(stack.vect, i->src_1.offset); \
	StackData *global_src2 = vectorAt(stack.vect, i->src_2.offset);

//////////////////////////////////////////////////////////////////////
static Operand operand;

void Instr_NEG_LxIx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LxIx
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = (-1)* local_src1->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NEG_LxDx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LxDx
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = (-1)* local_src1->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NEG_GxIx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxIx
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = (-1)* global_src1->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NEG_GxDx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxDx
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = (-1)* global_src1->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NOT_LxBx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LxBx
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = !local_src1->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NOT_GxBx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxBx
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = !global_src1->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I * local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I * local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D * local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D * local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I * global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I * global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D * global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D * global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = (double)*constant_src_1_I / local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I / local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D / local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D / local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = (double)*constant_src_1_I / global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I / global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D / global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D / global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B && local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B && global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I + local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I + local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D + local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D + local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(constant_src_1_S, local_src2->str);
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I + global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I + global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D + global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D + global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(constant_src_1_S, global_src2->str);
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(local_src1->str, constant_src_2_S);
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(local_src1->str, local_src2->str);
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(local_src1->str, global_src2->str);
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(global_src1->str, constant_src_2_S);
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(global_src1->str, local_src2->str);
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(global_src1->str, global_src2->str);
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I - local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I - local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D - local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D - local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I - global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I - global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D - global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D - global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B || local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B || global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B ^ local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B ^ global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I < local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D < local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B < local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I < global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D < global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B < global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I > local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D > local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B > local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I > global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D > global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B > global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I <= local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D <= local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B <= local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I <= global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D <= global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B <= global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I >= local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D >= local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B >= local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I >= global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D >= global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B >= global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I == local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D == local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B == local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I == global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D == global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B == global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I != local_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D != local_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B != local_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I != global_src2->int_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D != global_src2->double_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B != global_src2->bool_;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	stack.SP = stack.SP + i->dst.sp_inc;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#endif
const InstrFuncPtr instruction_table[3744] = {
	[42] = Instr_NEG_LxIx /* LCII */,
	[41] = Instr_NEG_LxIx /* LCID */,
	[43] = Instr_NEG_LxIx /* LCIB */,
	[40] = Instr_NEG_LxIx /* LCIS */,
	[38] = Instr_NEG_LxDx /* LCDI */,
	[37] = Instr_NEG_LxDx /* LCDD */,
	[39] = Instr_NEG_LxDx /* LCDB */,
	[36] = Instr_NEG_LxDx /* LCDS */,
	[10] = Instr_NEG_LxIx /* LLII */,
	[9] = Instr_NEG_LxIx /* LLID */,
	[11] = Instr_NEG_LxIx /* LLIB */,
	[8] = Instr_NEG_LxIx /* LLIS */,
	[6] = Instr_NEG_LxDx /* LLDI */,
	[5] = Instr_NEG_LxDx /* LLDD */,
	[7] = Instr_NEG_LxDx /* LLDB */,
	[4] = Instr_NEG_LxDx /* LLDS */,
	[26] = Instr_NEG_LxIx /* LGII */,
	[25] = Instr_NEG_LxIx /* LGID */,
	[27] = Instr_NEG_LxIx /* LGIB */,
	[24] = Instr_NEG_LxIx /* LGIS */,
	[22] = Instr_NEG_LxDx /* LGDI */,
	[21] = Instr_NEG_LxDx /* LGDD */,
	[23] = Instr_NEG_LxDx /* LGDB */,
	[20] = Instr_NEG_LxDx /* LGDS */,
	[106] = Instr_NEG_GxIx /* GCII */,
	[105] = Instr_NEG_GxIx /* GCID */,
	[107] = Instr_NEG_GxIx /* GCIB */,
	[104] = Instr_NEG_GxIx /* GCIS */,
	[102] = Instr_NEG_GxDx /* GCDI */,
	[101] = Instr_NEG_GxDx /* GCDD */,
	[103] = Instr_NEG_GxDx /* GCDB */,
	[100] = Instr_NEG_GxDx /* GCDS */,
	[74] = Instr_NEG_GxIx /* GLII */,
	[73] = Instr_NEG_GxIx /* GLID */,
	[75] = Instr_NEG_GxIx /* GLIB */,
	[72] = Instr_NEG_GxIx /* GLIS */,
	[70] = Instr_NEG_GxDx /* GLDI */,
	[69] = Instr_NEG_GxDx /* GLDD */,
	[71] = Instr_NEG_GxDx /* GLDB */,
	[68] = Instr_NEG_GxDx /* GLDS */,
	[90] = Instr_NEG_GxIx /* GGII */,
	[89] = Instr_NEG_GxIx /* GGID */,
	[91] = Instr_NEG_GxIx /* GGIB */,
	[88] = Instr_NEG_GxIx /* GGIS */,
	[86] = Instr_NEG_GxDx /* GGDI */,
	[85] = Instr_NEG_GxDx /* GGDD */,
	[87] = Instr_NEG_GxDx /* GGDB */,
	[84] = Instr_NEG_GxDx /* GGDS */,
	[302] = Instr_NOT_LxBx /* LCBI */,
	[301] = Instr_NOT_LxBx /* LCBD */,
	[303] = Instr_NOT_LxBx /* LCBB */,
	[300] = Instr_NOT_LxBx /* LCBS */,
	[270] = Instr_NOT_LxBx /* LLBI */,
	[269] = Instr_NOT_LxBx /* LLBD */,
	[271] = Instr_NOT_LxBx /* LLBB */,
	[268] = Instr_NOT_LxBx /* LLBS */,
	[286] = Instr_NOT_LxBx /* LGBI */,
	[285] = Instr_NOT_LxBx /* LGBD */,
	[287] = Instr_NOT_LxBx /* LGBB */,
	[284] = Instr_NOT_LxBx /* LGBS */,
	[366] = Instr_NOT_GxBx /* GCBI */,
	[365] = Instr_NOT_GxBx /* GCBD */,
	[367] = Instr_NOT_GxBx /* GCBB */,
	[364] = Instr_NOT_GxBx /* GCBS */,
	[334] = Instr_NOT_GxBx /* GLBI */,
	[333] = Instr_NOT_GxBx /* GLBD */,
	[335] = Instr_NOT_GxBx /* GLBB */,
	[332] = Instr_NOT_GxBx /* GLBS */,
	[350] = Instr_NOT_GxBx /* GGBI */,
	[349] = Instr_NOT_GxBx /* GGBD */,
	[351] = Instr_NOT_GxBx /* GGBB */,
	[348] = Instr_NOT_GxBx /* GGBS */,
	[650] = Instr_MUL_CLII,
	[649] = Instr_MUL_CLID,
	[646] = Instr_MUL_CLDI,
	[645] = Instr_MUL_CLDD,
	[666] = Instr_MUL_CGII,
	[665] = Instr_MUL_CGID,
	[662] = Instr_MUL_CGDI,
	[661] = Instr_MUL_CGDD,
	[906] = Instr_DIV_CLII,
	[905] = Instr_DIV_CLID,
	[902] = Instr_DIV_CLDI,
	[901] = Instr_DIV_CLDD,
	[922] = Instr_DIV_CGII,
	[921] = Instr_DIV_CGID,
	[918] = Instr_DIV_CGDI,
	[917] = Instr_DIV_CGDD,
	[1167] = Instr_AND_CLBB,
	[1183] = Instr_AND_CGBB,
	[1418] = Instr_ADD_CLII,
	[1417] = Instr_ADD_CLID,
	[1414] = Instr_ADD_CLDI,
	[1413] = Instr_ADD_CLDD,
	[1408] = Instr_ADD_CLSS,
	[1434] = Instr_ADD_CGII,
	[1433] = Instr_ADD_CGID,
	[1430] = Instr_ADD_CGDI,
	[1429] = Instr_ADD_CGDD,
	[1424] = Instr_ADD_CGSS,
	[1312] = Instr_ADD_LCSS,
	[1280] = Instr_ADD_LLSS,
	[1296] = Instr_ADD_LGSS,
	[1376] = Instr_ADD_GCSS,
	[1344] = Instr_ADD_GLSS,
	[1360] = Instr_ADD_GGSS,
	[1674] = Instr_SUB_CLII,
	[1673] = Instr_SUB_CLID,
	[1670] = Instr_SUB_CLDI,
	[1669] = Instr_SUB_CLDD,
	[1690] = Instr_SUB_CGII,
	[1689] = Instr_SUB_CGID,
	[1686] = Instr_SUB_CGDI,
	[1685] = Instr_SUB_CGDD,
	[1935] = Instr_OR_CLBB,
	[1951] = Instr_OR_CGBB,
	[2191] = Instr_XOR_CLBB,
	[2207] = Instr_XOR_CGBB,
	[2442] = Instr_L_CLII,
	[2437] = Instr_L_CLDD,
	[2447] = Instr_L_CLBB,
	[2432] = Instr_L_CLSS,
	[2458] = Instr_L_CGII,
	[2453] = Instr_L_CGDD,
	[2463] = Instr_L_CGBB,
	[2448] = Instr_L_CGSS,
	[2336] = Instr_L_LCSS,
	[2304] = Instr_L_LLSS,
	[2320] = Instr_L_LGSS,
	[2400] = Instr_L_GCSS,
	[2368] = Instr_L_GLSS,
	[2384] = Instr_L_GGSS,
	[2698] = Instr_G_CLII,
	[2693] = Instr_G_CLDD,
	[2703] = Instr_G_CLBB,
	[2688] = Instr_G_CLSS,
	[2714] = Instr_G_CGII,
	[2709] = Instr_G_CGDD,
	[2719] = Instr_G_CGBB,
	[2704] = Instr_G_CGSS,
	[2592] = Instr_G_LCSS,
	[2560] = Instr_G_LLSS,
	[2576] = Instr_G_LGSS,
	[2656] = Instr_G_GCSS,
	[2624] = Instr_G_GLSS,
	[2640] = Instr_G_GGSS,
	[2954] = Instr_LE_CLII,
	[2949] = Instr_LE_CLDD,
	[2959] = Instr_LE_CLBB,
	[2944] = Instr_LE_CLSS,
	[2970] = Instr_LE_CGII,
	[2965] = Instr_LE_CGDD,
	[2975] = Instr_LE_CGBB,
	[2960] = Instr_LE_CGSS,
	[2848] = Instr_LE_LCSS,
	[2816] = Instr_LE_LLSS,
	[2832] = Instr_LE_LGSS,
	[2912] = Instr_LE_GCSS,
	[2880] = Instr_LE_GLSS,
	[2896] = Instr_LE_GGSS,
	[3210] = Instr_GE_CLII,
	[3205] = Instr_GE_CLDD,
	[3215] = Instr_GE_CLBB,
	[3200] = Instr_GE_CLSS,
	[3226] = Instr_GE_CGII,
	[3221] = Instr_GE_CGDD,
	[3231] = Instr_GE_CGBB,
	[3216] = Instr_GE_CGSS,
	[3104] = Instr_GE_LCSS,
	[3072] = Instr_GE_LLSS,
	[3088] = Instr_GE_LGSS,
	[3168] = Instr_GE_GCSS,
	[3136] = Instr_GE_GLSS,
	[3152] = Instr_GE_GGSS,
	[3466] = Instr_EQ_CLII,
	[3461] = Instr_EQ_CLDD,
	[3471] = Instr_EQ_CLBB,
	[3456] = Instr_EQ_CLSS,
	[3482] = Instr_EQ_CGII,
	[3477] = Instr_EQ_CGDD,
	[3487] = Instr_EQ_CGBB,
	[3472] = Instr_EQ_CGSS,
	[3360] = Instr_EQ_LCSS,
	[3328] = Instr_EQ_LLSS,
	[3344] = Instr_EQ_LGSS,
	[3424] = Instr_EQ_GCSS,
	[3392] = Instr_EQ_GLSS,
	[3408] = Instr_EQ_GGSS,
	[3722] = Instr_NE_CLII,
	[3717] = Instr_NE_CLDD,
	[3727] = Instr_NE_CLBB,
	[3712] = Instr_NE_CLSS,
	[3738] = Instr_NE_CGII,
	[3733] = Instr_NE_CGDD,
	[3743] = Instr_NE_CGBB,
	[3728] = Instr_NE_CGSS,
	[3616] = Instr_NE_LCSS,
	[3584] = Instr_NE_LLSS,
	[3600] = Instr_NE_LGSS,
	[3680] = Instr_NE_GCSS,
	[3648] = Instr_NE_GLSS,
	[3664] = Instr_NE_GGSS,
};
#include "instructions_regular.h"
char *stringifyInstructionPtr(InstrFuncPtr ptr) {
		if(*ptr == Instr_NEG_LxIx /* LCII */) return "Instr_NEG_LxIx /* LCII */";
		if(*ptr == Instr_NEG_LxIx /* LCID */) return "Instr_NEG_LxIx /* LCID */";
		if(*ptr == Instr_NEG_LxIx /* LCIB */) return "Instr_NEG_LxIx /* LCIB */";
		if(*ptr == Instr_NEG_LxIx /* LCIS */) return "Instr_NEG_LxIx /* LCIS */";
		if(*ptr == Instr_NEG_LxDx /* LCDI */) return "Instr_NEG_LxDx /* LCDI */";
		if(*ptr == Instr_NEG_LxDx /* LCDD */) return "Instr_NEG_LxDx /* LCDD */";
		if(*ptr == Instr_NEG_LxDx /* LCDB */) return "Instr_NEG_LxDx /* LCDB */";
		if(*ptr == Instr_NEG_LxDx /* LCDS */) return "Instr_NEG_LxDx /* LCDS */";
		if(*ptr == Instr_NEG_LxIx /* LLII */) return "Instr_NEG_LxIx /* LLII */";
		if(*ptr == Instr_NEG_LxIx /* LLID */) return "Instr_NEG_LxIx /* LLID */";
		if(*ptr == Instr_NEG_LxIx /* LLIB */) return "Instr_NEG_LxIx /* LLIB */";
		if(*ptr == Instr_NEG_LxIx /* LLIS */) return "Instr_NEG_LxIx /* LLIS */";
		if(*ptr == Instr_NEG_LxDx /* LLDI */) return "Instr_NEG_LxDx /* LLDI */";
		if(*ptr == Instr_NEG_LxDx /* LLDD */) return "Instr_NEG_LxDx /* LLDD */";
		if(*ptr == Instr_NEG_LxDx /* LLDB */) return "Instr_NEG_LxDx /* LLDB */";
		if(*ptr == Instr_NEG_LxDx /* LLDS */) return "Instr_NEG_LxDx /* LLDS */";
		if(*ptr == Instr_NEG_LxIx /* LGII */) return "Instr_NEG_LxIx /* LGII */";
		if(*ptr == Instr_NEG_LxIx /* LGID */) return "Instr_NEG_LxIx /* LGID */";
		if(*ptr == Instr_NEG_LxIx /* LGIB */) return "Instr_NEG_LxIx /* LGIB */";
		if(*ptr == Instr_NEG_LxIx /* LGIS */) return "Instr_NEG_LxIx /* LGIS */";
		if(*ptr == Instr_NEG_LxDx /* LGDI */) return "Instr_NEG_LxDx /* LGDI */";
		if(*ptr == Instr_NEG_LxDx /* LGDD */) return "Instr_NEG_LxDx /* LGDD */";
		if(*ptr == Instr_NEG_LxDx /* LGDB */) return "Instr_NEG_LxDx /* LGDB */";
		if(*ptr == Instr_NEG_LxDx /* LGDS */) return "Instr_NEG_LxDx /* LGDS */";
		if(*ptr == Instr_NEG_GxIx /* GCII */) return "Instr_NEG_GxIx /* GCII */";
		if(*ptr == Instr_NEG_GxIx /* GCID */) return "Instr_NEG_GxIx /* GCID */";
		if(*ptr == Instr_NEG_GxIx /* GCIB */) return "Instr_NEG_GxIx /* GCIB */";
		if(*ptr == Instr_NEG_GxIx /* GCIS */) return "Instr_NEG_GxIx /* GCIS */";
		if(*ptr == Instr_NEG_GxDx /* GCDI */) return "Instr_NEG_GxDx /* GCDI */";
		if(*ptr == Instr_NEG_GxDx /* GCDD */) return "Instr_NEG_GxDx /* GCDD */";
		if(*ptr == Instr_NEG_GxDx /* GCDB */) return "Instr_NEG_GxDx /* GCDB */";
		if(*ptr == Instr_NEG_GxDx /* GCDS */) return "Instr_NEG_GxDx /* GCDS */";
		if(*ptr == Instr_NEG_GxIx /* GLII */) return "Instr_NEG_GxIx /* GLII */";
		if(*ptr == Instr_NEG_GxIx /* GLID */) return "Instr_NEG_GxIx /* GLID */";
		if(*ptr == Instr_NEG_GxIx /* GLIB */) return "Instr_NEG_GxIx /* GLIB */";
		if(*ptr == Instr_NEG_GxIx /* GLIS */) return "Instr_NEG_GxIx /* GLIS */";
		if(*ptr == Instr_NEG_GxDx /* GLDI */) return "Instr_NEG_GxDx /* GLDI */";
		if(*ptr == Instr_NEG_GxDx /* GLDD */) return "Instr_NEG_GxDx /* GLDD */";
		if(*ptr == Instr_NEG_GxDx /* GLDB */) return "Instr_NEG_GxDx /* GLDB */";
		if(*ptr == Instr_NEG_GxDx /* GLDS */) return "Instr_NEG_GxDx /* GLDS */";
		if(*ptr == Instr_NEG_GxIx /* GGII */) return "Instr_NEG_GxIx /* GGII */";
		if(*ptr == Instr_NEG_GxIx /* GGID */) return "Instr_NEG_GxIx /* GGID */";
		if(*ptr == Instr_NEG_GxIx /* GGIB */) return "Instr_NEG_GxIx /* GGIB */";
		if(*ptr == Instr_NEG_GxIx /* GGIS */) return "Instr_NEG_GxIx /* GGIS */";
		if(*ptr == Instr_NEG_GxDx /* GGDI */) return "Instr_NEG_GxDx /* GGDI */";
		if(*ptr == Instr_NEG_GxDx /* GGDD */) return "Instr_NEG_GxDx /* GGDD */";
		if(*ptr == Instr_NEG_GxDx /* GGDB */) return "Instr_NEG_GxDx /* GGDB */";
		if(*ptr == Instr_NEG_GxDx /* GGDS */) return "Instr_NEG_GxDx /* GGDS */";
		if(*ptr == Instr_NOT_LxBx /* LCBI */) return "Instr_NOT_LxBx /* LCBI */";
		if(*ptr == Instr_NOT_LxBx /* LCBD */) return "Instr_NOT_LxBx /* LCBD */";
		if(*ptr == Instr_NOT_LxBx /* LCBB */) return "Instr_NOT_LxBx /* LCBB */";
		if(*ptr == Instr_NOT_LxBx /* LCBS */) return "Instr_NOT_LxBx /* LCBS */";
		if(*ptr == Instr_NOT_LxBx /* LLBI */) return "Instr_NOT_LxBx /* LLBI */";
		if(*ptr == Instr_NOT_LxBx /* LLBD */) return "Instr_NOT_LxBx /* LLBD */";
		if(*ptr == Instr_NOT_LxBx /* LLBB */) return "Instr_NOT_LxBx /* LLBB */";
		if(*ptr == Instr_NOT_LxBx /* LLBS */) return "Instr_NOT_LxBx /* LLBS */";
		if(*ptr == Instr_NOT_LxBx /* LGBI */) return "Instr_NOT_LxBx /* LGBI */";
		if(*ptr == Instr_NOT_LxBx /* LGBD */) return "Instr_NOT_LxBx /* LGBD */";
		if(*ptr == Instr_NOT_LxBx /* LGBB */) return "Instr_NOT_LxBx /* LGBB */";
		if(*ptr == Instr_NOT_LxBx /* LGBS */) return "Instr_NOT_LxBx /* LGBS */";
		if(*ptr == Instr_NOT_GxBx /* GCBI */) return "Instr_NOT_GxBx /* GCBI */";
		if(*ptr == Instr_NOT_GxBx /* GCBD */) return "Instr_NOT_GxBx /* GCBD */";
		if(*ptr == Instr_NOT_GxBx /* GCBB */) return "Instr_NOT_GxBx /* GCBB */";
		if(*ptr == Instr_NOT_GxBx /* GCBS */) return "Instr_NOT_GxBx /* GCBS */";
		if(*ptr == Instr_NOT_GxBx /* GLBI */) return "Instr_NOT_GxBx /* GLBI */";
		if(*ptr == Instr_NOT_GxBx /* GLBD */) return "Instr_NOT_GxBx /* GLBD */";
		if(*ptr == Instr_NOT_GxBx /* GLBB */) return "Instr_NOT_GxBx /* GLBB */";
		if(*ptr == Instr_NOT_GxBx /* GLBS */) return "Instr_NOT_GxBx /* GLBS */";
		if(*ptr == Instr_NOT_GxBx /* GGBI */) return "Instr_NOT_GxBx /* GGBI */";
		if(*ptr == Instr_NOT_GxBx /* GGBD */) return "Instr_NOT_GxBx /* GGBD */";
		if(*ptr == Instr_NOT_GxBx /* GGBB */) return "Instr_NOT_GxBx /* GGBB */";
		if(*ptr == Instr_NOT_GxBx /* GGBS */) return "Instr_NOT_GxBx /* GGBS */";
		if(*ptr == Instr_MUL_CLII) return "Instr_MUL_CLII";
		if(*ptr == Instr_MUL_CLID) return "Instr_MUL_CLID";
		if(*ptr == Instr_MUL_CLDI) return "Instr_MUL_CLDI";
		if(*ptr == Instr_MUL_CLDD) return "Instr_MUL_CLDD";
		if(*ptr == Instr_MUL_CGII) return "Instr_MUL_CGII";
		if(*ptr == Instr_MUL_CGID) return "Instr_MUL_CGID";
		if(*ptr == Instr_MUL_CGDI) return "Instr_MUL_CGDI";
		if(*ptr == Instr_MUL_CGDD) return "Instr_MUL_CGDD";
		if(*ptr == Instr_DIV_CLII) return "Instr_DIV_CLII";
		if(*ptr == Instr_DIV_CLID) return "Instr_DIV_CLID";
		if(*ptr == Instr_DIV_CLDI) return "Instr_DIV_CLDI";
		if(*ptr == Instr_DIV_CLDD) return "Instr_DIV_CLDD";
		if(*ptr == Instr_DIV_CGII) return "Instr_DIV_CGII";
		if(*ptr == Instr_DIV_CGID) return "Instr_DIV_CGID";
		if(*ptr == Instr_DIV_CGDI) return "Instr_DIV_CGDI";
		if(*ptr == Instr_DIV_CGDD) return "Instr_DIV_CGDD";
		if(*ptr == Instr_AND_CLBB) return "Instr_AND_CLBB";
		if(*ptr == Instr_AND_CGBB) return "Instr_AND_CGBB";
		if(*ptr == Instr_ADD_CLII) return "Instr_ADD_CLII";
		if(*ptr == Instr_ADD_CLID) return "Instr_ADD_CLID";
		if(*ptr == Instr_ADD_CLDI) return "Instr_ADD_CLDI";
		if(*ptr == Instr_ADD_CLDD) return "Instr_ADD_CLDD";
		if(*ptr == Instr_ADD_CLSS) return "Instr_ADD_CLSS";
		if(*ptr == Instr_ADD_CGII) return "Instr_ADD_CGII";
		if(*ptr == Instr_ADD_CGID) return "Instr_ADD_CGID";
		if(*ptr == Instr_ADD_CGDI) return "Instr_ADD_CGDI";
		if(*ptr == Instr_ADD_CGDD) return "Instr_ADD_CGDD";
		if(*ptr == Instr_ADD_CGSS) return "Instr_ADD_CGSS";
		if(*ptr == Instr_ADD_LCSS) return "Instr_ADD_LCSS";
		if(*ptr == Instr_ADD_LLSS) return "Instr_ADD_LLSS";
		if(*ptr == Instr_ADD_LGSS) return "Instr_ADD_LGSS";
		if(*ptr == Instr_ADD_GCSS) return "Instr_ADD_GCSS";
		if(*ptr == Instr_ADD_GLSS) return "Instr_ADD_GLSS";
		if(*ptr == Instr_ADD_GGSS) return "Instr_ADD_GGSS";
		if(*ptr == Instr_SUB_CLII) return "Instr_SUB_CLII";
		if(*ptr == Instr_SUB_CLID) return "Instr_SUB_CLID";
		if(*ptr == Instr_SUB_CLDI) return "Instr_SUB_CLDI";
		if(*ptr == Instr_SUB_CLDD) return "Instr_SUB_CLDD";
		if(*ptr == Instr_SUB_CGII) return "Instr_SUB_CGII";
		if(*ptr == Instr_SUB_CGID) return "Instr_SUB_CGID";
		if(*ptr == Instr_SUB_CGDI) return "Instr_SUB_CGDI";
		if(*ptr == Instr_SUB_CGDD) return "Instr_SUB_CGDD";
		if(*ptr == Instr_OR_CLBB) return "Instr_OR_CLBB";
		if(*ptr == Instr_OR_CGBB) return "Instr_OR_CGBB";
		if(*ptr == Instr_XOR_CLBB) return "Instr_XOR_CLBB";
		if(*ptr == Instr_XOR_CGBB) return "Instr_XOR_CGBB";
		if(*ptr == Instr_L_CLII) return "Instr_L_CLII";
		if(*ptr == Instr_L_CLDD) return "Instr_L_CLDD";
		if(*ptr == Instr_L_CLBB) return "Instr_L_CLBB";
		if(*ptr == Instr_L_CLSS) return "Instr_L_CLSS";
		if(*ptr == Instr_L_CGII) return "Instr_L_CGII";
		if(*ptr == Instr_L_CGDD) return "Instr_L_CGDD";
		if(*ptr == Instr_L_CGBB) return "Instr_L_CGBB";
		if(*ptr == Instr_L_CGSS) return "Instr_L_CGSS";
		if(*ptr == Instr_L_LCSS) return "Instr_L_LCSS";
		if(*ptr == Instr_L_LLSS) return "Instr_L_LLSS";
		if(*ptr == Instr_L_LGSS) return "Instr_L_LGSS";
		if(*ptr == Instr_L_GCSS) return "Instr_L_GCSS";
		if(*ptr == Instr_L_GLSS) return "Instr_L_GLSS";
		if(*ptr == Instr_L_GGSS) return "Instr_L_GGSS";
		if(*ptr == Instr_G_CLII) return "Instr_G_CLII";
		if(*ptr == Instr_G_CLDD) return "Instr_G_CLDD";
		if(*ptr == Instr_G_CLBB) return "Instr_G_CLBB";
		if(*ptr == Instr_G_CLSS) return "Instr_G_CLSS";
		if(*ptr == Instr_G_CGII) return "Instr_G_CGII";
		if(*ptr == Instr_G_CGDD) return "Instr_G_CGDD";
		if(*ptr == Instr_G_CGBB) return "Instr_G_CGBB";
		if(*ptr == Instr_G_CGSS) return "Instr_G_CGSS";
		if(*ptr == Instr_G_LCSS) return "Instr_G_LCSS";
		if(*ptr == Instr_G_LLSS) return "Instr_G_LLSS";
		if(*ptr == Instr_G_LGSS) return "Instr_G_LGSS";
		if(*ptr == Instr_G_GCSS) return "Instr_G_GCSS";
		if(*ptr == Instr_G_GLSS) return "Instr_G_GLSS";
		if(*ptr == Instr_G_GGSS) return "Instr_G_GGSS";
		if(*ptr == Instr_LE_CLII) return "Instr_LE_CLII";
		if(*ptr == Instr_LE_CLDD) return "Instr_LE_CLDD";
		if(*ptr == Instr_LE_CLBB) return "Instr_LE_CLBB";
		if(*ptr == Instr_LE_CLSS) return "Instr_LE_CLSS";
		if(*ptr == Instr_LE_CGII) return "Instr_LE_CGII";
		if(*ptr == Instr_LE_CGDD) return "Instr_LE_CGDD";
		if(*ptr == Instr_LE_CGBB) return "Instr_LE_CGBB";
		if(*ptr == Instr_LE_CGSS) return "Instr_LE_CGSS";
		if(*ptr == Instr_LE_LCSS) return "Instr_LE_LCSS";
		if(*ptr == Instr_LE_LLSS) return "Instr_LE_LLSS";
		if(*ptr == Instr_LE_LGSS) return "Instr_LE_LGSS";
		if(*ptr == Instr_LE_GCSS) return "Instr_LE_GCSS";
		if(*ptr == Instr_LE_GLSS) return "Instr_LE_GLSS";
		if(*ptr == Instr_LE_GGSS) return "Instr_LE_GGSS";
		if(*ptr == Instr_GE_CLII) return "Instr_GE_CLII";
		if(*ptr == Instr_GE_CLDD) return "Instr_GE_CLDD";
		if(*ptr == Instr_GE_CLBB) return "Instr_GE_CLBB";
		if(*ptr == Instr_GE_CLSS) return "Instr_GE_CLSS";
		if(*ptr == Instr_GE_CGII) return "Instr_GE_CGII";
		if(*ptr == Instr_GE_CGDD) return "Instr_GE_CGDD";
		if(*ptr == Instr_GE_CGBB) return "Instr_GE_CGBB";
		if(*ptr == Instr_GE_CGSS) return "Instr_GE_CGSS";
		if(*ptr == Instr_GE_LCSS) return "Instr_GE_LCSS";
		if(*ptr == Instr_GE_LLSS) return "Instr_GE_LLSS";
		if(*ptr == Instr_GE_LGSS) return "Instr_GE_LGSS";
		if(*ptr == Instr_GE_GCSS) return "Instr_GE_GCSS";
		if(*ptr == Instr_GE_GLSS) return "Instr_GE_GLSS";
		if(*ptr == Instr_GE_GGSS) return "Instr_GE_GGSS";
		if(*ptr == Instr_EQ_CLII) return "Instr_EQ_CLII";
		if(*ptr == Instr_EQ_CLDD) return "Instr_EQ_CLDD";
		if(*ptr == Instr_EQ_CLBB) return "Instr_EQ_CLBB";
		if(*ptr == Instr_EQ_CLSS) return "Instr_EQ_CLSS";
		if(*ptr == Instr_EQ_CGII) return "Instr_EQ_CGII";
		if(*ptr == Instr_EQ_CGDD) return "Instr_EQ_CGDD";
		if(*ptr == Instr_EQ_CGBB) return "Instr_EQ_CGBB";
		if(*ptr == Instr_EQ_CGSS) return "Instr_EQ_CGSS";
		if(*ptr == Instr_EQ_LCSS) return "Instr_EQ_LCSS";
		if(*ptr == Instr_EQ_LLSS) return "Instr_EQ_LLSS";
		if(*ptr == Instr_EQ_LGSS) return "Instr_EQ_LGSS";
		if(*ptr == Instr_EQ_GCSS) return "Instr_EQ_GCSS";
		if(*ptr == Instr_EQ_GLSS) return "Instr_EQ_GLSS";
		if(*ptr == Instr_EQ_GGSS) return "Instr_EQ_GGSS";
		if(*ptr == Instr_NE_CLII) return "Instr_NE_CLII";
		if(*ptr == Instr_NE_CLDD) return "Instr_NE_CLDD";
		if(*ptr == Instr_NE_CLBB) return "Instr_NE_CLBB";
		if(*ptr == Instr_NE_CLSS) return "Instr_NE_CLSS";
		if(*ptr == Instr_NE_CGII) return "Instr_NE_CGII";
		if(*ptr == Instr_NE_CGDD) return "Instr_NE_CGDD";
		if(*ptr == Instr_NE_CGBB) return "Instr_NE_CGBB";
		if(*ptr == Instr_NE_CGSS) return "Instr_NE_CGSS";
		if(*ptr == Instr_NE_LCSS) return "Instr_NE_LCSS";
		if(*ptr == Instr_NE_LLSS) return "Instr_NE_LLSS";
		if(*ptr == Instr_NE_LGSS) return "Instr_NE_LGSS";
		if(*ptr == Instr_NE_GCSS) return "Instr_NE_GCSS";
		if(*ptr == Instr_NE_GLSS) return "Instr_NE_GLSS";
		if(*ptr == Instr_NE_GGSS) return "Instr_NE_GGSS";
	if(*ptr == Instr_READLN_LS) return "Instr_READLN_LS";
	if(*ptr == Instr_READLN_LD) return "Instr_READLN_LD";
	if(*ptr == Instr_READLN_LI) return "Instr_READLN_LI";
	if(*ptr == Instr_READLN_GS) return "Instr_READLN_GS";
	if(*ptr == Instr_READLN_GD) return "Instr_READLN_GD";
	if(*ptr == Instr_READLN_GI) return "Instr_READLN_GI";
	if(*ptr == Instr_WRITE) return "Instr_WRITE";
	if(*ptr == Instr_MOV_GS) return "Instr_MOV_GS";
	if(*ptr == Instr_MOV_GD) return "Instr_MOV_GD";
	if(*ptr == Instr_MOV_GI) return "Instr_MOV_GI";
	if(*ptr == Instr_MOV_GB) return "Instr_MOV_GB";
	if(*ptr == Instr_PUSH_C) return "Instr_PUSH_C";
	if(*ptr == Instr_PUSH_LS) return "Instr_PUSH_LS";
	if(*ptr == Instr_PUSH_LD) return "Instr_PUSH_LD";
	if(*ptr == Instr_PUSH_LI) return "Instr_PUSH_LI";
	if(*ptr == Instr_PUSH_LB) return "Instr_PUSH_LB";
	if(*ptr == Instr_PUSH_GS) return "Instr_PUSH_GS";
	if(*ptr == Instr_PUSH_GD) return "Instr_PUSH_GD";
	if(*ptr == Instr_PUSH_GI) return "Instr_PUSH_GI";
	if(*ptr == Instr_PUSH_GB) return "Instr_PUSH_GB";
	if(*ptr == Instr_CALL) return "Instr_CALL";
	if(*ptr == Instr_CALL_LENGTH) return "Instr_CALL_LENGTH";
	if(*ptr == Instr_CALL_COPY) return "Instr_CALL_COPY";
	if(*ptr == Instr_CALL_FIND) return "Instr_CALL_FIND";
	if(*ptr == Instr_CALL_SORT) return "Instr_CALL_SORT";
	if(*ptr == Instr_JMP_T) return "Instr_JMP_T";
	if(*ptr == Instr_JMP_F) return "Instr_JMP_F";
	if(*ptr == Instr_JMP) return "Instr_JMP";
	if(*ptr == Instr_HALT) return "Instr_HALT";
	return "NaN";
}
