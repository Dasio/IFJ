#ifndef PARSER_H
#define PARSER_H

#include "scanner.h"
#include "symbol.h"
#include "error.h"
#include "stack.h"
#include "expr.h"
#include "instruction.h"

void parse(TokenVector *tokvect);
void program();
void var_declr();
void var_def(uint8_t next);
void func();
void forward(SymbolType returnType);
void param_def_list();
void params_def(uint8_t next);
void compound_stmt(uint8_t semicolon);
void stmt_list();
void stmt_empty();

/**
 * Process terms with brackets
 * @return Count of parameters for write
 */
uint32_t term_list();

/**
 * Process terms
 * @param  next If 1 TERMS_N else TERMS
 * @return 1-if term was loaded
 */
uint8_t terms(uint8_t next);

/**
 * @param1: 1 if stmt() was called from stmt_empty()
 * @return: 1 if epsilon rule was used, else 0
 */
uint8_t stmt(uint8_t empty);

/**
 * @return: 1 if epsilon rule was used, else 0
 */
uint8_t if_n(Instruction *if1, Instruction *if2);

void readln();
void write();

/**
 * Add function to GST without returnType and stateFunc
 * Add return symbol to LST of function
 * @param name Name of function
 */
void addFunc(char *name);

/**
 * Update info about actual function and check declaration and definition
 * @param returnType Which type is function returning
 * @param funcState  Declaration/Definition
 */
void updateFunc(SymbolType returnType,FuncState funcState);

/**
 * Add argument to function or if is called second time it will check name and type of arguments.
 * @param type Type of argment
 * @param name Name of argument
 */
void addArgToFunc(SymbolType type, char *name);

/**
 * Check if all functions were defined
 */
void checkFuncDefinitions();

/**
 * Add builtin functions
 */
void addBuiltInFunctions();
/**
 * Find symbol in active context, if not found and active context was not function text, then it search in main context(GST)
 * @param  name Name of variable or function
 * @param  scope 0-global, 1-local
 * @return      Pointer to symbol or NULL if not found
 */
Symbol *findVarOrFunc(char *name,VariableType *scope);

static inline SymbolType keywordToSymbol (KeywordTokenType key)
{
    switch(key)
    {
        case Key_boolean:
            return T_bool;
        case Key_integer:
            return T_int;
        case Key_real:
            return T_double;
        case Key_string:
            return T_String;
        default:
            return T_Undefined;
    }
}
#endif
