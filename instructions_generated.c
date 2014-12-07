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
