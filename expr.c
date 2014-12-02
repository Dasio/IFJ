#include "expr.h"

//extern void *mem_alloc(size_t len);
extern Token *token;
extern TokenVector *tokenVector;
extern Context *mainContext;
extern Context *funcContext;
extern Context *activeContext;
extern Symbol *funcSymbol;

static ExprToken temp_expr_token;

static inline void convert_to_ExprToken(Token *token, ExprTokenVector *expr_vector);
static inline int token_to_index(Token *token);
static inline int precedence(ExprTokenVector *expr_token_vector);
static inline ExprToken *findTopMostTerm(ExprTokenVector *expr_token_vector);
static inline bool check_id_function(Symbol *identifier);
static inline bool check_unary_minus(ExprTokenVector *expr_vector);


typedef enum
{
	S,		// shift
	R,		// reduce
	H,		// handle
	E		// error
} TokenPrecedence;
enum { SHIFT = S, REDUCE = R, HANDLE = H, ERROR = E};

static const char *actions[] = {"shift", "reduce", "handle", "error"};

static int precedence_table[TT_assignment][TT_assignment] =
{
/*         U- not  *   /  and  +   -  or  xor  <   >   <=  >=  =   <>  (   )   f   ,   $  var  */
/*  U- */{ H , R , R , R , R , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
/* not */{ S , R , R , R , R , R , R , R , R , R , R , R , R , R , R , S , R , S , R , R , S },
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

static int type_table[4][4] =
{
/*****************************************************/
/**********   STRING    DOUBLE    INT       BOOL   ***/
/*****************************************************/
/* STRING */{ STRING ,  UNDEF  ,  UNDEF  ,  UNDEF },
/* DOUBLE */{ UNDEF  ,  DOUBLE ,  DOUBLE ,  UNDEF },
/*    INT */{ UNDEF  ,  DOUBLE ,  INT    ,  UNDEF },
/*   BOOL */{ UNDEF  ,  UNDEF  ,  UNDEF  ,  BOOL  }
};


DataType expr()
{
	int action;
	DataType expr_data_type = EXPR_ERROR;

	token++;


	// TT_minus too if we want to implement unary minus
	if(token->type != TT_leftBrace && !(token->type >= TT_identifier && token->type <= TT_bool))
	{
		setError(ERR_SyntaxExpr);
		printError();
		return EXPR_ERROR;
	}

	ExprTokenVector *expr_token_vector = ExprTokenVectorInit(32);

	assert(tokenVector);
	convert_to_ExprToken(TokenVectorLast(tokenVector), expr_token_vector); // add $ to expr. stack
	ExprTokenVectorAppend(expr_token_vector, temp_expr_token); // first token, (empty = $)
	// [$, , , , , ]

	while (token_to_index(token) != TT_empty)
	{
		convert_to_ExprToken(token, expr_token_vector);
		action = precedence(expr_token_vector);
		if (action == ERROR)
		{
			setError(ERR_SyntaxExpr);
			printError();
			return EXPR_ERROR;
		}

		printf(" %s\n", actions[action]);

		ExprTokenVectorAppend(expr_token_vector, temp_expr_token);
		token++;
	}
	ExprTokenVectorPrint(expr_token_vector);

	ExprTokenVectorFree(expr_token_vector);

	return expr_data_type;
}


void ExprTokenVectorPrint(ExprTokenVector *expr_token_vector)
{
	assert(expr_token_vector);
	//printf("\n");
	ExprToken *expr_token = NULL;

	for (uint32_t i = 0; i < expr_token_vector->used; i++)
	{
		expr_token = ExprTokenVectorAt(expr_token_vector, i);
		printf("%s ", stringifyToken(expr_token->token));
	}
	printf("\n");
}


static inline void convert_to_ExprToken(Token *token, ExprTokenVector *expr_vector)
{
	Symbol *id = NULL;
	assert(token); // just in case
	temp_expr_token.type = TERM;
	temp_expr_token.handle_start = false;

	if (token->type == TT_identifier)
	{
		id = SymbolFind(funcContext, token->str.data);
		if (id) // <loc_var> or <arg> or <function>
		{
			if (check_id_function(id))
				token->type = TT_function;
			else
			{
				temp_expr_token.var_type = LOCAL;
				temp_expr_token.constness = VAR;
			}
		}
		else
		{
			id = SymbolFind(mainContext, token->str.data);
			if (id) // <glob_var> or <function>
			{
				if (id->type == T_FunPointer) // function
				{
					temp_expr_token.type = TERM;
					token->type = TT_function;
				}
				else
				{
					temp_expr_token.var_type = GLOBAL;
					temp_expr_token.constness = VAR;
				}
			}
		}
	}
	if (token->type == TT_minus)
	{
		if (check_unary_minus(expr_vector))
			token->type = TT_unaryMinus;
	}

	temp_expr_token.token = token;
	//
	int lol = type_table[T_String][T_String];
	lol = lol+1;
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
	ExprToken *top_most_term = findTopMostTerm(expr_token_vector);
	int index_1 = token_to_index(top_most_term->token); // top most term on expr. stack
	int index_2 = token_to_index(temp_expr_token.token); // input

	return precedence_table[index_1][index_2];
}


static inline ExprToken* findTopMostTerm(ExprTokenVector *expr_token_vector)
{
	assert(expr_token_vector);
	ExprToken *top_most_term = ExprTokenVectorLast(expr_token_vector);
	while(top_most_term->type != TERM)
		top_most_term--;

	return top_most_term;
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
