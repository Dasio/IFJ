#include "error.h"
#include "token.h"

/* Global variable in which is stored last error */
SError error;
extern Token *token;

/* Error code to return code conversion table */
static const int returnCodeTable[] = {
	[ERR_None]              = 0,
	[ERR_Allocation]        = 99,
	[ERR_CannotOpenFile]    = 9,

	// Lexical analysis
	[ERR_Lexical]           = 1,
	[ERR_LexicalConversion] = 1,

	// Parser
	[ERR_Syntax]            = 2,
	[ERR_RedefVar]          = 3,
	[ERR_RedefFunc]         = 3,
	[ERR_DeclrFunc]         = 3,
	[ERR_BadDefArg]         = 3,
	[ERR_NoDefFunc]         = 3,
	[ERR_BuiltFuncAsID]		= 3,
	[ERR_VarAsFunc]			= 3,
	[ERR_ReadBool]			= 4,
	// Expression
	[ERR_SyntaxExpr]		= 2,
	[ERR_PrecedenceTable]	= 2,
	[ERR_Reduction]			= 2,
	[ERR_TypeCompatibility]	= 4,
	[ERR_TypeCompatibilityArg]	= 4,
	[ERR_UndefVarOrFunction]= 3,

	// Interpreter
	[ERR_UnknownInstruction]= 99,
	[ERR_UnitializedAccess] = 7,
	[ERR_DivisionByZero]	= 8,
	[ERR_ReadInput]			= 6,

	// Other
	[ERR_OutOfRange]        = 9,
	[ERR_Unknown]           = 9

};

void printError()
{
	switch(error.state) {
		case ERR_None:
			return;
		case ERR_CannotOpenFile:
			printErrorDetails("Cannot open specified file.");
			break;
		case ERR_Lexical:
			printErrorDetails("Invalid input file, "
							  "lexical analysis cannot proceed");
			break;
		case ERR_Syntax:
			printErrorDetails("Syntax error");
			break;
		case ERR_Unknown:
			printErrorDetails("Unknown error");
			break;
		case ERR_RedefVar:
			printErrorDetails("Variable was redefined");
			break;
		case ERR_RedefFunc:
			printErrorDetails("Function was already defined, can't be defined again");
			break;
		case ERR_DeclrFunc:
			printErrorDetails("Function can't be declared more than one time");
			break;
		case ERR_BadDefArg:
			printErrorDetails("Header of function definition don't match with declaration");
			break;
		case ERR_NoDefFunc:
			printErrorDetails("Function was declared, but afterward it wasn't defined");
			break;
		case ERR_BuiltFuncAsID:
			printErrorDetails("Built-in function can't be used where identifier is expected");
			break;
		case ERR_SyntaxExpr:
			printErrorDetails("Error in syntax of expression");
			break;
		case ERR_PrecedenceTable:
			printErrorDetails("Error in syntax detected by precedence table");
			break;
		case ERR_Reduction:
			printErrorDetails("Error in syntax detected during reduction");
			break;
		case ERR_TypeCompatibility:
			printErrorDetails("Error in data type of some operand");
			break;
		case ERR_TypeCompatibilityArg:
			printErrorDetails("Error in data type of some argument");
			break;
		case ERR_UndefVarOrFunction:
			printErrorDetails("Undefined variable or function");
			break;
		case ERR_DivisionByZero:
			printErrorDetails("You can't divide by zero !");
			break;
		case ERR_UnitializedAccess:
			printErrorDetails("Uninitialized acces.");
			break;
		case ERR_ReadBool:
			printErrorDetails("Cant't read input into bool variable");
			break;
		case ERR_VarAsFunc:
			printErrorDetails("Local variable name can't be same as function name");
			break;
		case ERR_ReadInput:
			printErrorDetails("Wrong input");
			break;
		case ERR_OutOfRange:
			printErrorDetails("Out of range");
			break;
		default:
			printErrorDetails("Unrecognized error");
	}
}

void printErrorDetails(const char *description)
{
	fprintf(stderr,"%s in file \"%s\" at line: %u\n",description,error.file,error.line);
	if(error.state == ERR_Syntax || error.state == ERR_SyntaxExpr)
	{
	 fprintf(stderr,"Current token: %s\n",stringifyToken(token));
	}
}

void setErrorDetails(EErrorStates state, unsigned line, char *file)
{
	error.state = state;
	error.line = line;
	error.file = file;
}

EErrorStates getError()
{
	return error.state;
}

int getReturnError()
{
	if(error.state >= ERR_None || error.state <= ERR_Unknown)
		return returnCodeTable[error.state];
	else
		return returnCodeTable[ERR_Unknown];
}
