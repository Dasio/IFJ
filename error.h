#ifndef ERROR_H
#define ERROR_H

#include <stdio.h>

#define setError(state) setErrorDetails(state, __LINE__, __FILE__);

/** Enumeration for errors that could occur */
typedef enum
{
    ERR_None = 0, /**< ERR_None */
    ERR_Allocation, /**<ERR_Allocation */
    ERR_Lexical, /**< ERR_Lexical */
    ERR_Syntax,
    ERR_Unknown, /**< ERR_Unknown */
} EErrorStates;

/** Structure that holds information about error */
typedef struct
{
    EErrorStates state; /**< Which error occured */
    unsigned line; /**< At which line error occured */
    char *file; /**< In which file error occured */
} SError;

/**
 *  Prints to stderr last error
 */
void printError();

/**
 * Prints in which file and line was error
 * @param description Description of error
 */
void printErrorDetails(const char *description);

/**
 * Sets error details based on where macro setError was called
 * @param state Type of error
 * @param line  At which line error occured
 * @param file In which file error occured
 */
void setErrorDetails(EErrorStates state, unsigned line, char *file);

/**
 * @return lastError
 */
EErrorStates getError();

/**
 * Print token from parser
 */
void printToken();
#endif
