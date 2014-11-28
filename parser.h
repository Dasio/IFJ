#ifndef PARSER_H
#define PARSER_H

#include "scanner.h"
#include "symbol.h"
#include "error.h"
#include "stack.h"
#include "expr.h"

void parse();
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
void term_list();
void terms(uint8_t next);

/**
 * @param1: 1 if stmt() was called from stmt_empty()
 * @return: 1 if epsilon rule was used, else 0
 */
uint8_t stmt(uint8_t empty);

/**
 * @return: 1 if epsilon rule was used, else 0
 */
uint8_t if_n();

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
