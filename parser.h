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
void forward(SymbolType returnType, char *name);
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
Symbol *addFunction(SymbolType returnType,char* name,FuncState funcState);

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
