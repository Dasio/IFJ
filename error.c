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

	[ERR_Lexical]           = 1,
	[ERR_LexicalConversion] = 1,

	[ERR_Syntax]            = 2,
	[ERR_SyntaxExpr]        = 2,
	[ERR_RedefVar]          = 3,
	[ERR_RedefFunc]         = 3,
	[ERR_DeclrFunc]         = 3,
	[ERR_BadDefArg]         = 3,
	[ERR_NoDefFunc]         = 3,

	// Interpreter
	[ERR_UnknownInstruction]= 99,
	[ERR_UnitializedAccess] = 7,

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
		case ERR_SyntaxExpr:
			printErrorDetails("Error in syntax of expression");
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
			printErrorDetails("Function was declared, but it afterward it wasn't defined");
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
