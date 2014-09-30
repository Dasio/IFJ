#ifndef ERROR_H
#define ERROR_H

#include <stdio.h>
#include <stdint.h>

#define setError(state) setErrorDetails(state, __LINE__, __FILE__);

/** Enumeration for errors that could occur */
typedef enum
{
    ERR_None,
    ERR_Unknown,
} EErrorStates;

/** Structure that holds information about error */
typedef struct 
{
    EErrorStates state;
    unsigned line;
    char *file;
} SError;

void printError();
void printErrorDetails(const char *description);
void setErrorDetails(EErrorStates state, uint32_t line, char *file);

#endif
