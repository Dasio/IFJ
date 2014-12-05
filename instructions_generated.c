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

#define extract_data() \
	/* Pointers to local data */ \
	StackData *local_src1 = vectorAt(stack.vect, stack.BP + i->src_1.offset); \
	StackData *local_src2 = vectorAt(stack.vect, stack.BP + i->src_2.offset); \
	StackData *local_dst  = vectorAt(stack.vect, stack.BP + i->dst.offset);   \
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

void Instr_NEG_LxIx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LxIx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_NEG_LxDx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LxDx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_NEG_GxIx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxIx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_NEG_GxDx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxDx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_NEG_xxIx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//xxIx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_NEG_xxDx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//xxDx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_NOT_LxBx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LxBx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_NOT_GxBx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GxBx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_NOT_xxBx(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//xxBx
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

	assert(false && "Instruction not implemented!");
}

void Instr_MUL_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->int_ = *constant_src_1_I * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	local_dst->double_ = *constant_src_1_I * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	local_dst->double_ = *constant_src_1_D * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->double_ = *constant_src_1_D * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->int_ = *constant_src_1_I * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	local_dst->double_ = *constant_src_1_I * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	local_dst->double_ = *constant_src_1_D * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->double_ = *constant_src_1_D * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->int_ = local_src1->int_ * *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	local_dst->double_ = local_src1->int_ * *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	local_dst->double_ = local_src1->double_ * *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->double_ = local_src1->double_ * *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->int_ = local_src1->int_ * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	local_dst->double_ = local_src1->int_ * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	local_dst->double_ = local_src1->double_ * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->double_ = local_src1->double_ * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->int_ = local_src1->int_ * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	local_dst->double_ = local_src1->int_ * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	local_dst->double_ = local_src1->double_ * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->double_ = local_src1->double_ * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->int_ = global_src1->int_ * *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	local_dst->double_ = global_src1->int_ * *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	local_dst->double_ = global_src1->double_ * *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->double_ = global_src1->double_ * *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->int_ = global_src1->int_ * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	local_dst->double_ = global_src1->int_ * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	local_dst->double_ = global_src1->double_ * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->double_ = global_src1->double_ * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->int_ = global_src1->int_ * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	local_dst->double_ = global_src1->int_ * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	local_dst->double_ = global_src1->double_ * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_MUL_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->double_ = global_src1->double_ * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = (double)*constant_src_1_I / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = *constant_src_1_I / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = *constant_src_1_D / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = *constant_src_1_D / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = (double)*constant_src_1_I / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = *constant_src_1_I / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = *constant_src_1_D / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = *constant_src_1_D / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(*constant_src_2_I == 0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = (double)local_src1->int_ / *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->int_ / *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(*constant_src_2_I == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->double_ / *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->double_ / *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = (double)local_src1->int_ / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->int_ / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->double_ / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->double_ / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = (double)local_src1->int_ / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->int_ / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->double_ / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = local_src1->double_ / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(*constant_src_2_I == 0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = (double)global_src1->int_ / *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->int_ / *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(*constant_src_2_I == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->double_ / *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->double_ / *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = (double)global_src1->int_ / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->int_ / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->double_ / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->double_ / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = (double)global_src1->int_ / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->int_ / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->double_ / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_DIV_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		return;
	}

	local_dst->double_ = global_src1->double_ / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_AND_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B && local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_AND_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B && global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_AND_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ && *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_AND_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ && local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_AND_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ && global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_AND_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ && *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_AND_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ && local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_AND_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ && global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->int_ = *constant_src_1_I + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	local_dst->double_ = *constant_src_1_I + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	local_dst->double_ = *constant_src_1_D + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->double_ = *constant_src_1_D + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	local_dst->str = concatStringToString(constant_src_1_S, local_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->int_ = *constant_src_1_I + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	local_dst->double_ = *constant_src_1_I + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	local_dst->double_ = *constant_src_1_D + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->double_ = *constant_src_1_D + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	local_dst->str = concatStringToString(constant_src_1_S, global_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->int_ = local_src1->int_ + *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	local_dst->double_ = local_src1->int_ + *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	local_dst->double_ = local_src1->double_ + *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->double_ = local_src1->double_ + *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	local_dst->str = concatStringToString(local_src1->str, constant_src_2_S);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->int_ = local_src1->int_ + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	local_dst->double_ = local_src1->int_ + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	local_dst->double_ = local_src1->double_ + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->double_ = local_src1->double_ + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	local_dst->str = concatStringToString(local_src1->str, local_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->int_ = local_src1->int_ + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	local_dst->double_ = local_src1->int_ + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	local_dst->double_ = local_src1->double_ + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->double_ = local_src1->double_ + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	local_dst->str = concatStringToString(local_src1->str, global_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->int_ = global_src1->int_ + *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	local_dst->double_ = global_src1->int_ + *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	local_dst->double_ = global_src1->double_ + *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->double_ = global_src1->double_ + *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	local_dst->str = concatStringToString(global_src1->str, constant_src_2_S);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->int_ = global_src1->int_ + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	local_dst->double_ = global_src1->int_ + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	local_dst->double_ = global_src1->double_ + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->double_ = global_src1->double_ + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	local_dst->str = concatStringToString(global_src1->str, local_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->int_ = global_src1->int_ + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	local_dst->double_ = global_src1->int_ + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	local_dst->double_ = global_src1->double_ + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->double_ = global_src1->double_ + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_ADD_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	local_dst->str = concatStringToString(global_src1->str, global_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->int_ = *constant_src_1_I - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	local_dst->double_ = *constant_src_1_I - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	local_dst->double_ = *constant_src_1_D - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->double_ = *constant_src_1_D - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->int_ = *constant_src_1_I - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	local_dst->double_ = *constant_src_1_I - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	local_dst->double_ = *constant_src_1_D - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->double_ = *constant_src_1_D - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->int_ = local_src1->int_ - *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	local_dst->double_ = local_src1->int_ - *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	local_dst->double_ = local_src1->double_ - *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->double_ = local_src1->double_ - *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->int_ = local_src1->int_ - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	local_dst->double_ = local_src1->int_ - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	local_dst->double_ = local_src1->double_ - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->double_ = local_src1->double_ - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->int_ = local_src1->int_ - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	local_dst->double_ = local_src1->int_ - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	local_dst->double_ = local_src1->double_ - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->double_ = local_src1->double_ - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->int_ = global_src1->int_ - *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	local_dst->double_ = global_src1->int_ - *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	local_dst->double_ = global_src1->double_ - *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->double_ = global_src1->double_ - *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->int_ = global_src1->int_ - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	local_dst->double_ = global_src1->int_ - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	local_dst->double_ = global_src1->double_ - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->double_ = global_src1->double_ - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->int_ = global_src1->int_ - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	local_dst->double_ = global_src1->int_ - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	local_dst->double_ = global_src1->double_ - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_SUB_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->double_ = global_src1->double_ - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_OR_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B || local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_OR_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B || global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_OR_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ || *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_OR_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ || local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_OR_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ || global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_OR_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ || *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_OR_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ || local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_OR_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ || global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_XOR_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B ^ local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_XOR_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B ^ global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_XOR_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ ^ *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_XOR_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ ^ local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_XOR_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ ^ global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_XOR_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ ^ *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_XOR_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ ^ local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_XOR_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ ^ global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->bool_ = *constant_src_1_I < local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->bool_ = *constant_src_1_D < local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B < local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS

	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->bool_ = *constant_src_1_I < global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->bool_ = *constant_src_1_D < global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B < global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS

	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->bool_ = local_src1->int_ < *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->bool_ = local_src1->double_ < *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ < *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS

	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->bool_ = local_src1->int_ < local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->bool_ = local_src1->double_ < local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ < local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS

	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->bool_ = local_src1->int_ < global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->bool_ = local_src1->double_ < global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ < global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS

	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->bool_ = global_src1->int_ < *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->bool_ = global_src1->double_ < *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ < *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS

	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->bool_ = global_src1->int_ < local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->bool_ = global_src1->double_ < local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ < local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS

	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->bool_ = global_src1->int_ < global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->bool_ = global_src1->double_ < global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ < global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_L_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS

	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->bool_ = *constant_src_1_I > local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->bool_ = *constant_src_1_D > local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B > local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS

	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->bool_ = *constant_src_1_I > global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->bool_ = *constant_src_1_D > global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B > global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS

	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->bool_ = local_src1->int_ > *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->bool_ = local_src1->double_ > *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ > *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS

	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->bool_ = local_src1->int_ > local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->bool_ = local_src1->double_ > local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ > local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS

	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->bool_ = local_src1->int_ > global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->bool_ = local_src1->double_ > global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ > global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS

	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->bool_ = global_src1->int_ > *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->bool_ = global_src1->double_ > *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ > *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS

	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->bool_ = global_src1->int_ > local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->bool_ = global_src1->double_ > local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ > local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS

	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->bool_ = global_src1->int_ > global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->bool_ = global_src1->double_ > global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ > global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_G_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS

	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->bool_ = *constant_src_1_I <= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->bool_ = *constant_src_1_D <= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B <= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS

	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->bool_ = *constant_src_1_I <= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->bool_ = *constant_src_1_D <= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B <= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS

	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->bool_ = local_src1->int_ <= *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->bool_ = local_src1->double_ <= *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ <= *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS

	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->bool_ = local_src1->int_ <= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->bool_ = local_src1->double_ <= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ <= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS

	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->bool_ = local_src1->int_ <= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->bool_ = local_src1->double_ <= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ <= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS

	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->bool_ = global_src1->int_ <= *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->bool_ = global_src1->double_ <= *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ <= *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS

	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->bool_ = global_src1->int_ <= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->bool_ = global_src1->double_ <= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ <= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS

	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->bool_ = global_src1->int_ <= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->bool_ = global_src1->double_ <= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ <= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_LE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS

	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->bool_ = *constant_src_1_I >= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->bool_ = *constant_src_1_D >= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B >= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS

	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->bool_ = *constant_src_1_I >= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->bool_ = *constant_src_1_D >= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B >= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS

	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->bool_ = local_src1->int_ >= *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->bool_ = local_src1->double_ >= *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ >= *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS

	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->bool_ = local_src1->int_ >= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->bool_ = local_src1->double_ >= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ >= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS

	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->bool_ = local_src1->int_ >= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->bool_ = local_src1->double_ >= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ >= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS

	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->bool_ = global_src1->int_ >= *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->bool_ = global_src1->double_ >= *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ >= *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS

	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->bool_ = global_src1->int_ >= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->bool_ = global_src1->double_ >= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ >= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS

	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->bool_ = global_src1->int_ >= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->bool_ = global_src1->double_ >= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ >= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_GE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS

	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->bool_ = *constant_src_1_I == local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->bool_ = *constant_src_1_D == local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B == local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS

	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->bool_ = *constant_src_1_I == global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->bool_ = *constant_src_1_D == global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B == global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS

	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->bool_ = local_src1->int_ == *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->bool_ = local_src1->double_ == *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ == *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS

	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->bool_ = local_src1->int_ == local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->bool_ = local_src1->double_ == local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ == local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS

	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->bool_ = local_src1->int_ == global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->bool_ = local_src1->double_ == global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ == global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS

	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->bool_ = global_src1->int_ == *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->bool_ = global_src1->double_ == *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ == *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS

	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->bool_ = global_src1->int_ == local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->bool_ = global_src1->double_ == local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ == local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS

	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->bool_ = global_src1->int_ == global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->bool_ = global_src1->double_ == global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ == global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_EQ_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS

	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	local_dst->bool_ = *constant_src_1_I != local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	local_dst->bool_ = *constant_src_1_D != local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	local_dst->bool_ = *constant_src_1_B != local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS

	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	local_dst->bool_ = *constant_src_1_I != global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	local_dst->bool_ = *constant_src_1_D != global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	local_dst->bool_ = *constant_src_1_B != global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS

	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	local_dst->bool_ = local_src1->int_ != *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	local_dst->bool_ = local_src1->double_ != *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	local_dst->bool_ = local_src1->bool_ != *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS

	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	local_dst->bool_ = local_src1->int_ != local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	local_dst->bool_ = local_src1->double_ != local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	local_dst->bool_ = local_src1->bool_ != local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS

	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	local_dst->bool_ = local_src1->int_ != global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	local_dst->bool_ = local_src1->double_ != global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	local_dst->bool_ = local_src1->bool_ != global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS

	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	local_dst->bool_ = global_src1->int_ != *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	local_dst->bool_ = global_src1->double_ != *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	local_dst->bool_ = global_src1->bool_ != *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS

	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	local_dst->bool_ = global_src1->int_ != local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	local_dst->bool_ = global_src1->double_ != local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	local_dst->bool_ = global_src1->bool_ != local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS

	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	local_dst->bool_ = global_src1->int_ != global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	local_dst->bool_ = global_src1->double_ != global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	local_dst->bool_ = global_src1->bool_ != global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}

void Instr_NE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS

	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;

}


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
#pragma GCC diagnostic pop
#endif
