#include "error.h"
#include "token.h"

/* Global variable in which is stored last error */
SError error;
extern Token token;
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
        case ERR_Unknown:
            printErrorDetails("Unknown error");
            break;
        default:
            printErrorDetails("Unrecognized error");
    }
}

void printErrorDetails(const char *description)
{
    fprintf(stderr,"%s in file \"%s\" at line: %u\n",description,error.file,error.line);
    if(error.state == ERR_Syntax)
    {
        fprintf(stderr,"Current token: %s\n",stringifyToken(&token));
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
