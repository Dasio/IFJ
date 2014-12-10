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
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = (-1)* local_src1->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NEG_LxDx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LxDx
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = (-1)* local_src1->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NEG_GxIx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxIx
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = (-1)* global_src1->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NEG_GxDx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxDx
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = (-1)* global_src1->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NOT_LxBx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LxBx
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = !local_src1->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NOT_GxBx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxBx
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = !global_src1->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I * local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I * local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D * local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D * local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I * global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I * global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D * global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D * global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ * *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ * *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ * *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ * *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ * local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ * local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ * local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ * local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ * global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ * global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ * global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ * global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ * *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ * *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ * *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ * *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ * local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ * local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ * local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ * local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ * global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ * global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ * global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_MUL_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ * global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
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
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(local_src2->initialized == false) {
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
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(local_src2->initialized == false) {
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
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
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
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
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
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(global_src2->initialized == false) {
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
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(global_src2->initialized == false) {
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
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
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
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(*constant_src_2_I == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = (double)local_src1->int_ / *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->int_ / *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(*constant_src_2_I == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->double_ / *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->double_ / *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = (double)local_src1->int_ / local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->int_ / local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->double_ / local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->double_ / local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = (double)local_src1->int_ / global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->int_ / global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->double_ / global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = local_src1->double_ / global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(*constant_src_2_I == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = (double)global_src1->int_ / *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->int_ / *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(*constant_src_2_I == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->double_ / *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->double_ / *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = (double)global_src1->int_ / local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->int_ / local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->double_ / local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->double_ / local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = (double)global_src1->int_ / global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->int_ / global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->double_ / global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_DIV_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	operand.double_ = global_src1->double_ / global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B && local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B && global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ && *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ && local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ && global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ && *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ && local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_AND_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ && global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I + local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I + local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D + local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D + local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(constant_src_1_S, local_src2->str);
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I + global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I + global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D + global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D + global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(constant_src_1_S, global_src2->str);
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ + *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ + *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ + *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ + *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(local_src1->str, constant_src_2_S);
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ + local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ + local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ + local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ + local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(local_src1->str, local_src2->str);
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ + global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ + global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ + global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ + global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(local_src1->str, global_src2->str);
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ + *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ + *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ + *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ + *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(global_src1->str, constant_src_2_S);
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ + local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ + local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ + local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ + local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(global_src1->str, local_src2->str);
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ + global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ + global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ + global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ + global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_ADD_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.str = concatStringToString(global_src1->str, global_src2->str);
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I - local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I - local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D - local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D - local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = *constant_src_1_I - global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_I - global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D - global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = *constant_src_1_D - global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ - *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ - *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ - *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ - *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ - local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ - local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ - local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ - local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = local_src1->int_ - global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->int_ - global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ - global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = local_src1->double_ - global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ - *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ - *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ - *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ - *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ - local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ - local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ - local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ - local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.int_ = global_src1->int_ - global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->int_ - global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ - global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_SUB_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.double_ = global_src1->double_ - global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B || local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B || global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ || *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ || local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ || global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ || *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ || local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_OR_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ || global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B ^ local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B ^ global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ ^ *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ ^ local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ ^ global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ ^ *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ ^ local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_XOR_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ ^ global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I < local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D < local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B < local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I < global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D < global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B < global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ < *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ < *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ < *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ < local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ < local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ < local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ < global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ < global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ < global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ < *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ < *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ < *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ < local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ < local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ < local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ < global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ < global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ < global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_L_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result < 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I > local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D > local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B > local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I > global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D > global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B > global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ > *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ > *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ > *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ > local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ > local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ > local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ > global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ > global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ > global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ > *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ > *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ > *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ > local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ > local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ > local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ > global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ > global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ > global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_G_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result > 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I <= local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D <= local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B <= local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I <= global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D <= global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B <= global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ <= *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ <= *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ <= *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ <= local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ <= local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ <= local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ <= global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ <= global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ <= global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ <= *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ <= *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ <= *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ <= local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ <= local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ <= local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ <= global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ <= global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ <= global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_LE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result <= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I >= local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D >= local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B >= local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I >= global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D >= global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B >= global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ >= *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ >= *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ >= *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ >= local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ >= local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ >= local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ >= global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ >= global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ >= global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ >= *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ >= *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ >= *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ >= local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ >= local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ >= local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ >= global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ >= global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ >= global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_GE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result >= 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I == local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D == local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B == local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I == global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D == global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B == global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ == *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ == *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ == *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ == local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ == local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ == local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ == global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ == global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ == global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ == *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ == *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ == *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ == local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ == local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ == local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ == global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ == global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ == global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_EQ_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result == 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I != local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D != local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B != local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_I != global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_D != global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = *constant_src_1_B != global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ != *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ != *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ != *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ != local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ != local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ != local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->int_ != global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->double_ != global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = local_src1->bool_ != global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(local_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ != *constant_src_2_I;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ != *constant_src_2_D;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ != *constant_src_2_B;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ != local_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ != local_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ != local_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(local_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->int_ != global_src2->int_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->double_ != global_src2->double_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}

	operand.bool_ = global_src1->bool_ != global_src2->bool_;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}

void Instr_NE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(global_src1->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}
	if(global_src2->initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
		return;
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	operand.bool_ = compare_result != 0;
	operand.initialized = true;
	StackDataVectorAtSet(stack.vect, stack.BP + i->dst.offset, operand);
}


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#endif
const InstrFuncPtr instruction_table[3744] = {
	[42] = Instr_NEG_LxIx,
	[41] = Instr_NEG_LxIx,
	[43] = Instr_NEG_LxIx,
	[40] = Instr_NEG_LxIx,
	[38] = Instr_NEG_LxDx,
	[37] = Instr_NEG_LxDx,
	[39] = Instr_NEG_LxDx,
	[36] = Instr_NEG_LxDx,
	[10] = Instr_NEG_LxIx,
	[9] = Instr_NEG_LxIx,
	[11] = Instr_NEG_LxIx,
	[8] = Instr_NEG_LxIx,
	[6] = Instr_NEG_LxDx,
	[5] = Instr_NEG_LxDx,
	[7] = Instr_NEG_LxDx,
	[4] = Instr_NEG_LxDx,
	[26] = Instr_NEG_LxIx,
	[25] = Instr_NEG_LxIx,
	[27] = Instr_NEG_LxIx,
	[24] = Instr_NEG_LxIx,
	[22] = Instr_NEG_LxDx,
	[21] = Instr_NEG_LxDx,
	[23] = Instr_NEG_LxDx,
	[20] = Instr_NEG_LxDx,
	[106] = Instr_NEG_GxIx,
	[105] = Instr_NEG_GxIx,
	[107] = Instr_NEG_GxIx,
	[104] = Instr_NEG_GxIx,
	[102] = Instr_NEG_GxDx,
	[101] = Instr_NEG_GxDx,
	[103] = Instr_NEG_GxDx,
	[100] = Instr_NEG_GxDx,
	[74] = Instr_NEG_GxIx,
	[73] = Instr_NEG_GxIx,
	[75] = Instr_NEG_GxIx,
	[72] = Instr_NEG_GxIx,
	[70] = Instr_NEG_GxDx,
	[69] = Instr_NEG_GxDx,
	[71] = Instr_NEG_GxDx,
	[68] = Instr_NEG_GxDx,
	[90] = Instr_NEG_GxIx,
	[89] = Instr_NEG_GxIx,
	[91] = Instr_NEG_GxIx,
	[88] = Instr_NEG_GxIx,
	[86] = Instr_NEG_GxDx,
	[85] = Instr_NEG_GxDx,
	[87] = Instr_NEG_GxDx,
	[84] = Instr_NEG_GxDx,
	[302] = Instr_NOT_LxBx,
	[301] = Instr_NOT_LxBx,
	[303] = Instr_NOT_LxBx,
	[300] = Instr_NOT_LxBx,
	[270] = Instr_NOT_LxBx,
	[269] = Instr_NOT_LxBx,
	[271] = Instr_NOT_LxBx,
	[268] = Instr_NOT_LxBx,
	[286] = Instr_NOT_LxBx,
	[285] = Instr_NOT_LxBx,
	[287] = Instr_NOT_LxBx,
	[284] = Instr_NOT_LxBx,
	[366] = Instr_NOT_GxBx,
	[365] = Instr_NOT_GxBx,
	[367] = Instr_NOT_GxBx,
	[364] = Instr_NOT_GxBx,
	[334] = Instr_NOT_GxBx,
	[333] = Instr_NOT_GxBx,
	[335] = Instr_NOT_GxBx,
	[332] = Instr_NOT_GxBx,
	[350] = Instr_NOT_GxBx,
	[349] = Instr_NOT_GxBx,
	[351] = Instr_NOT_GxBx,
	[348] = Instr_NOT_GxBx,
	[650] = Instr_MUL_CLII,
	[649] = Instr_MUL_CLID,
	[646] = Instr_MUL_CLDI,
	[645] = Instr_MUL_CLDD,
	[666] = Instr_MUL_CGII,
	[665] = Instr_MUL_CGID,
	[662] = Instr_MUL_CGDI,
	[661] = Instr_MUL_CGDD,
	[554] = Instr_MUL_LCII,
	[553] = Instr_MUL_LCID,
	[550] = Instr_MUL_LCDI,
	[549] = Instr_MUL_LCDD,
	[522] = Instr_MUL_LLII,
	[521] = Instr_MUL_LLID,
	[518] = Instr_MUL_LLDI,
	[517] = Instr_MUL_LLDD,
	[538] = Instr_MUL_LGII,
	[537] = Instr_MUL_LGID,
	[534] = Instr_MUL_LGDI,
	[533] = Instr_MUL_LGDD,
	[618] = Instr_MUL_GCII,
	[617] = Instr_MUL_GCID,
	[614] = Instr_MUL_GCDI,
	[613] = Instr_MUL_GCDD,
	[586] = Instr_MUL_GLII,
	[585] = Instr_MUL_GLID,
	[582] = Instr_MUL_GLDI,
	[581] = Instr_MUL_GLDD,
	[602] = Instr_MUL_GGII,
	[601] = Instr_MUL_GGID,
	[598] = Instr_MUL_GGDI,
	[597] = Instr_MUL_GGDD,
	[906] = Instr_DIV_CLII,
	[905] = Instr_DIV_CLID,
	[902] = Instr_DIV_CLDI,
	[901] = Instr_DIV_CLDD,
	[922] = Instr_DIV_CGII,
	[921] = Instr_DIV_CGID,
	[918] = Instr_DIV_CGDI,
	[917] = Instr_DIV_CGDD,
	[810] = Instr_DIV_LCII,
	[809] = Instr_DIV_LCID,
	[806] = Instr_DIV_LCDI,
	[805] = Instr_DIV_LCDD,
	[778] = Instr_DIV_LLII,
	[777] = Instr_DIV_LLID,
	[774] = Instr_DIV_LLDI,
	[773] = Instr_DIV_LLDD,
	[794] = Instr_DIV_LGII,
	[793] = Instr_DIV_LGID,
	[790] = Instr_DIV_LGDI,
	[789] = Instr_DIV_LGDD,
	[874] = Instr_DIV_GCII,
	[873] = Instr_DIV_GCID,
	[870] = Instr_DIV_GCDI,
	[869] = Instr_DIV_GCDD,
	[842] = Instr_DIV_GLII,
	[841] = Instr_DIV_GLID,
	[838] = Instr_DIV_GLDI,
	[837] = Instr_DIV_GLDD,
	[858] = Instr_DIV_GGII,
	[857] = Instr_DIV_GGID,
	[854] = Instr_DIV_GGDI,
	[853] = Instr_DIV_GGDD,
	[1167] = Instr_AND_CLBB,
	[1183] = Instr_AND_CGBB,
	[1071] = Instr_AND_LCBB,
	[1039] = Instr_AND_LLBB,
	[1055] = Instr_AND_LGBB,
	[1135] = Instr_AND_GCBB,
	[1103] = Instr_AND_GLBB,
	[1119] = Instr_AND_GGBB,
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
	[1322] = Instr_ADD_LCII,
	[1321] = Instr_ADD_LCID,
	[1318] = Instr_ADD_LCDI,
	[1317] = Instr_ADD_LCDD,
	[1312] = Instr_ADD_LCSS,
	[1290] = Instr_ADD_LLII,
	[1289] = Instr_ADD_LLID,
	[1286] = Instr_ADD_LLDI,
	[1285] = Instr_ADD_LLDD,
	[1280] = Instr_ADD_LLSS,
	[1306] = Instr_ADD_LGII,
	[1305] = Instr_ADD_LGID,
	[1302] = Instr_ADD_LGDI,
	[1301] = Instr_ADD_LGDD,
	[1296] = Instr_ADD_LGSS,
	[1386] = Instr_ADD_GCII,
	[1385] = Instr_ADD_GCID,
	[1382] = Instr_ADD_GCDI,
	[1381] = Instr_ADD_GCDD,
	[1376] = Instr_ADD_GCSS,
	[1354] = Instr_ADD_GLII,
	[1353] = Instr_ADD_GLID,
	[1350] = Instr_ADD_GLDI,
	[1349] = Instr_ADD_GLDD,
	[1344] = Instr_ADD_GLSS,
	[1370] = Instr_ADD_GGII,
	[1369] = Instr_ADD_GGID,
	[1366] = Instr_ADD_GGDI,
	[1365] = Instr_ADD_GGDD,
	[1360] = Instr_ADD_GGSS,
	[1674] = Instr_SUB_CLII,
	[1673] = Instr_SUB_CLID,
	[1670] = Instr_SUB_CLDI,
	[1669] = Instr_SUB_CLDD,
	[1690] = Instr_SUB_CGII,
	[1689] = Instr_SUB_CGID,
	[1686] = Instr_SUB_CGDI,
	[1685] = Instr_SUB_CGDD,
	[1578] = Instr_SUB_LCII,
	[1577] = Instr_SUB_LCID,
	[1574] = Instr_SUB_LCDI,
	[1573] = Instr_SUB_LCDD,
	[1546] = Instr_SUB_LLII,
	[1545] = Instr_SUB_LLID,
	[1542] = Instr_SUB_LLDI,
	[1541] = Instr_SUB_LLDD,
	[1562] = Instr_SUB_LGII,
	[1561] = Instr_SUB_LGID,
	[1558] = Instr_SUB_LGDI,
	[1557] = Instr_SUB_LGDD,
	[1642] = Instr_SUB_GCII,
	[1641] = Instr_SUB_GCID,
	[1638] = Instr_SUB_GCDI,
	[1637] = Instr_SUB_GCDD,
	[1610] = Instr_SUB_GLII,
	[1609] = Instr_SUB_GLID,
	[1606] = Instr_SUB_GLDI,
	[1605] = Instr_SUB_GLDD,
	[1626] = Instr_SUB_GGII,
	[1625] = Instr_SUB_GGID,
	[1622] = Instr_SUB_GGDI,
	[1621] = Instr_SUB_GGDD,
	[1935] = Instr_OR_CLBB,
	[1951] = Instr_OR_CGBB,
	[1839] = Instr_OR_LCBB,
	[1807] = Instr_OR_LLBB,
	[1823] = Instr_OR_LGBB,
	[1903] = Instr_OR_GCBB,
	[1871] = Instr_OR_GLBB,
	[1887] = Instr_OR_GGBB,
	[2191] = Instr_XOR_CLBB,
	[2207] = Instr_XOR_CGBB,
	[2095] = Instr_XOR_LCBB,
	[2063] = Instr_XOR_LLBB,
	[2079] = Instr_XOR_LGBB,
	[2159] = Instr_XOR_GCBB,
	[2127] = Instr_XOR_GLBB,
	[2143] = Instr_XOR_GGBB,
	[2442] = Instr_L_CLII,
	[2437] = Instr_L_CLDD,
	[2447] = Instr_L_CLBB,
	[2432] = Instr_L_CLSS,
	[2458] = Instr_L_CGII,
	[2453] = Instr_L_CGDD,
	[2463] = Instr_L_CGBB,
	[2448] = Instr_L_CGSS,
	[2346] = Instr_L_LCII,
	[2341] = Instr_L_LCDD,
	[2351] = Instr_L_LCBB,
	[2336] = Instr_L_LCSS,
	[2314] = Instr_L_LLII,
	[2309] = Instr_L_LLDD,
	[2319] = Instr_L_LLBB,
	[2304] = Instr_L_LLSS,
	[2330] = Instr_L_LGII,
	[2325] = Instr_L_LGDD,
	[2335] = Instr_L_LGBB,
	[2320] = Instr_L_LGSS,
	[2410] = Instr_L_GCII,
	[2405] = Instr_L_GCDD,
	[2415] = Instr_L_GCBB,
	[2400] = Instr_L_GCSS,
	[2378] = Instr_L_GLII,
	[2373] = Instr_L_GLDD,
	[2383] = Instr_L_GLBB,
	[2368] = Instr_L_GLSS,
	[2394] = Instr_L_GGII,
	[2389] = Instr_L_GGDD,
	[2399] = Instr_L_GGBB,
	[2384] = Instr_L_GGSS,
	[2698] = Instr_G_CLII,
	[2693] = Instr_G_CLDD,
	[2703] = Instr_G_CLBB,
	[2688] = Instr_G_CLSS,
	[2714] = Instr_G_CGII,
	[2709] = Instr_G_CGDD,
	[2719] = Instr_G_CGBB,
	[2704] = Instr_G_CGSS,
	[2602] = Instr_G_LCII,
	[2597] = Instr_G_LCDD,
	[2607] = Instr_G_LCBB,
	[2592] = Instr_G_LCSS,
	[2570] = Instr_G_LLII,
	[2565] = Instr_G_LLDD,
	[2575] = Instr_G_LLBB,
	[2560] = Instr_G_LLSS,
	[2586] = Instr_G_LGII,
	[2581] = Instr_G_LGDD,
	[2591] = Instr_G_LGBB,
	[2576] = Instr_G_LGSS,
	[2666] = Instr_G_GCII,
	[2661] = Instr_G_GCDD,
	[2671] = Instr_G_GCBB,
	[2656] = Instr_G_GCSS,
	[2634] = Instr_G_GLII,
	[2629] = Instr_G_GLDD,
	[2639] = Instr_G_GLBB,
	[2624] = Instr_G_GLSS,
	[2650] = Instr_G_GGII,
	[2645] = Instr_G_GGDD,
	[2655] = Instr_G_GGBB,
	[2640] = Instr_G_GGSS,
	[2954] = Instr_LE_CLII,
	[2949] = Instr_LE_CLDD,
	[2959] = Instr_LE_CLBB,
	[2944] = Instr_LE_CLSS,
	[2970] = Instr_LE_CGII,
	[2965] = Instr_LE_CGDD,
	[2975] = Instr_LE_CGBB,
	[2960] = Instr_LE_CGSS,
	[2858] = Instr_LE_LCII,
	[2853] = Instr_LE_LCDD,
	[2863] = Instr_LE_LCBB,
	[2848] = Instr_LE_LCSS,
	[2826] = Instr_LE_LLII,
	[2821] = Instr_LE_LLDD,
	[2831] = Instr_LE_LLBB,
	[2816] = Instr_LE_LLSS,
	[2842] = Instr_LE_LGII,
	[2837] = Instr_LE_LGDD,
	[2847] = Instr_LE_LGBB,
	[2832] = Instr_LE_LGSS,
	[2922] = Instr_LE_GCII,
	[2917] = Instr_LE_GCDD,
	[2927] = Instr_LE_GCBB,
	[2912] = Instr_LE_GCSS,
	[2890] = Instr_LE_GLII,
	[2885] = Instr_LE_GLDD,
	[2895] = Instr_LE_GLBB,
	[2880] = Instr_LE_GLSS,
	[2906] = Instr_LE_GGII,
	[2901] = Instr_LE_GGDD,
	[2911] = Instr_LE_GGBB,
	[2896] = Instr_LE_GGSS,
	[3210] = Instr_GE_CLII,
	[3205] = Instr_GE_CLDD,
	[3215] = Instr_GE_CLBB,
	[3200] = Instr_GE_CLSS,
	[3226] = Instr_GE_CGII,
	[3221] = Instr_GE_CGDD,
	[3231] = Instr_GE_CGBB,
	[3216] = Instr_GE_CGSS,
	[3114] = Instr_GE_LCII,
	[3109] = Instr_GE_LCDD,
	[3119] = Instr_GE_LCBB,
	[3104] = Instr_GE_LCSS,
	[3082] = Instr_GE_LLII,
	[3077] = Instr_GE_LLDD,
	[3087] = Instr_GE_LLBB,
	[3072] = Instr_GE_LLSS,
	[3098] = Instr_GE_LGII,
	[3093] = Instr_GE_LGDD,
	[3103] = Instr_GE_LGBB,
	[3088] = Instr_GE_LGSS,
	[3178] = Instr_GE_GCII,
	[3173] = Instr_GE_GCDD,
	[3183] = Instr_GE_GCBB,
	[3168] = Instr_GE_GCSS,
	[3146] = Instr_GE_GLII,
	[3141] = Instr_GE_GLDD,
	[3151] = Instr_GE_GLBB,
	[3136] = Instr_GE_GLSS,
	[3162] = Instr_GE_GGII,
	[3157] = Instr_GE_GGDD,
	[3167] = Instr_GE_GGBB,
	[3152] = Instr_GE_GGSS,
	[3466] = Instr_EQ_CLII,
	[3461] = Instr_EQ_CLDD,
	[3471] = Instr_EQ_CLBB,
	[3456] = Instr_EQ_CLSS,
	[3482] = Instr_EQ_CGII,
	[3477] = Instr_EQ_CGDD,
	[3487] = Instr_EQ_CGBB,
	[3472] = Instr_EQ_CGSS,
	[3370] = Instr_EQ_LCII,
	[3365] = Instr_EQ_LCDD,
	[3375] = Instr_EQ_LCBB,
	[3360] = Instr_EQ_LCSS,
	[3338] = Instr_EQ_LLII,
	[3333] = Instr_EQ_LLDD,
	[3343] = Instr_EQ_LLBB,
	[3328] = Instr_EQ_LLSS,
	[3354] = Instr_EQ_LGII,
	[3349] = Instr_EQ_LGDD,
	[3359] = Instr_EQ_LGBB,
	[3344] = Instr_EQ_LGSS,
	[3434] = Instr_EQ_GCII,
	[3429] = Instr_EQ_GCDD,
	[3439] = Instr_EQ_GCBB,
	[3424] = Instr_EQ_GCSS,
	[3402] = Instr_EQ_GLII,
	[3397] = Instr_EQ_GLDD,
	[3407] = Instr_EQ_GLBB,
	[3392] = Instr_EQ_GLSS,
	[3418] = Instr_EQ_GGII,
	[3413] = Instr_EQ_GGDD,
	[3423] = Instr_EQ_GGBB,
	[3408] = Instr_EQ_GGSS,
	[3722] = Instr_NE_CLII,
	[3717] = Instr_NE_CLDD,
	[3727] = Instr_NE_CLBB,
	[3712] = Instr_NE_CLSS,
	[3738] = Instr_NE_CGII,
	[3733] = Instr_NE_CGDD,
	[3743] = Instr_NE_CGBB,
	[3728] = Instr_NE_CGSS,
	[3626] = Instr_NE_LCII,
	[3621] = Instr_NE_LCDD,
	[3631] = Instr_NE_LCBB,
	[3616] = Instr_NE_LCSS,
	[3594] = Instr_NE_LLII,
	[3589] = Instr_NE_LLDD,
	[3599] = Instr_NE_LLBB,
	[3584] = Instr_NE_LLSS,
	[3610] = Instr_NE_LGII,
	[3605] = Instr_NE_LGDD,
	[3615] = Instr_NE_LGBB,
	[3600] = Instr_NE_LGSS,
	[3690] = Instr_NE_GCII,
	[3685] = Instr_NE_GCDD,
	[3695] = Instr_NE_GCBB,
	[3680] = Instr_NE_GCSS,
	[3658] = Instr_NE_GLII,
	[3653] = Instr_NE_GLDD,
	[3663] = Instr_NE_GLBB,
	[3648] = Instr_NE_GLSS,
	[3674] = Instr_NE_GGII,
	[3669] = Instr_NE_GGDD,
	[3679] = Instr_NE_GGBB,
	[3664] = Instr_NE_GGSS,
};
#include "instructions_regular.h"
char *stringifyInstructionPtr(InstrFuncPtr ptr) {
#ifndef NDEBUG
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxIx) return "Instr_NEG_LxIx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_LxDx) return "Instr_NEG_LxDx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxIx) return "Instr_NEG_GxIx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NEG_GxDx) return "Instr_NEG_GxDx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_LxBx) return "Instr_NOT_LxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_NOT_GxBx) return "Instr_NOT_GxBx";
		if(*ptr == Instr_MUL_CLII) return "Instr_MUL_CLII";
		if(*ptr == Instr_MUL_CLID) return "Instr_MUL_CLID";
		if(*ptr == Instr_MUL_CLDI) return "Instr_MUL_CLDI";
		if(*ptr == Instr_MUL_CLDD) return "Instr_MUL_CLDD";
		if(*ptr == Instr_MUL_CGII) return "Instr_MUL_CGII";
		if(*ptr == Instr_MUL_CGID) return "Instr_MUL_CGID";
		if(*ptr == Instr_MUL_CGDI) return "Instr_MUL_CGDI";
		if(*ptr == Instr_MUL_CGDD) return "Instr_MUL_CGDD";
		if(*ptr == Instr_MUL_LCII) return "Instr_MUL_LCII";
		if(*ptr == Instr_MUL_LCID) return "Instr_MUL_LCID";
		if(*ptr == Instr_MUL_LCDI) return "Instr_MUL_LCDI";
		if(*ptr == Instr_MUL_LCDD) return "Instr_MUL_LCDD";
		if(*ptr == Instr_MUL_LLII) return "Instr_MUL_LLII";
		if(*ptr == Instr_MUL_LLID) return "Instr_MUL_LLID";
		if(*ptr == Instr_MUL_LLDI) return "Instr_MUL_LLDI";
		if(*ptr == Instr_MUL_LLDD) return "Instr_MUL_LLDD";
		if(*ptr == Instr_MUL_LGII) return "Instr_MUL_LGII";
		if(*ptr == Instr_MUL_LGID) return "Instr_MUL_LGID";
		if(*ptr == Instr_MUL_LGDI) return "Instr_MUL_LGDI";
		if(*ptr == Instr_MUL_LGDD) return "Instr_MUL_LGDD";
		if(*ptr == Instr_MUL_GCII) return "Instr_MUL_GCII";
		if(*ptr == Instr_MUL_GCID) return "Instr_MUL_GCID";
		if(*ptr == Instr_MUL_GCDI) return "Instr_MUL_GCDI";
		if(*ptr == Instr_MUL_GCDD) return "Instr_MUL_GCDD";
		if(*ptr == Instr_MUL_GLII) return "Instr_MUL_GLII";
		if(*ptr == Instr_MUL_GLID) return "Instr_MUL_GLID";
		if(*ptr == Instr_MUL_GLDI) return "Instr_MUL_GLDI";
		if(*ptr == Instr_MUL_GLDD) return "Instr_MUL_GLDD";
		if(*ptr == Instr_MUL_GGII) return "Instr_MUL_GGII";
		if(*ptr == Instr_MUL_GGID) return "Instr_MUL_GGID";
		if(*ptr == Instr_MUL_GGDI) return "Instr_MUL_GGDI";
		if(*ptr == Instr_MUL_GGDD) return "Instr_MUL_GGDD";
		if(*ptr == Instr_DIV_CLII) return "Instr_DIV_CLII";
		if(*ptr == Instr_DIV_CLID) return "Instr_DIV_CLID";
		if(*ptr == Instr_DIV_CLDI) return "Instr_DIV_CLDI";
		if(*ptr == Instr_DIV_CLDD) return "Instr_DIV_CLDD";
		if(*ptr == Instr_DIV_CGII) return "Instr_DIV_CGII";
		if(*ptr == Instr_DIV_CGID) return "Instr_DIV_CGID";
		if(*ptr == Instr_DIV_CGDI) return "Instr_DIV_CGDI";
		if(*ptr == Instr_DIV_CGDD) return "Instr_DIV_CGDD";
		if(*ptr == Instr_DIV_LCII) return "Instr_DIV_LCII";
		if(*ptr == Instr_DIV_LCID) return "Instr_DIV_LCID";
		if(*ptr == Instr_DIV_LCDI) return "Instr_DIV_LCDI";
		if(*ptr == Instr_DIV_LCDD) return "Instr_DIV_LCDD";
		if(*ptr == Instr_DIV_LLII) return "Instr_DIV_LLII";
		if(*ptr == Instr_DIV_LLID) return "Instr_DIV_LLID";
		if(*ptr == Instr_DIV_LLDI) return "Instr_DIV_LLDI";
		if(*ptr == Instr_DIV_LLDD) return "Instr_DIV_LLDD";
		if(*ptr == Instr_DIV_LGII) return "Instr_DIV_LGII";
		if(*ptr == Instr_DIV_LGID) return "Instr_DIV_LGID";
		if(*ptr == Instr_DIV_LGDI) return "Instr_DIV_LGDI";
		if(*ptr == Instr_DIV_LGDD) return "Instr_DIV_LGDD";
		if(*ptr == Instr_DIV_GCII) return "Instr_DIV_GCII";
		if(*ptr == Instr_DIV_GCID) return "Instr_DIV_GCID";
		if(*ptr == Instr_DIV_GCDI) return "Instr_DIV_GCDI";
		if(*ptr == Instr_DIV_GCDD) return "Instr_DIV_GCDD";
		if(*ptr == Instr_DIV_GLII) return "Instr_DIV_GLII";
		if(*ptr == Instr_DIV_GLID) return "Instr_DIV_GLID";
		if(*ptr == Instr_DIV_GLDI) return "Instr_DIV_GLDI";
		if(*ptr == Instr_DIV_GLDD) return "Instr_DIV_GLDD";
		if(*ptr == Instr_DIV_GGII) return "Instr_DIV_GGII";
		if(*ptr == Instr_DIV_GGID) return "Instr_DIV_GGID";
		if(*ptr == Instr_DIV_GGDI) return "Instr_DIV_GGDI";
		if(*ptr == Instr_DIV_GGDD) return "Instr_DIV_GGDD";
		if(*ptr == Instr_AND_CLBB) return "Instr_AND_CLBB";
		if(*ptr == Instr_AND_CGBB) return "Instr_AND_CGBB";
		if(*ptr == Instr_AND_LCBB) return "Instr_AND_LCBB";
		if(*ptr == Instr_AND_LLBB) return "Instr_AND_LLBB";
		if(*ptr == Instr_AND_LGBB) return "Instr_AND_LGBB";
		if(*ptr == Instr_AND_GCBB) return "Instr_AND_GCBB";
		if(*ptr == Instr_AND_GLBB) return "Instr_AND_GLBB";
		if(*ptr == Instr_AND_GGBB) return "Instr_AND_GGBB";
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
		if(*ptr == Instr_ADD_LCII) return "Instr_ADD_LCII";
		if(*ptr == Instr_ADD_LCID) return "Instr_ADD_LCID";
		if(*ptr == Instr_ADD_LCDI) return "Instr_ADD_LCDI";
		if(*ptr == Instr_ADD_LCDD) return "Instr_ADD_LCDD";
		if(*ptr == Instr_ADD_LCSS) return "Instr_ADD_LCSS";
		if(*ptr == Instr_ADD_LLII) return "Instr_ADD_LLII";
		if(*ptr == Instr_ADD_LLID) return "Instr_ADD_LLID";
		if(*ptr == Instr_ADD_LLDI) return "Instr_ADD_LLDI";
		if(*ptr == Instr_ADD_LLDD) return "Instr_ADD_LLDD";
		if(*ptr == Instr_ADD_LLSS) return "Instr_ADD_LLSS";
		if(*ptr == Instr_ADD_LGII) return "Instr_ADD_LGII";
		if(*ptr == Instr_ADD_LGID) return "Instr_ADD_LGID";
		if(*ptr == Instr_ADD_LGDI) return "Instr_ADD_LGDI";
		if(*ptr == Instr_ADD_LGDD) return "Instr_ADD_LGDD";
		if(*ptr == Instr_ADD_LGSS) return "Instr_ADD_LGSS";
		if(*ptr == Instr_ADD_GCII) return "Instr_ADD_GCII";
		if(*ptr == Instr_ADD_GCID) return "Instr_ADD_GCID";
		if(*ptr == Instr_ADD_GCDI) return "Instr_ADD_GCDI";
		if(*ptr == Instr_ADD_GCDD) return "Instr_ADD_GCDD";
		if(*ptr == Instr_ADD_GCSS) return "Instr_ADD_GCSS";
		if(*ptr == Instr_ADD_GLII) return "Instr_ADD_GLII";
		if(*ptr == Instr_ADD_GLID) return "Instr_ADD_GLID";
		if(*ptr == Instr_ADD_GLDI) return "Instr_ADD_GLDI";
		if(*ptr == Instr_ADD_GLDD) return "Instr_ADD_GLDD";
		if(*ptr == Instr_ADD_GLSS) return "Instr_ADD_GLSS";
		if(*ptr == Instr_ADD_GGII) return "Instr_ADD_GGII";
		if(*ptr == Instr_ADD_GGID) return "Instr_ADD_GGID";
		if(*ptr == Instr_ADD_GGDI) return "Instr_ADD_GGDI";
		if(*ptr == Instr_ADD_GGDD) return "Instr_ADD_GGDD";
		if(*ptr == Instr_ADD_GGSS) return "Instr_ADD_GGSS";
		if(*ptr == Instr_SUB_CLII) return "Instr_SUB_CLII";
		if(*ptr == Instr_SUB_CLID) return "Instr_SUB_CLID";
		if(*ptr == Instr_SUB_CLDI) return "Instr_SUB_CLDI";
		if(*ptr == Instr_SUB_CLDD) return "Instr_SUB_CLDD";
		if(*ptr == Instr_SUB_CGII) return "Instr_SUB_CGII";
		if(*ptr == Instr_SUB_CGID) return "Instr_SUB_CGID";
		if(*ptr == Instr_SUB_CGDI) return "Instr_SUB_CGDI";
		if(*ptr == Instr_SUB_CGDD) return "Instr_SUB_CGDD";
		if(*ptr == Instr_SUB_LCII) return "Instr_SUB_LCII";
		if(*ptr == Instr_SUB_LCID) return "Instr_SUB_LCID";
		if(*ptr == Instr_SUB_LCDI) return "Instr_SUB_LCDI";
		if(*ptr == Instr_SUB_LCDD) return "Instr_SUB_LCDD";
		if(*ptr == Instr_SUB_LLII) return "Instr_SUB_LLII";
		if(*ptr == Instr_SUB_LLID) return "Instr_SUB_LLID";
		if(*ptr == Instr_SUB_LLDI) return "Instr_SUB_LLDI";
		if(*ptr == Instr_SUB_LLDD) return "Instr_SUB_LLDD";
		if(*ptr == Instr_SUB_LGII) return "Instr_SUB_LGII";
		if(*ptr == Instr_SUB_LGID) return "Instr_SUB_LGID";
		if(*ptr == Instr_SUB_LGDI) return "Instr_SUB_LGDI";
		if(*ptr == Instr_SUB_LGDD) return "Instr_SUB_LGDD";
		if(*ptr == Instr_SUB_GCII) return "Instr_SUB_GCII";
		if(*ptr == Instr_SUB_GCID) return "Instr_SUB_GCID";
		if(*ptr == Instr_SUB_GCDI) return "Instr_SUB_GCDI";
		if(*ptr == Instr_SUB_GCDD) return "Instr_SUB_GCDD";
		if(*ptr == Instr_SUB_GLII) return "Instr_SUB_GLII";
		if(*ptr == Instr_SUB_GLID) return "Instr_SUB_GLID";
		if(*ptr == Instr_SUB_GLDI) return "Instr_SUB_GLDI";
		if(*ptr == Instr_SUB_GLDD) return "Instr_SUB_GLDD";
		if(*ptr == Instr_SUB_GGII) return "Instr_SUB_GGII";
		if(*ptr == Instr_SUB_GGID) return "Instr_SUB_GGID";
		if(*ptr == Instr_SUB_GGDI) return "Instr_SUB_GGDI";
		if(*ptr == Instr_SUB_GGDD) return "Instr_SUB_GGDD";
		if(*ptr == Instr_OR_CLBB) return "Instr_OR_CLBB";
		if(*ptr == Instr_OR_CGBB) return "Instr_OR_CGBB";
		if(*ptr == Instr_OR_LCBB) return "Instr_OR_LCBB";
		if(*ptr == Instr_OR_LLBB) return "Instr_OR_LLBB";
		if(*ptr == Instr_OR_LGBB) return "Instr_OR_LGBB";
		if(*ptr == Instr_OR_GCBB) return "Instr_OR_GCBB";
		if(*ptr == Instr_OR_GLBB) return "Instr_OR_GLBB";
		if(*ptr == Instr_OR_GGBB) return "Instr_OR_GGBB";
		if(*ptr == Instr_XOR_CLBB) return "Instr_XOR_CLBB";
		if(*ptr == Instr_XOR_CGBB) return "Instr_XOR_CGBB";
		if(*ptr == Instr_XOR_LCBB) return "Instr_XOR_LCBB";
		if(*ptr == Instr_XOR_LLBB) return "Instr_XOR_LLBB";
		if(*ptr == Instr_XOR_LGBB) return "Instr_XOR_LGBB";
		if(*ptr == Instr_XOR_GCBB) return "Instr_XOR_GCBB";
		if(*ptr == Instr_XOR_GLBB) return "Instr_XOR_GLBB";
		if(*ptr == Instr_XOR_GGBB) return "Instr_XOR_GGBB";
		if(*ptr == Instr_L_CLII) return "Instr_L_CLII";
		if(*ptr == Instr_L_CLDD) return "Instr_L_CLDD";
		if(*ptr == Instr_L_CLBB) return "Instr_L_CLBB";
		if(*ptr == Instr_L_CLSS) return "Instr_L_CLSS";
		if(*ptr == Instr_L_CGII) return "Instr_L_CGII";
		if(*ptr == Instr_L_CGDD) return "Instr_L_CGDD";
		if(*ptr == Instr_L_CGBB) return "Instr_L_CGBB";
		if(*ptr == Instr_L_CGSS) return "Instr_L_CGSS";
		if(*ptr == Instr_L_LCII) return "Instr_L_LCII";
		if(*ptr == Instr_L_LCDD) return "Instr_L_LCDD";
		if(*ptr == Instr_L_LCBB) return "Instr_L_LCBB";
		if(*ptr == Instr_L_LCSS) return "Instr_L_LCSS";
		if(*ptr == Instr_L_LLII) return "Instr_L_LLII";
		if(*ptr == Instr_L_LLDD) return "Instr_L_LLDD";
		if(*ptr == Instr_L_LLBB) return "Instr_L_LLBB";
		if(*ptr == Instr_L_LLSS) return "Instr_L_LLSS";
		if(*ptr == Instr_L_LGII) return "Instr_L_LGII";
		if(*ptr == Instr_L_LGDD) return "Instr_L_LGDD";
		if(*ptr == Instr_L_LGBB) return "Instr_L_LGBB";
		if(*ptr == Instr_L_LGSS) return "Instr_L_LGSS";
		if(*ptr == Instr_L_GCII) return "Instr_L_GCII";
		if(*ptr == Instr_L_GCDD) return "Instr_L_GCDD";
		if(*ptr == Instr_L_GCBB) return "Instr_L_GCBB";
		if(*ptr == Instr_L_GCSS) return "Instr_L_GCSS";
		if(*ptr == Instr_L_GLII) return "Instr_L_GLII";
		if(*ptr == Instr_L_GLDD) return "Instr_L_GLDD";
		if(*ptr == Instr_L_GLBB) return "Instr_L_GLBB";
		if(*ptr == Instr_L_GLSS) return "Instr_L_GLSS";
		if(*ptr == Instr_L_GGII) return "Instr_L_GGII";
		if(*ptr == Instr_L_GGDD) return "Instr_L_GGDD";
		if(*ptr == Instr_L_GGBB) return "Instr_L_GGBB";
		if(*ptr == Instr_L_GGSS) return "Instr_L_GGSS";
		if(*ptr == Instr_G_CLII) return "Instr_G_CLII";
		if(*ptr == Instr_G_CLDD) return "Instr_G_CLDD";
		if(*ptr == Instr_G_CLBB) return "Instr_G_CLBB";
		if(*ptr == Instr_G_CLSS) return "Instr_G_CLSS";
		if(*ptr == Instr_G_CGII) return "Instr_G_CGII";
		if(*ptr == Instr_G_CGDD) return "Instr_G_CGDD";
		if(*ptr == Instr_G_CGBB) return "Instr_G_CGBB";
		if(*ptr == Instr_G_CGSS) return "Instr_G_CGSS";
		if(*ptr == Instr_G_LCII) return "Instr_G_LCII";
		if(*ptr == Instr_G_LCDD) return "Instr_G_LCDD";
		if(*ptr == Instr_G_LCBB) return "Instr_G_LCBB";
		if(*ptr == Instr_G_LCSS) return "Instr_G_LCSS";
		if(*ptr == Instr_G_LLII) return "Instr_G_LLII";
		if(*ptr == Instr_G_LLDD) return "Instr_G_LLDD";
		if(*ptr == Instr_G_LLBB) return "Instr_G_LLBB";
		if(*ptr == Instr_G_LLSS) return "Instr_G_LLSS";
		if(*ptr == Instr_G_LGII) return "Instr_G_LGII";
		if(*ptr == Instr_G_LGDD) return "Instr_G_LGDD";
		if(*ptr == Instr_G_LGBB) return "Instr_G_LGBB";
		if(*ptr == Instr_G_LGSS) return "Instr_G_LGSS";
		if(*ptr == Instr_G_GCII) return "Instr_G_GCII";
		if(*ptr == Instr_G_GCDD) return "Instr_G_GCDD";
		if(*ptr == Instr_G_GCBB) return "Instr_G_GCBB";
		if(*ptr == Instr_G_GCSS) return "Instr_G_GCSS";
		if(*ptr == Instr_G_GLII) return "Instr_G_GLII";
		if(*ptr == Instr_G_GLDD) return "Instr_G_GLDD";
		if(*ptr == Instr_G_GLBB) return "Instr_G_GLBB";
		if(*ptr == Instr_G_GLSS) return "Instr_G_GLSS";
		if(*ptr == Instr_G_GGII) return "Instr_G_GGII";
		if(*ptr == Instr_G_GGDD) return "Instr_G_GGDD";
		if(*ptr == Instr_G_GGBB) return "Instr_G_GGBB";
		if(*ptr == Instr_G_GGSS) return "Instr_G_GGSS";
		if(*ptr == Instr_LE_CLII) return "Instr_LE_CLII";
		if(*ptr == Instr_LE_CLDD) return "Instr_LE_CLDD";
		if(*ptr == Instr_LE_CLBB) return "Instr_LE_CLBB";
		if(*ptr == Instr_LE_CLSS) return "Instr_LE_CLSS";
		if(*ptr == Instr_LE_CGII) return "Instr_LE_CGII";
		if(*ptr == Instr_LE_CGDD) return "Instr_LE_CGDD";
		if(*ptr == Instr_LE_CGBB) return "Instr_LE_CGBB";
		if(*ptr == Instr_LE_CGSS) return "Instr_LE_CGSS";
		if(*ptr == Instr_LE_LCII) return "Instr_LE_LCII";
		if(*ptr == Instr_LE_LCDD) return "Instr_LE_LCDD";
		if(*ptr == Instr_LE_LCBB) return "Instr_LE_LCBB";
		if(*ptr == Instr_LE_LCSS) return "Instr_LE_LCSS";
		if(*ptr == Instr_LE_LLII) return "Instr_LE_LLII";
		if(*ptr == Instr_LE_LLDD) return "Instr_LE_LLDD";
		if(*ptr == Instr_LE_LLBB) return "Instr_LE_LLBB";
		if(*ptr == Instr_LE_LLSS) return "Instr_LE_LLSS";
		if(*ptr == Instr_LE_LGII) return "Instr_LE_LGII";
		if(*ptr == Instr_LE_LGDD) return "Instr_LE_LGDD";
		if(*ptr == Instr_LE_LGBB) return "Instr_LE_LGBB";
		if(*ptr == Instr_LE_LGSS) return "Instr_LE_LGSS";
		if(*ptr == Instr_LE_GCII) return "Instr_LE_GCII";
		if(*ptr == Instr_LE_GCDD) return "Instr_LE_GCDD";
		if(*ptr == Instr_LE_GCBB) return "Instr_LE_GCBB";
		if(*ptr == Instr_LE_GCSS) return "Instr_LE_GCSS";
		if(*ptr == Instr_LE_GLII) return "Instr_LE_GLII";
		if(*ptr == Instr_LE_GLDD) return "Instr_LE_GLDD";
		if(*ptr == Instr_LE_GLBB) return "Instr_LE_GLBB";
		if(*ptr == Instr_LE_GLSS) return "Instr_LE_GLSS";
		if(*ptr == Instr_LE_GGII) return "Instr_LE_GGII";
		if(*ptr == Instr_LE_GGDD) return "Instr_LE_GGDD";
		if(*ptr == Instr_LE_GGBB) return "Instr_LE_GGBB";
		if(*ptr == Instr_LE_GGSS) return "Instr_LE_GGSS";
		if(*ptr == Instr_GE_CLII) return "Instr_GE_CLII";
		if(*ptr == Instr_GE_CLDD) return "Instr_GE_CLDD";
		if(*ptr == Instr_GE_CLBB) return "Instr_GE_CLBB";
		if(*ptr == Instr_GE_CLSS) return "Instr_GE_CLSS";
		if(*ptr == Instr_GE_CGII) return "Instr_GE_CGII";
		if(*ptr == Instr_GE_CGDD) return "Instr_GE_CGDD";
		if(*ptr == Instr_GE_CGBB) return "Instr_GE_CGBB";
		if(*ptr == Instr_GE_CGSS) return "Instr_GE_CGSS";
		if(*ptr == Instr_GE_LCII) return "Instr_GE_LCII";
		if(*ptr == Instr_GE_LCDD) return "Instr_GE_LCDD";
		if(*ptr == Instr_GE_LCBB) return "Instr_GE_LCBB";
		if(*ptr == Instr_GE_LCSS) return "Instr_GE_LCSS";
		if(*ptr == Instr_GE_LLII) return "Instr_GE_LLII";
		if(*ptr == Instr_GE_LLDD) return "Instr_GE_LLDD";
		if(*ptr == Instr_GE_LLBB) return "Instr_GE_LLBB";
		if(*ptr == Instr_GE_LLSS) return "Instr_GE_LLSS";
		if(*ptr == Instr_GE_LGII) return "Instr_GE_LGII";
		if(*ptr == Instr_GE_LGDD) return "Instr_GE_LGDD";
		if(*ptr == Instr_GE_LGBB) return "Instr_GE_LGBB";
		if(*ptr == Instr_GE_LGSS) return "Instr_GE_LGSS";
		if(*ptr == Instr_GE_GCII) return "Instr_GE_GCII";
		if(*ptr == Instr_GE_GCDD) return "Instr_GE_GCDD";
		if(*ptr == Instr_GE_GCBB) return "Instr_GE_GCBB";
		if(*ptr == Instr_GE_GCSS) return "Instr_GE_GCSS";
		if(*ptr == Instr_GE_GLII) return "Instr_GE_GLII";
		if(*ptr == Instr_GE_GLDD) return "Instr_GE_GLDD";
		if(*ptr == Instr_GE_GLBB) return "Instr_GE_GLBB";
		if(*ptr == Instr_GE_GLSS) return "Instr_GE_GLSS";
		if(*ptr == Instr_GE_GGII) return "Instr_GE_GGII";
		if(*ptr == Instr_GE_GGDD) return "Instr_GE_GGDD";
		if(*ptr == Instr_GE_GGBB) return "Instr_GE_GGBB";
		if(*ptr == Instr_GE_GGSS) return "Instr_GE_GGSS";
		if(*ptr == Instr_EQ_CLII) return "Instr_EQ_CLII";
		if(*ptr == Instr_EQ_CLDD) return "Instr_EQ_CLDD";
		if(*ptr == Instr_EQ_CLBB) return "Instr_EQ_CLBB";
		if(*ptr == Instr_EQ_CLSS) return "Instr_EQ_CLSS";
		if(*ptr == Instr_EQ_CGII) return "Instr_EQ_CGII";
		if(*ptr == Instr_EQ_CGDD) return "Instr_EQ_CGDD";
		if(*ptr == Instr_EQ_CGBB) return "Instr_EQ_CGBB";
		if(*ptr == Instr_EQ_CGSS) return "Instr_EQ_CGSS";
		if(*ptr == Instr_EQ_LCII) return "Instr_EQ_LCII";
		if(*ptr == Instr_EQ_LCDD) return "Instr_EQ_LCDD";
		if(*ptr == Instr_EQ_LCBB) return "Instr_EQ_LCBB";
		if(*ptr == Instr_EQ_LCSS) return "Instr_EQ_LCSS";
		if(*ptr == Instr_EQ_LLII) return "Instr_EQ_LLII";
		if(*ptr == Instr_EQ_LLDD) return "Instr_EQ_LLDD";
		if(*ptr == Instr_EQ_LLBB) return "Instr_EQ_LLBB";
		if(*ptr == Instr_EQ_LLSS) return "Instr_EQ_LLSS";
		if(*ptr == Instr_EQ_LGII) return "Instr_EQ_LGII";
		if(*ptr == Instr_EQ_LGDD) return "Instr_EQ_LGDD";
		if(*ptr == Instr_EQ_LGBB) return "Instr_EQ_LGBB";
		if(*ptr == Instr_EQ_LGSS) return "Instr_EQ_LGSS";
		if(*ptr == Instr_EQ_GCII) return "Instr_EQ_GCII";
		if(*ptr == Instr_EQ_GCDD) return "Instr_EQ_GCDD";
		if(*ptr == Instr_EQ_GCBB) return "Instr_EQ_GCBB";
		if(*ptr == Instr_EQ_GCSS) return "Instr_EQ_GCSS";
		if(*ptr == Instr_EQ_GLII) return "Instr_EQ_GLII";
		if(*ptr == Instr_EQ_GLDD) return "Instr_EQ_GLDD";
		if(*ptr == Instr_EQ_GLBB) return "Instr_EQ_GLBB";
		if(*ptr == Instr_EQ_GLSS) return "Instr_EQ_GLSS";
		if(*ptr == Instr_EQ_GGII) return "Instr_EQ_GGII";
		if(*ptr == Instr_EQ_GGDD) return "Instr_EQ_GGDD";
		if(*ptr == Instr_EQ_GGBB) return "Instr_EQ_GGBB";
		if(*ptr == Instr_EQ_GGSS) return "Instr_EQ_GGSS";
		if(*ptr == Instr_NE_CLII) return "Instr_NE_CLII";
		if(*ptr == Instr_NE_CLDD) return "Instr_NE_CLDD";
		if(*ptr == Instr_NE_CLBB) return "Instr_NE_CLBB";
		if(*ptr == Instr_NE_CLSS) return "Instr_NE_CLSS";
		if(*ptr == Instr_NE_CGII) return "Instr_NE_CGII";
		if(*ptr == Instr_NE_CGDD) return "Instr_NE_CGDD";
		if(*ptr == Instr_NE_CGBB) return "Instr_NE_CGBB";
		if(*ptr == Instr_NE_CGSS) return "Instr_NE_CGSS";
		if(*ptr == Instr_NE_LCII) return "Instr_NE_LCII";
		if(*ptr == Instr_NE_LCDD) return "Instr_NE_LCDD";
		if(*ptr == Instr_NE_LCBB) return "Instr_NE_LCBB";
		if(*ptr == Instr_NE_LCSS) return "Instr_NE_LCSS";
		if(*ptr == Instr_NE_LLII) return "Instr_NE_LLII";
		if(*ptr == Instr_NE_LLDD) return "Instr_NE_LLDD";
		if(*ptr == Instr_NE_LLBB) return "Instr_NE_LLBB";
		if(*ptr == Instr_NE_LLSS) return "Instr_NE_LLSS";
		if(*ptr == Instr_NE_LGII) return "Instr_NE_LGII";
		if(*ptr == Instr_NE_LGDD) return "Instr_NE_LGDD";
		if(*ptr == Instr_NE_LGBB) return "Instr_NE_LGBB";
		if(*ptr == Instr_NE_LGSS) return "Instr_NE_LGSS";
		if(*ptr == Instr_NE_GCII) return "Instr_NE_GCII";
		if(*ptr == Instr_NE_GCDD) return "Instr_NE_GCDD";
		if(*ptr == Instr_NE_GCBB) return "Instr_NE_GCBB";
		if(*ptr == Instr_NE_GCSS) return "Instr_NE_GCSS";
		if(*ptr == Instr_NE_GLII) return "Instr_NE_GLII";
		if(*ptr == Instr_NE_GLDD) return "Instr_NE_GLDD";
		if(*ptr == Instr_NE_GLBB) return "Instr_NE_GLBB";
		if(*ptr == Instr_NE_GLSS) return "Instr_NE_GLSS";
		if(*ptr == Instr_NE_GGII) return "Instr_NE_GGII";
		if(*ptr == Instr_NE_GGDD) return "Instr_NE_GGDD";
		if(*ptr == Instr_NE_GGBB) return "Instr_NE_GGBB";
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
	if(*ptr == Instr_PUSHX_LS) return "Instr_PUSHX_LS";
	if(*ptr == Instr_PUSHX_LD) return "Instr_PUSHX_LD";
	if(*ptr == Instr_PUSHX_LI) return "Instr_PUSHX_LI";
	if(*ptr == Instr_PUSHX_LB) return "Instr_PUSHX_LB";
	if(*ptr == Instr_PUSHX_GS) return "Instr_PUSHX_GS";
	if(*ptr == Instr_PUSHX_GD) return "Instr_PUSHX_GD";
	if(*ptr == Instr_PUSHX_GI) return "Instr_PUSHX_GI";
	if(*ptr == Instr_PUSHX_GB) return "Instr_PUSHX_GB";
	if(*ptr == Instr_RET) return "Instr_RET";
	if(*ptr == Instr_CALL) return "Instr_CALL";
	if(*ptr == Instr_CALL_LENGTH) return "Instr_CALL_LENGTH";
	if(*ptr == Instr_CALL_COPY) return "Instr_CALL_COPY";
	if(*ptr == Instr_CALL_FIND) return "Instr_CALL_FIND";
	if(*ptr == Instr_CALL_SORT) return "Instr_CALL_SORT";
	if(*ptr == Instr_JMP_T) return "Instr_JMP_T";
	if(*ptr == Instr_JMP_F) return "Instr_JMP_F";
	if(*ptr == Instr_JMP) return "Instr_JMP";
	if(*ptr == Instr_HALT) return "Instr_HALT";
#endif
	(void) ptr; // Dummy conversion
	return "NaN";
}
