#include "error.h"

/* Global variable in which is stored last error */
SError error;

void printError()
{
    switch(error.state) {
        case ERR_None:
            return;
        case ERR_Unknown:
            printErrorDetails("Unknown erorr");
            break;
        default:
            printErrorDetails("Unrecognized error");
    }
}

void printErrorDetails(const char *description)
{
    fprintf(stderr,"%s in file \"%s\" at line: %u\n",description,error.file,error.line);
}

void setErrorDetails(EErrorStates state, uint32_t line, char *file)
{
    error.state = state;
    error.line = line;
    error.file = file;
}

EErrorStates getError()
{
    return error.state;
}
