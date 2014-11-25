#include "expr.h"
#include "vector.h"

extern Token *token;
Context *mainContext;
Context *funcContext;
Context *activeContext;
/*
if(token-Rtype != TT_integer)
	{
		setError(ERR_Syntax);
		return;
	}
*/


typedef enum
{
	S,		// shift
    R,		// reduce
    H,		// handle
    E,		// error
} TokenPrecedence;

static int precedence_table[TT_assignment][TT_assignment] =
{
/*         +   -   *   /   <   >   <=  >=  =   <>  (   )   f   ,   $  var                     */
/*  +  */{ R , R , S , S , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  -  */{ R , R , S , S , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  *  */{ R , R , R , R , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  /  */{ R , R , R , R , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  <  */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  >  */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  <= */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  >= */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  =  */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  <> */{ S , S , S , S , R , R , R , R , R , R , S , R , R , S , R , S  },
/*  (  */{ S , S , S , S , S , S , S , S , S , S , S , H , E , S , H , S  },
/*  )  */{ R , R , R , R , R , R , R , R , R , R , E , R , R , E , R , E  },
/*  f  */{ E , E , E , E , E , E , E , E , E , E , H , E , E , E , E , E  },
/*  ,  */{ S , S , S , S , S , S , S , S , S , S , S , H , E , S , H , S  },
/*  $  */{ S , S , S , S , S , S , S , S , S , S , S , E , E , S , E , S  },
/* var */{ R , R , R , R , R , R , R , R , R , R , E , R , R , E , R , E  }
};


void expr()
{
	TokenVector *token_vector = TokenInitVector(32);
	Token empty = initToken();
	TokenVectorAppend(token_vector, empty); // first token, (empty = $)

	token++;
	TokenVectorAppend(token_vector, *token);

	ExprTokenVectorPrint(token_vector);

	// if(is_term(token)) // Term ?
	// {
	// 	setError(ERR_Syntax);
	// 	return;
	// }

	precedence(TT_plus,TT_plus)
}


void ExprTokenVectorPrint(ExprTokenVector *token_vector)
{
	//printf("\n");

	for (uint32_t i = 0; i < token_vector->used; i++)
	{
		printf("%s ", stringifyToken(TokenVectorAt(token_vector, i)));
	}
	printf("\n");
}
