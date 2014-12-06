#include "expr.h"

//extern void *mem_alloc(size_t len);
extern Token *token;
extern TokenVector *tokenVector;
extern Context *mainContext;
extern Context *funcContext;
extern Context *activeContext;
extern Symbol *funcSymbol;
extern InstructionVector *tape;

static ExprToken temp_expr_token;
static DataType return_value_data_type;
static ExprToken *top_most_term;
static Operand a;
static Operand b;
static Operand c;
static uint64_t MY_OFFSET;
int instr_counter;

static void reduce(ExprTokenVector *expr_vector);
static inline void reduce_handle_unary_minus(THandle handle);
static inline void reduce_handle_not(THandle handle);
static inline void reduce_handle_three_tokens(THandle handle);
static void reduce_two_constants(THandle handle);
static inline void reduce_handle_function(THandle handle);
static void convert_to_ExprToken(Token *token, ExprTokenVector *expr_vector);
static inline int token_to_index(Token *token);
static inline int precedence(ExprTokenVector *expr_token_vector);
static inline void find_top_most_term(ExprTokenVector *expr_token_vector);
static inline int index_handle_start(ExprTokenVector *expr_token_vector);
static inline bool check_id_function(Symbol *identifier);
static inline bool check_unary_minus(ExprTokenVector *expr_vector);
static inline void print_type_table(int operator);
void ExprTokenVectorPrint(ExprTokenVector *expr_token);
void ExprTokenPrint(ExprToken *expr_token);

typedef enum
{
	S,		// shift
	R,		// reduce
	H,		// handle
	E		// error
} TokenPrecedence;
enum { SHIFT = S, REDUCE = R, HANDLE = H, ERROR = E};



static const int precedence_table[TT_assignment][TT_assignment] =
{
/*         U- not  *   /  and  +   -  or  xor  <   >   <=  >=  =   <>  (   )   f   ,   $  var  */
/*  U- */{ H , R , R , R , R , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/* not */{ R , H , R , R , R , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/*  *  */{ S , S , R , R , R , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/*  /  */{ S , S , R , R , R , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/* and */{ S , S , R , R , R , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/*  +  */{ S , S , S , S , S , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/*  -  */{ S , S , S , S , S , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/*  or */{ S , S , S , S , S , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/* xor */{ S , S , S , S , S , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/*  <  */{ S , S , S , S , S , S , S , S , S , R , R , R , R , R , R , S , R , S , R , R , S },
/*  >  */{ S , S , S , S , S , S , S , S , S , R , R , R , R , R , R , S , R , S , R , R , S },
/*  <= */{ S , S , S , S , S , S , S , S , S , R , R , R , R , R , R , S , R , S , R , R , S },
/*  >= */{ S , S , S , S , S , S , S , S , S , R , R , R , R , R , R , S , R , S , R , R , S },
/*  =  */{ S , S , S , S , S , S , S , S , S , R , R , R , R , R , R , S , R , S , R , R , S },
/*  <> */{ S , S , S , S , S , S , S , S , S , R , R , R , R , R , R , S , R , S , R , R , S },
/*  (  */{ S , S , S , S , S , S , S , S , S , S , S , S , S , S , S , S , H , S , H , E , S },
/*  )  */{ R , R , R , R , R , R , R , R , R , R , R , R , R , R , R , E , R , E , R , R , E },
/*  f  */{ E , E , E , E , E , E , E , E , E , E , E , E , E , E , E , H , E , E , E , E , E },
/*  ,  */{ S , S , S , S , S , S , S , S , S , S , S , S , S , S , S , S , H , S , H , E , S },
/*  $  */{ S , S , S , S , S , S , S , S , S , S , S , S , S , S , S , S , E , S , E , E , S },
/* var */{ R , R , R , R , R , R , R , R , R , R , R , R , R , R , R , E , R , E , R , R , E }
};

#define OPERATORS_COUNT 15
#define num_of_data_types 4

static const int type_table[OPERATORS_COUNT][num_of_data_types][num_of_data_types] =
{
	{
	/*****************************************************/
	/*                 TT_unaryMinus                     */
	/*****************************************************/
	/* STRING */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  UNDEF  },
	/* DOUBLE */{ DOUBLE ,  DOUBLE ,  DOUBLE ,  DOUBLE },
	/*    INT */{ INT    ,  INT    ,  INT    ,  INT    },
	/*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  UNDEF  }
	},
	{
	/*****************************************************/
	/*                    TT_not                         */
	/*****************************************************/
	/* STRING */{ UNDEF ,  UNDEF ,  UNDEF ,  UNDEF },
	/* DOUBLE */{ UNDEF ,  UNDEF ,  UNDEF ,  UNDEF },
	/*    INT */{ UNDEF ,  UNDEF ,  UNDEF ,  UNDEF },
	/*   BOOL */{ BOOL  ,  BOOL  ,  BOOL  ,  BOOL  }
	},
	{
/***************************************************************/
/*    TT_multiply   *   STRING    DOUBLE    INT       BOOL   ***/
/***************************************************************/
	      /* STRING */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  UNDEF },
	      /* DOUBLE */{ UNDEF  ,  DOUBLE ,  DOUBLE ,  UNDEF },
	      /*    INT */{ UNDEF  ,  DOUBLE ,  INT    ,  UNDEF },
	      /*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  UNDEF }
	},
	{
/***************************************************************/
/*   TT_division    *   STRING    DOUBLE    INT       BOOL   ***/
/***************************************************************/
	      /* STRING */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  UNDEF },
	      /* DOUBLE */{ UNDEF  ,  DOUBLE ,  DOUBLE ,  UNDEF },
	      /*    INT */{ UNDEF  ,  DOUBLE ,  DOUBLE ,  UNDEF },
	      /*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  UNDEF }
	},
	{
/***************************************************************/
/*      TT_and      *   STRING    DOUBLE    INT       BOOL   ***/
/***************************************************************/
	      /* STRING */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF ,  BOOL  }
	},
	{
/***************************************************************/
/*     TT_plus      *   STRING    DOUBLE    INT       BOOL   ***/
/***************************************************************/
	      /* STRING */{ STRING ,  UNDEF  ,  UNDEF  ,  UNDEF },
	      /* DOUBLE */{ UNDEF  ,  DOUBLE ,  DOUBLE ,  UNDEF },
	      /*    INT */{ UNDEF  ,  DOUBLE ,  INT    ,  UNDEF },
	      /*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  UNDEF }
	},
	{
/***************************************************************/
/*     TT_minus     *   STRING    DOUBLE    INT       BOOL   ***/
/***************************************************************/
	      /* STRING */{ STRING ,  UNDEF  ,  UNDEF  ,  UNDEF },
	      /* DOUBLE */{ UNDEF  ,  DOUBLE ,  DOUBLE ,  UNDEF },
	      /*    INT */{ UNDEF  ,  DOUBLE ,  INT    ,  UNDEF },
	      /*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  UNDEF }
	},
	{
/***************************************************************/
/*      TT_or       *   STRING    DOUBLE    INT       BOOL   ***/
/***************************************************************/
	      /* STRING */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF ,  BOOL  }
	},
	{
/***************************************************************/
/*      TT_xor      *   STRING    DOUBLE     INT     BOOL   ***/
/***************************************************************/
	      /* STRING */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF  ,  UNDEF  ,  UNDEF ,  UNDEF },
	      /*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF ,  BOOL  }
	},
	{
/************************************************************/
/*     TT_less      *   STRING   DOUBLE    INT     BOOL   ***/
/************************************************************/
	      /* STRING */{ BOOL  ,  UNDEF ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF ,  BOOL  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF ,  UNDEF ,  BOOL  ,  UNDEF },
	      /*   BOOL */{ UNDEF ,  UNDEF ,  UNDEF ,  BOOL  }
	},
	{
/************************************************************/
/*    TT_greater    *   STRING   DOUBLE   INT      BOOL   ***/
/************************************************************/
	      /* STRING */{ BOOL  ,  UNDEF ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF ,  BOOL  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF ,  UNDEF ,  BOOL  ,  UNDEF },
	      /*   BOOL */{ UNDEF ,  UNDEF ,  UNDEF ,  BOOL  }
	},
	{
/************************************************************/
/*  TT_lessOrEqual  *   STRING   DOUBLE    INT     BOOL   ***/
/************************************************************/
	      /* STRING */{ BOOL  ,  UNDEF ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF ,  BOOL  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF ,  UNDEF ,  BOOL  ,  UNDEF },
	      /*   BOOL */{ UNDEF ,  UNDEF ,  UNDEF ,  BOOL  }
	},
	{
/************************************************************/
/* TT_greaterOrEqual*   STRING   DOUBLE    INT     BOOL   ***/
/************************************************************/
	      /* STRING */{ BOOL  ,  UNDEF ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF ,  BOOL  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF ,  UNDEF ,  BOOL  ,  UNDEF },
	      /*   BOOL */{ UNDEF ,  UNDEF ,  UNDEF ,  BOOL  }
	},
	{
/************************************************************/
/*   TT_equality    *   STRING   DOUBLE    INT     BOOL   ***/
/************************************************************/
	      /* STRING */{ BOOL  ,  UNDEF ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF ,  BOOL  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF ,  UNDEF ,  BOOL  ,  UNDEF },
	      /*   BOOL */{ UNDEF ,  UNDEF ,  UNDEF ,  BOOL  }
	},
	{
/************************************************************/
/*  TT_inequality   *   STRING   DOUBLE    INT     BOOL   ***/
/************************************************************/
	      /* STRING */{ BOOL  ,  UNDEF ,  UNDEF ,  UNDEF },
	      /* DOUBLE */{ UNDEF ,  BOOL  ,  UNDEF ,  UNDEF },
	      /*    INT */{ UNDEF ,  UNDEF ,  BOOL  ,  UNDEF },
	      /*   BOOL */{ UNDEF ,  UNDEF ,  UNDEF ,  BOOL  }
	},
};


DataType expr()
{
	int action;
	instr_counter = 0;
	bool end_of_eval = true;
	return_value_data_type = EXPR_ERROR;
	//assert(activeContext);
	MY_OFFSET = activeContext->locCount + 2;

	token++;

	if(token->type != TT_leftBrace && token->type != TT_not && token->type != TT_minus
		&& !(token->type >= TT_identifier && token->type <= TT_bool))
	{
		setError(ERR_SyntaxExpr);
		return EXPR_ERROR;
	}

	ExprTokenVector *expr_token_vector = ExprTokenVectorInit(32);

	assert(tokenVector);
	convert_to_ExprToken(TokenVectorLast(tokenVector), expr_token_vector); // add $ to expr. stack
	ExprTokenVectorAppend(expr_token_vector, temp_expr_token); // first token, (empty = $)
	// [$, , , , , ]

	while (end_of_eval)
	{
		convert_to_ExprToken(token, expr_token_vector);
		if(getError()) return EXPR_ERROR;
AFTER_REDUCE:
		action = precedence(expr_token_vector);

		/* vypisy */
		//static const char *actions[] = {"shift", "reduce", "handle", "error"};
		//ExprTokenVectorPrint(expr_token_vector);
		//fprintf(stderr, " %s\n", actions[action]);


		switch(action)
		{
			case ERROR:
				if (top_most_term->token->type == TT_empty &&
					token_to_index(temp_expr_token.token) == TT_empty &&
					expr_token_vector->used != 3)
				{
					end_of_eval = false;
					break;
				}
				setError(ERR_PrecedenceTable);
				return EXPR_ERROR;
			case SHIFT:
				ExprTokenVectorAppend(expr_token_vector, temp_expr_token);
				if (top_most_term != ExprTokenVectorLast(expr_token_vector))
					top_most_term[1].handle_start = true;
				break;
			case HANDLE:
				ExprTokenVectorAppend(expr_token_vector, temp_expr_token);
				break;
			case REDUCE:
				reduce(expr_token_vector);
				if(getError()) return EXPR_ERROR;
				goto AFTER_REDUCE;
				break;
		}
		if (token_to_index(token) != TT_empty)
			token++;
	}


	/*for (int i = TT_unaryMinus; i <= TT_inequality; i++)
	{
		printf("%d\n", i);
		print_type_table(i);
	}*/

	Instruction *last = InstructionVectorLast(tape);
	if (instr_counter == 0 || last->instr == Instr_CALL)
	{
		b.var_type = LOCAL;
		b.data_type = return_value_data_type;
		b.offset = MY_OFFSET - 1;
		b.initialized = true;
		a.sp_inc = 1;
		a.offset = MY_OFFSET - 1;
		generateInstruction(PUSH, &a, &b); // b = pushed operand, a = local dst
	}

	ExprTokenVectorFree(expr_token_vector);

	return return_value_data_type;
}

static void reduce(ExprTokenVector *expr_vector)
{
	assert(expr_vector); // just in case
	THandle handle = {.expr_vector = expr_vector};
	handle.last = ExprTokenVectorLast(expr_vector);
	if (handle.last->handle_start) ////////  1 token
	{
		if (handle.last->type == TERM) // E -> var
		{
			return_value_data_type = handle.last->E.data_type;
			handle.last->handle_start = false;
			handle.last->type = NONTERM;
		}
		else
		{
			setError(ERR_Reduction);
			return;
		}
	}
	else
	{
		handle.first_index = index_handle_start(expr_vector);
		if(getError()) return;
		handle.last_index = expr_vector->used - 1;
		handle.tokens_count = handle.last_index - handle.first_index + 1;
		handle.first = ExprTokenVectorAt(expr_vector, handle.first_index);

		if (handle.first->token->type == TT_unaryMinus && handle.last->type == NONTERM) // 2+ tokens
		{ // TT_not or TT_unaryMinux (maybe multiple times)
			reduce_handle_unary_minus(handle);
		}
		else if (handle.first->token->type == TT_not && handle.last->type == NONTERM)	// 2+ tokens
		{
			reduce_handle_not(handle);
		}
		else if (handle.first->token->type == TT_function) // 3, 4, 6, 8 .. tokens
		{
			reduce_handle_function(handle);
		}
		else if (handle.tokens_count == 3 && handle.first->type == NONTERM) //// 3 tokens... E + E ... ( E )
		{
			reduce_handle_three_tokens(handle);
		}
		else
		{
			/*
			fprintf(stderr, "%d\n", handle.tokens_count);
			fprintf(stderr, "%s", stringifyToken(top_most_term->token));
			fprintf(stderr, "   _%d\n", top_most_term->token->type);
			fprintf(stderr, "%s", stringifyToken(temp_expr_token.token));
			fprintf(stderr, "   _%d\n", temp_expr_token.token->type);
			*/
			setError(ERR_Reduction);
			return;
		}
		if(getError()) return;
	}
	return;
}

// 2+ tokens
static inline void reduce_handle_unary_minus(THandle handle)
{
	int minus_counter = 0;
	ExprToken *temp = handle.first;
	while (temp->token->type == TT_unaryMinus)
	{
		minus_counter++;
		temp++;
	}
	if (temp != handle.last)
	{
		setError(ERR_Reduction);
		return;
	}
	if (temp->E.data_type != INT && temp->E.data_type != DOUBLE) // check data_type
	{
		setError(ERR_TypeCompatibility);
		return;
	}
	else
		return_value_data_type = temp->E.data_type;

	if (minus_counter % 2 == 0)
	{
		// reducing tokens
		ExprTokenVectorAtSet(handle.expr_vector, handle.first_index, *temp);
		ExprTokenVectorPopMore(handle.expr_vector, handle.tokens_count - 1);
	}
	else // if (minus_counter % 2 == 1)
	{
		if (temp->E.var_type == CONST)
		{
			if (temp->E.data_type == INT)
				temp->E.int_ = - temp->E.int_;
			else if (temp->E.data_type == DOUBLE)
				temp->E.double_ = - temp->E.double_;

			// reducing tokens
			ExprTokenVectorAtSet(handle.expr_vector, handle.first_index, *temp);
			ExprTokenVectorPopMore(handle.expr_vector, handle.tokens_count - 1);
		}
		else // LOCAL / GLOBAL
		{
			b = temp->E;
			a.sp_inc = 1;
			a.offset = MY_OFFSET++;
			generateExprInstruction(NEG, &a, &b, &c);

			temp->E.var_type = LOCAL;
			temp->E.offset = MY_OFFSET-1;
			// reducing tokens
			ExprTokenVectorAtSet(handle.expr_vector, handle.first_index, *temp);
			ExprTokenVectorPopMore(handle.expr_vector, handle.tokens_count - 1);
		}
	}
}


// 2+ tokens
static inline void reduce_handle_not(THandle handle)
{
	int not_counter = 0;
	ExprToken *temp = handle.first;
	while (temp->token->type == TT_not)
	{
		not_counter++;
		temp++;
	}
	if (temp != handle.last)
	{
		setError(ERR_Reduction);
		return;
	}
	if (temp->E.data_type != BOOL) // check data_type
	{
		setError(ERR_TypeCompatibility);
		return;
	}
	else
		return_value_data_type = BOOL;

	if (not_counter % 2 == 0)
	{
		// reducing tokens
		ExprTokenVectorAtSet(handle.expr_vector, handle.first_index, *temp);
		ExprTokenVectorPopMore(handle.expr_vector, handle.tokens_count - 1);
	}
	else // if (not_counter % 2 == 1)
	{
		if (temp->E.var_type == CONST)
		{
			if (temp->E.data_type == BOOL)
				temp->E.bool_ = ! temp->E.bool_;

			// reducing tokens
			ExprTokenVectorAtSet(handle.expr_vector, handle.first_index, *temp);
			ExprTokenVectorPopMore(handle.expr_vector, handle.tokens_count - 1);
		}
		else // LOCAL / GLOBAL
		{
			b = temp->E;
			a.sp_inc = 1;
			a.offset = MY_OFFSET++;
			generateExprInstruction(NOT, &a, &b, &c);

			temp->E.var_type = LOCAL;
			temp->E.offset = MY_OFFSET-1;
			// reducing tokens
			ExprTokenVectorAtSet(handle.expr_vector, handle.first_index, *temp);
			ExprTokenVectorPopMore(handle.expr_vector, handle.tokens_count - 1);
		}
	}
}

// 3 tokens... E + E ... ( E )
static inline void reduce_handle_three_tokens(THandle handle)
{
	/***   (  E  ) ->   E     ***/
	if (handle.first[0].token->type == TT_leftBrace &&
		handle.first[1].type == NONTERM &&
		handle.first[2].token->type == TT_rightBrace)
	{
		ExprTokenVectorAtSet(handle.expr_vector, handle.first_index, handle.first[1]);
		ExprTokenVectorPopMore(handle.expr_vector, 2);
		return_value_data_type = handle.first->E.data_type;
	}
	else if (handle.first[0].type == NONTERM &&
			handle.first[1].token->type >= TT_multiply &&
			handle.first[1].token->type <= TT_inequality &&
			handle.first[2].type == NONTERM)
	{
		// semantic analysis
		DataType value_type = type_table[handle.first[1].token->type]
							[handle.first[0].E.data_type]
							[handle.first[2].E.data_type];
		if (value_type == UNDEF)
		{
			setError(ERR_TypeCompatibility);
			return;
		}
		else
			return_value_data_type = value_type;

		// check if both operands are constants and do operation without generating instruction
		if (handle.first[0].E.var_type == CONST &&
			handle.first[2].E.var_type == CONST)
		{
			reduce_two_constants(handle);
			if(getError()) return;
		}
		else	// generating instruction
		{
			c = handle.first[0].E;
			b = handle.first[2].E;
			a.sp_inc = 1;
			a.offset = MY_OFFSET++;
			generateExprInstruction((InstructionOp)handle.first[1].token->type, &a, &b, &c);
		}

		// reducing tokens
		handle.first->handle_start = false;
		handle.first->E.data_type = value_type;
		handle.first->E.var_type = LOCAL;
		handle.first->E.offset = MY_OFFSET-1;
		ExprTokenVectorPopMore(handle.expr_vector, 2);
	}
	else
	{
		setError(ERR_Reduction);
		return;
	}
}


static void reduce_two_constants(THandle handle)
{
	if (handle.first[0].E.data_type == INT &&
		handle.first[2].E.data_type == INT)
	{
		switch (handle.first[1].token->type)
		{
			case TT_multiply:
				handle.first[0].E.int_ = handle.first[0].E.int_ * handle.first[2].E.int_;
				break;
			case TT_division:
				if (handle.first[2].E.int_ == 0)
				{
					setError(ERR_TypeCompatibility);
					return;
				}
				handle.first[0].E.double_ = (double)handle.first[0].E.int_ / handle.first[2].E.int_;
				break;
			case TT_plus:
				handle.first[0].E.int_ = handle.first[0].E.int_ + handle.first[2].E.int_;
				break;
			case TT_minus:
				handle.first[0].E.int_ = handle.first[0].E.int_ - handle.first[2].E.int_;
				break;
			case TT_less:
				handle.first[0].E.bool_ = handle.first[0].E.int_ < handle.first[2].E.int_;
				break;
			case TT_greater:
				handle.first[0].E.bool_ = handle.first[0].E.int_ > handle.first[2].E.int_;
				break;
			case TT_lessOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.int_ <= handle.first[2].E.int_;
				break;
			case TT_greaterOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.int_ >= handle.first[2].E.int_;
				break;
			case TT_equality:
				handle.first[0].E.bool_ = handle.first[0].E.int_ == handle.first[2].E.int_;
				break;
			case TT_inequality:
				handle.first[0].E.bool_ = handle.first[0].E.int_ != handle.first[2].E.int_;
				break;
			default:
				break;
		}
	}
	else if (handle.first[0].E.data_type == INT &&
			handle.first[2].E.data_type == DOUBLE)
	{
		switch (handle.first[1].token->type)
		{
			case TT_multiply:
				handle.first[0].E.double_ = handle.first[0].E.int_ * handle.first[2].E.double_;
				break;
			case TT_division:
				if (handle.first[2].E.double_ == 0)
				{
					setError(ERR_TypeCompatibility);
					return;
				}
				handle.first[0].E.double_ = handle.first[0].E.int_ / handle.first[2].E.double_;
				break;
			case TT_plus:
				handle.first[0].E.double_ = handle.first[0].E.int_ + handle.first[2].E.double_;
				break;
			case TT_minus:
				handle.first[0].E.double_ = handle.first[0].E.int_ - handle.first[2].E.double_;
				break;
			case TT_less:
				handle.first[0].E.bool_ = handle.first[0].E.int_ < handle.first[2].E.double_;
				break;
			case TT_greater:
				handle.first[0].E.bool_ = handle.first[0].E.int_ > handle.first[2].E.double_;
				break;
			case TT_lessOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.int_ <= handle.first[2].E.double_;
				break;
			case TT_greaterOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.int_ >= handle.first[2].E.double_;
				break;
			case TT_equality:
				handle.first[0].E.bool_ = handle.first[0].E.int_ == handle.first[2].E.double_;
				break;
			case TT_inequality:
				handle.first[0].E.bool_ = handle.first[0].E.int_ != handle.first[2].E.double_;
				break;
			default:
				break;
		}
	}
	else if (handle.first[0].E.data_type == DOUBLE &&
		handle.first[2].E.data_type == INT)
	{
		switch (handle.first[1].token->type)
		{
			case TT_multiply:
				handle.first[0].E.double_ = handle.first[0].E.double_ * handle.first[2].E.int_;
				break;
			case TT_division:
				if (handle.first[2].E.int_ == 0)
				{
					setError(ERR_TypeCompatibility);
					return;
				}
				handle.first[0].E.double_ = handle.first[0].E.double_ / handle.first[2].E.int_;
				break;
			case TT_plus:
				handle.first[0].E.double_ = handle.first[0].E.double_ + handle.first[2].E.int_;
				break;
			case TT_minus:
				handle.first[0].E.double_ = handle.first[0].E.double_ - handle.first[2].E.int_;
				break;
			case TT_less:
				handle.first[0].E.bool_ = handle.first[0].E.double_ < handle.first[2].E.int_;
				break;
			case TT_greater:
				handle.first[0].E.bool_ = handle.first[0].E.double_ > handle.first[2].E.int_;
				break;
			case TT_lessOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.double_ <= handle.first[2].E.int_;
				break;
			case TT_greaterOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.double_ >= handle.first[2].E.int_;
				break;
			case TT_equality:
				handle.first[0].E.bool_ = handle.first[0].E.double_ == handle.first[2].E.int_;
				break;
			case TT_inequality:
				handle.first[0].E.bool_ = handle.first[0].E.double_ != handle.first[2].E.int_;
				break;
			default:
				break;
		}
	}
	else if (handle.first[0].E.data_type == DOUBLE &&
		handle.first[2].E.data_type == DOUBLE)
	{
		switch (handle.first[1].token->type)
		{
			case TT_multiply:
				handle.first[0].E.double_ = handle.first[0].E.double_ * handle.first[2].E.double_;
				break;
			case TT_division:
				if (handle.first[2].E.double_ == 0)
				{
					setError(ERR_TypeCompatibility);
					return;
				}
				handle.first[0].E.double_ = handle.first[0].E.double_ / handle.first[2].E.double_;
				break;
			case TT_plus:
				handle.first[0].E.double_ = handle.first[0].E.double_ + handle.first[2].E.double_;
				break;
			case TT_minus:
				handle.first[0].E.double_ = handle.first[0].E.double_ - handle.first[2].E.double_;
				break;
			case TT_less:
				handle.first[0].E.bool_ = handle.first[0].E.double_ < handle.first[2].E.double_;
				break;
			case TT_greater:
				handle.first[0].E.bool_ = handle.first[0].E.double_ > handle.first[2].E.double_;
				break;
			case TT_lessOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.double_ <= handle.first[2].E.double_;
				break;
			case TT_greaterOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.double_ >= handle.first[2].E.double_;
				break;
			case TT_equality:
				handle.first[0].E.bool_ = handle.first[0].E.double_ == handle.first[2].E.double_;
				break;
			case TT_inequality:
				handle.first[0].E.bool_ = handle.first[0].E.double_ != handle.first[2].E.double_;
				break;
			default:
				break;
		}
	}
	else if (handle.first[0].E.data_type == BOOL &&
		handle.first[2].E.data_type == BOOL)
	{
		switch (handle.first[1].token->type)
		{
			case TT_and:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ && handle.first[2].E.bool_;
				break;
			case TT_or:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ || handle.first[2].E.bool_;
				break;
			case TT_xor:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ ^ handle.first[2].E.bool_;
				break;
			case TT_less:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ < handle.first[2].E.bool_;
				break;
			case TT_greater:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ > handle.first[2].E.bool_;
				break;
			case TT_lessOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ >= handle.first[2].E.bool_;
				break;
			case TT_greaterOrEqual:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ >= handle.first[2].E.bool_;
				break;
			case TT_equality:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ == handle.first[2].E.bool_;
				break;
			case TT_inequality:
				handle.first[0].E.bool_ = handle.first[0].E.bool_ != handle.first[2].E.bool_;
				break;
			default:
				break;
		}
	}
	else if (handle.first[0].E.data_type == STRING &&
		handle.first[2].E.data_type == STRING)
	{
		if (handle.first[1].token->type == TT_plus)
		{
			appendStringToString(handle.first[0].E.str, handle.first[2].E.str);
			return;
		}
		int compare_result = strcmp(handle.first[0].E.str->data, handle.first[2].E.str->data);
		switch (handle.first[1].token->type)
		{
			case TT_less:
				handle.first[0].E.bool_ = compare_result < 0;
				break;
			case TT_greater:
				handle.first[0].E.bool_ = compare_result > 0;
				break;
			case TT_lessOrEqual:
				handle.first[0].E.bool_ = compare_result <= 0;
				break;
			case TT_greaterOrEqual:
				handle.first[0].E.bool_ = compare_result >= 0;
				break;
			case TT_equality:
				handle.first[0].E.bool_ = compare_result == 0;
				break;
			case TT_inequality:
				handle.first[0].E.bool_ = compare_result != 0;
				break;
			default:
				break;
		}
	}
	else
	{
		setError(ERR_Reduction);
		return;
	}
}


// 3, 4, 6, 8 .. tokens
static inline void reduce_handle_function(THandle handle)
{
	int num_of_commas = 0;
	ExprToken *temp = handle.first;
	if ((++temp)->token->type != TT_leftBrace)
	{
		setError(ERR_Reduction);
		return;
	}
	temp++;

	Symbol *id = SymbolFind(mainContext, handle.first->token->str.data);
	Context *context = id->funCont;
	return_value_data_type = (DataType) context->returnType;

	for (uint32_t i = 0; i < context->argCount; i++) // check arguments
	{
		if (temp->E.data_type != context->arg[i]->type)
		{
			setError(ERR_TypeCompatibilityArg);
			return;
		}
		if (context->argCount > 1 && (++temp)->token->type != TT_comma)
		{
			setError(ERR_Reduction);
			return;
		}
		temp++;
	}
	// check the end of handle
	if ((temp)->token->type != TT_rightBrace || temp != handle.last)
	{
		setError(ERR_Reduction);
		return;
	}

	// reserve place for return value
	//b.data_type = context->returnType; // type doesnt matter
	b.initialized = false;
	a.sp_inc = 1;
	a.offset = MY_OFFSET++;

	generateInstruction(PUSH, &a, &b); // b = pushed operand

	for (uint32_t i = 0; i < context->argCount; i++) // push arguments in reversed order
	{
		temp--;

		b = temp->E;
		b.initialized = true;
		a.sp_inc = 1;
		a.offset = MY_OFFSET++;
		generateInstruction(PUSH, &a, &b); // b = pushed operand, a = local dst

		temp--;
	}

	a.offset = id->index;
	b.int_ = context->argCount;
	// generate CALL instruction
	generateInstruction(CALL, &a, &b); // b = pushed operand

	// reducing tokenvector
	MY_OFFSET -= context->argCount;
	handle.first->handle_start = false;
	handle.first->type = NONTERM;
	handle.first->E.data_type = return_value_data_type;
	handle.first->E.var_type = LOCAL;
	handle.first->E.offset = MY_OFFSET - 1;
	if (context->argCount > 1)
		num_of_commas = context->argCount - 1;
	ExprTokenVectorPopMore(handle.expr_vector, context->argCount + 2 + num_of_commas);
}


static void convert_to_ExprToken(Token *token, ExprTokenVector *expr_vector)
{
	Symbol *id = NULL;
	assert(token); // just in case
	temp_expr_token.type = TERM;
	temp_expr_token.handle_start = false;
	temp_expr_token.token = token;

	temp_expr_token.E.var_type = UNDEF_;
	temp_expr_token.E.data_type = UNDEF;

	switch(token->type)
	{
		case TT_identifier:
			id = SymbolFind(funcContext, token->str.data);
			if (id) // <loc_var> or <arg> or <function>
			{
				if (check_id_function(id))
					token->type = TT_function;
				else
				{
					temp_expr_token.E.var_type = LOCAL;
					temp_expr_token.E.offset = id->index;
					temp_expr_token.E.data_type = (DataType) id->type;
				}
			}
			else
			{
				id = SymbolFind(mainContext, token->str.data);
				if (id) // <glob_var> or <function>
				{
					if (id->type == T_FunPointer) // function
						token->type = TT_function;
					else
					{
						temp_expr_token.E.var_type = GLOBAL;
						temp_expr_token.E.offset = id->index;
						temp_expr_token.E.data_type = (DataType) id->type;
					}
				}
			}
			if (id == NULL)
			{
				setError(ERR_UndefVarOrFunction);
				return;
			}
			break;
		case TT_real:
			temp_expr_token.E.var_type = CONST;
			temp_expr_token.E.data_type = DOUBLE;
			temp_expr_token.E.double_ = token->r;
			break;
		case TT_integer:
			temp_expr_token.E.var_type = CONST;
			temp_expr_token.E.data_type = INT;
			temp_expr_token.E.int_ = token->n;
			break;
		case TT_string:
			temp_expr_token.E.var_type = CONST;
			temp_expr_token.E.data_type = STRING;
			temp_expr_token.E.str = &(token->str);
			break;
		case TT_bool:
			temp_expr_token.E.var_type = CONST;
			temp_expr_token.E.data_type = BOOL;
			temp_expr_token.E.bool_ = (bool)token->n;

			break;
		case TT_minus:
			if (check_unary_minus(expr_vector))
				token->type = TT_unaryMinus;
			break;
		default: // :-)
			break;
	}
}


static inline int token_to_index(Token *token)
{
	assert(token);
	if (token->type > TT_bool)
		return TT_empty;
	if (token->type >= TT_identifier)
		return TT_identifier;
	return token->type;
}


static inline int precedence(ExprTokenVector *expr_token_vector)
{
	assert(expr_token_vector);
	find_top_most_term(expr_token_vector);
	int index_1 = token_to_index(top_most_term->token); // top most term on expr. stack
	int index_2 = token_to_index(temp_expr_token.token); // input

	return precedence_table[index_1][index_2];
}


static inline void find_top_most_term(ExprTokenVector *expr_token_vector)
{
	assert(expr_token_vector);
	top_most_term = ExprTokenVectorLast(expr_token_vector);
	while(top_most_term->type != TERM)
		top_most_term--;
}

static inline int index_handle_start(ExprTokenVector *expr_token_vector)
{
	assert(expr_token_vector);
	ExprToken *last_handle_start = ExprTokenVectorLast(expr_token_vector);
	while(last_handle_start->handle_start != true)
	{
		if (last_handle_start->token->type == TT_empty)
		{
			setError(ERR_Reduction);
			return -1;
		}
		last_handle_start--;
	}
	return last_handle_start - ExprTokenVectorFirst(expr_token_vector);
}

// check if identifier is used as actual return value or as calling function
// factorial := factorial(a, b)
static inline bool check_id_function(Symbol *identifier)
{
	if (identifier->name == funcSymbol->name)
	{
		if (token[1].type == TT_leftBrace)
			return true;
	}
	return false;
}

static inline bool check_unary_minus(ExprTokenVector *expr_vector)
{
	assert(expr_vector);
	ExprToken *last = ExprTokenVectorLast(expr_vector);
	assert(last->token);
	TokenType token_type = last->token->type;
	//if (last->type == NONTERM)
	//	return false;
	// zrusene, neterminal by sa nemal nachadzať na vrchole zasobnika

	if (token_type >= TT_identifier && token_type <= TT_bool)
		return false;
	else if (token_type == TT_rightBrace)
		return false;

	return true;
}

static inline void print_type_table(int operator)
{
	for (int i = 0; i < 4; i++)
	{
		for (int x = 0; x < 4; x++)
		{
			printf("%d ", type_table[operator][i][x]);
		}
		printf("\n");
	}
}


void ExprTokenVectorPrint(ExprTokenVector *expr_token_vector)
{
	assert(expr_token_vector);
	//printf("\n");
	ExprToken *expr_token = NULL;

	for (uint32_t i = 0; i < expr_token_vector->used; i++)
	{
		expr_token = ExprTokenVectorAt(expr_token_vector, i);
		if (expr_token->type == NONTERM)
			ExprTokenPrint(expr_token);
		else
			fprintf(stderr, "%s ", stringifyToken(expr_token->token));
	}
	fprintf(stderr, "\n");
}

void ExprTokenPrint(ExprToken *expr_token)
{
	assert(expr_token);
	switch (expr_token->E.data_type)
	{
		case INT:
			fprintf(stderr, "%d ", expr_token->E.int_);
			break;
		case DOUBLE:
			fprintf(stderr, "%f ", expr_token->E.double_);
			break;
		case STRING:
			fprintf(stderr, "%s ", expr_token->E.str->data);
			break;
		case BOOL:
			fprintf(stderr, "%d ", expr_token->E.bool_);
			break;
		case UNDEF:
			fprintf(stderr, "UNDEF ");
			break;
	}
}




GenVectorFunctions(ExprToken)

/*
ExprToken *allocExprToken()
{
	ExprToken *new_expr_token = malloc(sizeof(ExprToken));
	new_expr_token->type = TERM;

	//new_expr_token->token = malloc(sizeof(Token));
	//(new_expr_token->token) = initToken();

	return new_expr_token;
}

void destroyExprToken(ExprToken *expr_token)
{
	assert(expr_token);
	//destroyToken(expr_token->token);
	//free(expr_token->token);
	free(expr_token);
}*/
