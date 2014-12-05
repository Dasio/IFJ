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

void Instr_NEG_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LCIB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCIB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LCIS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCIS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LCDB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LCDS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LLIB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLIB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LLIS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLIS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LLDB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LLDS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LGIB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGIB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LGIS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGIS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* local_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LGDB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_LGDS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* local_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GCIB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCIB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GCIS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCIS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GCDB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GCDS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GLIB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLIB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GLIS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLIS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GLDB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GLDS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GGIB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGIB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GGIS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGIS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = (-1)* global_src1->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GGDB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NEG_GGDS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = (-1)* global_src1->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LCBI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LCBD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LCBS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LLBI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LLBD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LLBS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LGBI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LGBD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_LGBS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !local_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GCBI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GCBD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GCBS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GLBI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GLBD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GLBS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GGBI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GGBD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NOT_GGBS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = !global_src1->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = *constant_src_1_I * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_I * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = *constant_src_1_I * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_I * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ * *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ * *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ * *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ * *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ * *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ * *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ * *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ * *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ * local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ * local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ * global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_MUL_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ * global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = (double)*constant_src_1_I / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = *constant_src_1_I / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = *constant_src_1_D / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = *constant_src_1_D / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = (double)*constant_src_1_I / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = *constant_src_1_I / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = *constant_src_1_D / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = *constant_src_1_D / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(*constant_src_2_I == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = (double)local_src1->int_ / *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->int_ / *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(*constant_src_2_I == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->double_ / *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->double_ / *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = (double)local_src1->int_ / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->int_ / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->double_ / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->double_ / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = (double)local_src1->int_ / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->int_ / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->double_ / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = local_src1->double_ / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(*constant_src_2_I == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = (double)global_src1->int_ / *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->int_ / *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(*constant_src_2_I == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->double_ / *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(*constant_src_2_D == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->double_ / *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = (double)global_src1->int_ / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->int_ / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->double_ / local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(local_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->double_ / local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->int_ == 0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = (double)global_src1->int_ / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->int_ / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->int_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->double_ / global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_DIV_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	if(global_src2->double_ == 0.0) {
		setError(ERR_DivisionByZero);
		die();
		return;
	}

	local_dst->double_ = global_src1->double_ / global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_AND_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B && local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_AND_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B && global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_AND_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ && *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_AND_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ && local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_AND_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ && global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_AND_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ && *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_AND_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ && local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_AND_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ && global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = *constant_src_1_I + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_I + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->str = concatStringToString(constant_src_1_S, local_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = *constant_src_1_I + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_I + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->str = concatStringToString(constant_src_1_S, global_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ + *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ + *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ + *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ + *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->str = concatStringToString(local_src1->str, constant_src_2_S);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->str = concatStringToString(local_src1->str, local_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->str = concatStringToString(local_src1->str, global_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ + *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ + *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ + *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ + *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->str = concatStringToString(global_src1->str, constant_src_2_S);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ + local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ + local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->str = concatStringToString(global_src1->str, local_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ + global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ + global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_ADD_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->str = concatStringToString(global_src1->str, global_src2->str);
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = *constant_src_1_I - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_CLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_I - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_CLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = *constant_src_1_I - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_CGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGID
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_I - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_CGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDI
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = *constant_src_1_D - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ - *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ - *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ - *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ - *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = local_src1->int_ - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->int_ - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = local_src1->double_ - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ - *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GCID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ - *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GCDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ - *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ - *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GLID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GLDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ - local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ - local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->int_ = global_src1->int_ - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GGID(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGID
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->int_ - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GGDI(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDI
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ - global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_SUB_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->double_ = global_src1->double_ - global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_OR_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B || local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_OR_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B || global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_OR_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ || *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_OR_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ || local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_OR_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ || global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_OR_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ || *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_OR_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ || local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_OR_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ || global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_XOR_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B ^ local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_XOR_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B ^ global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_XOR_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ ^ *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_XOR_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ ^ local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_XOR_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ ^ global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_XOR_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ ^ *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_XOR_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ ^ local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_XOR_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ ^ global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I < local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D < local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B < local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I < global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D < global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B < global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ < *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ < *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ < *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ < local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ < local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ < local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ < global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ < global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ < global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ < *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ < *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ < *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ < local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ < local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ < local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ < global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ < global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ < global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_L_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result < 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I > local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D > local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B > local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I > global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D > global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B > global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ > *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ > *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ > *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ > local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ > local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ > local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ > global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ > global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ > global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ > *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ > *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ > *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ > local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ > local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ > local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ > global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ > global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ > global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_G_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result > 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I <= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D <= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B <= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I <= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D <= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B <= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ <= *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ <= *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ <= *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ <= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ <= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ <= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ <= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ <= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ <= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ <= *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ <= *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ <= *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ <= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ <= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ <= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ <= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ <= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ <= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_LE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result <= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I >= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D >= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B >= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I >= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D >= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B >= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ >= *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ >= *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ >= *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ >= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ >= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ >= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ >= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ >= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ >= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ >= *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ >= *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ >= *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ >= local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ >= local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ >= local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ >= global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ >= global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ >= global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_GE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result >= 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I == local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D == local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B == local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I == global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D == global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B == global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ == *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ == *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ == *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ == local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ == local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ == local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ == global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ == global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ == global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ == *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ == *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ == *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ == local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ == local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ == local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ == global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ == global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ == global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_EQ_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result == 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_CLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I != local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_CLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D != local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_CLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B != local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_CLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CLSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, local_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_CGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGII
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_I != global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_CGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGDD
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_D != global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_CGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGBB
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = *constant_src_1_B != global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_CGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//CGSS
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(constant_src_1_S->data, global_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ != *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ != *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ != *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ != local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ != local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ != local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->int_ != global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->double_ != global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = local_src1->bool_ != global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_LGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//LGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(local_src1->str->data, global_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GCII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ != *constant_src_2_I;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GCDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ != *constant_src_2_D;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GCBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ != *constant_src_2_B;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GCSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GCSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, constant_src_2_S->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GLII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ != local_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GLDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ != local_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GLBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ != local_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GLSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GLSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


	int compare_result = strcmp(global_src1->str->data, local_src2->str->data);
	local_dst->bool_ = compare_result != 0;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GGII(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGII
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->int_ != global_src2->int_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GGDD(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGDD
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->double_ != global_src2->double_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GGBB(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGBB
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}

	local_dst->bool_ = global_src1->bool_ != global_src2->bool_;
	local_dst->initialized = true;
	stack.SP = stack.SP + local_dst->sp_inc;
}

void Instr_NE_GGSS(Instruction *i) {
	extract_data() // Macro for unrolling pointers
	//GGSS
	if(i->src_1.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}
	if(i->src_2.initialized == false) {
		setError(ERR_UnitializedAccess);
		die();
	}


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
const InstrFuncPtr instruction_table[3744] = {
	[42] = Instr_NEG_LCII,
	[41] = Instr_NEG_LCID,
	[43] = Instr_NEG_LCIB,
	[40] = Instr_NEG_LCIS,
	[38] = Instr_NEG_LCDI,
	[37] = Instr_NEG_LCDD,
	[39] = Instr_NEG_LCDB,
	[36] = Instr_NEG_LCDS,
	[10] = Instr_NEG_LLII,
	[9] = Instr_NEG_LLID,
	[11] = Instr_NEG_LLIB,
	[8] = Instr_NEG_LLIS,
	[6] = Instr_NEG_LLDI,
	[5] = Instr_NEG_LLDD,
	[7] = Instr_NEG_LLDB,
	[4] = Instr_NEG_LLDS,
	[26] = Instr_NEG_LGII,
	[25] = Instr_NEG_LGID,
	[27] = Instr_NEG_LGIB,
	[24] = Instr_NEG_LGIS,
	[22] = Instr_NEG_LGDI,
	[21] = Instr_NEG_LGDD,
	[23] = Instr_NEG_LGDB,
	[20] = Instr_NEG_LGDS,
	[106] = Instr_NEG_GCII,
	[105] = Instr_NEG_GCID,
	[107] = Instr_NEG_GCIB,
	[104] = Instr_NEG_GCIS,
	[102] = Instr_NEG_GCDI,
	[101] = Instr_NEG_GCDD,
	[103] = Instr_NEG_GCDB,
	[100] = Instr_NEG_GCDS,
	[74] = Instr_NEG_GLII,
	[73] = Instr_NEG_GLID,
	[75] = Instr_NEG_GLIB,
	[72] = Instr_NEG_GLIS,
	[70] = Instr_NEG_GLDI,
	[69] = Instr_NEG_GLDD,
	[71] = Instr_NEG_GLDB,
	[68] = Instr_NEG_GLDS,
	[90] = Instr_NEG_GGII,
	[89] = Instr_NEG_GGID,
	[91] = Instr_NEG_GGIB,
	[88] = Instr_NEG_GGIS,
	[86] = Instr_NEG_GGDI,
	[85] = Instr_NEG_GGDD,
	[87] = Instr_NEG_GGDB,
	[84] = Instr_NEG_GGDS,
	[302] = Instr_NOT_LCBI,
	[301] = Instr_NOT_LCBD,
	[303] = Instr_NOT_LCBB,
	[300] = Instr_NOT_LCBS,
	[270] = Instr_NOT_LLBI,
	[269] = Instr_NOT_LLBD,
	[271] = Instr_NOT_LLBB,
	[268] = Instr_NOT_LLBS,
	[286] = Instr_NOT_LGBI,
	[285] = Instr_NOT_LGBD,
	[287] = Instr_NOT_LGBB,
	[284] = Instr_NOT_LGBS,
	[366] = Instr_NOT_GCBI,
	[365] = Instr_NOT_GCBD,
	[367] = Instr_NOT_GCBB,
	[364] = Instr_NOT_GCBS,
	[334] = Instr_NOT_GLBI,
	[333] = Instr_NOT_GLBD,
	[335] = Instr_NOT_GLBB,
	[332] = Instr_NOT_GLBS,
	[350] = Instr_NOT_GGBI,
	[349] = Instr_NOT_GGBD,
	[351] = Instr_NOT_GGBB,
	[348] = Instr_NOT_GGBS,
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
