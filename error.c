#include "error.h"
#include "token.h"

/* Global variable in which is stored last error */
SError error;
extern Token *token;

void printError()
{
    switch(error.state) {
        case ERR_None:
            return;
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
