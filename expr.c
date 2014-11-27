#include "expr.h"

//extern void *mem_alloc(size_t len);
extern Token *token;
extern TokenVector *tokenVector;
extern Context *mainContext;
extern Context *funcContext;
extern Context *activeContext;

static ExprToken temp_expr_token;

static inline void convert_to_ExprToken(Token *token);
static inline int token_to_index(Token *token);
static inline int precedence(ExprTokenVector *expr_token_vector);
static inline ExprToken *findTopMostTerm(ExprTokenVector *expr_token_vector);


typedef enum
{
	S,		// shift
	R,		// reduce
	H,		// handle
	E		// error
} TokenPrecedence;
enum { SHIFT = S, REDUCE = R, HANDLE = H, ERROR = E};


static int precedence_table[TT_assignment][TT_assignment] =
{
/*         +   -   *   /   <   >   <=  >=  =   <>  (   )   f   ,   $  var  */
/*  +  */{ R , R , S , S , R , R , R , R , R , R , S , R , R , S , R , S },
/*  -  */{ R , R , S , S , R , R , R , R , R , R , S , R , R , S , R , S },
/*  *  */{ R , R , R , R , R , R , R , R , R , R , S , R , R , S , R , S },
/*  /  */{ R , R , R , R , R , R , R , R , R , R , S , R , R , S , R , S },
/*  <  */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S },
/*  >  */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S },
/*  <= */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S },
/*  >= */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S },
/*  =  */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S },
/*  <> */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S },
/*  (  */{ S , S , S , S , S , S , S , S , S , S , S , H , E , S , H , S },
/*  )  */{ R , R , R , R , R , R , R , R , R , R , E , R , R , E , R , E },
/*  f  */{ E , E , E , E , E , E , E , E , E , E , H , E , E , E , E , E },
/*  ,  */{ S , S , S , S , S , S , S , S , S , S , S , H , E , S , H , S },
/*  $  */{ S , S , S , S , S , S , S , S , S , S , S , E , E , S , E , S },
/* var */{ R , R , R , R , R , R , R , R , R , R , E , R , R , E , R , E }
};

static int type_table[4][4] =
{
/*****************************************************************/
/***********    T_String      T_double      T_int         T_bool  ***/
	/*************************************************************/
/* T_String */{ T_String    , T_Undefined , T_Undefined , T_Undefined },
/* T_double */{ T_Undefined , T_double    , T_double    , T_Undefined },
/*    T_int */{ T_Undefined , T_Undefined , T_String    , T_Undefined },
/*   T_bool */{ T_Undefined , T_Undefined , T_Undefined , T_bool }
};


void expr()
{
	int action;
	token++;


	// TT_minus too if we want to implement unary minus
	if(token->type != TT_leftBrace && !(token->type >= TT_identifier && token->type <= TT_bool))
	{
		setError(ERR_SyntaxExpr);
		printError();
		return;
	}

	ExprTokenVector *expr_token_vector = ExprTokenVectorInit(32);

	assert(tokenVector);
	convert_to_ExprToken(TokenVectorLast(tokenVector)); // add $ to expr. stack
	ExprTokenVectorAppend(expr_token_vector, temp_expr_token); // first token, (empty = $)
	// [$, , , , , ]

	while (token_to_index(token) != TT_empty)
	{
		convert_to_ExprToken(token);
		action = precedence(expr_token_vector);
		if (action == ERROR)
		{
			setError(ERR_SyntaxExpr);
			printError();
			return;
		}

		printf(" %d\n", action);

		ExprTokenVectorAppend(expr_token_vector, temp_expr_token);
		token++;
	}
	ExprTokenVectorPrint(expr_token_vector);

	ExprTokenVectorFree(expr_token_vector);
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

static inline void convert_to_ExprToken(Token *token)
{
	assert(token); // just in case
	temp_expr_token.type = TERM;
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

static inline ExprToken *findTopMostTerm(ExprTokenVector *expr_token_vector)
{
	assert(expr_token_vector);
	ExprToken *top_most_term = ExprTokenVectorLast(expr_token_vector);
	while(top_most_term->type != TERM)
		top_most_term--;

	return top_most_term;
}


GenVectorFunctions(ExprToken)
