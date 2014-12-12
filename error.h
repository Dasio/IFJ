#ifndef ERROR_H
#define ERROR_H

#include <stdio.h>

#define setError(state) setErrorDetails(state, __LINE__, __FILE__);

/**
 * Enumeration for errors that could occur.
 * !!! ADD ERROR STATE ALSO TO error.c IN returnCodeTable[]
 * with appropriate return code.
 */
typedef enum
{
	ERR_None = 0,
	ERR_Allocation,
	ERR_CannotOpenFile,    /**< Occurs when IStream cannot open file */

	// Lexical analysis
	ERR_Lexical,           /**< Generic lexical analysis error */
	ERR_LexicalConversion, /**< String -> Real/Integer conversion failure */

	// Parser
	ERR_Syntax,
	ERR_RedefVar,
	ERR_RedefFunc,
	ERR_DeclrFunc,
	ERR_BadDefArg,
	ERR_NoDefFunc,         /**< Function was declared and no defintion was found */
	ERR_ReadBool,
	ERR_VarAsFunc,
	ERR_FuncAsID,

	// Expression
	ERR_SyntaxExpr,
	ERR_PrecedenceTable,
	ERR_Reduction,
	ERR_TypeCompatibility,
	ERR_TypeCompatibilityArg,
	ERR_UndefVarOrFunction,
	ERR_ArgCount,

	// Interpreter
	ERR_UnknownInstruction,
	ERR_UnitializedAccess,
	ERR_DivisionByZero,
	ERR_ReadInput,

	// Other
	ERR_OutOfRange,
	ERR_Unknown,
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
 * Returns bash return code according to state
 * @return Return code
 */
int getReturnError();

#endif
