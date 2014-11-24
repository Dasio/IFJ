#ifndef PARSER_H
#define PARSER_H

#include "scanner.h"
#include "symbol.h"
#include "error.h"
#include "stack.h"

void parse();
void program();
void var_declr();
void func();
void compound_stmt(uint8_t semicolon);
void var_def(uint8_t next);
void forward();
void param_def_list();
void params_def(uint8_t next);

/**
 * @param1: 1 if stmt() was called from stmt_empty()
 * @return: 1 if epsilon rule was used, else 0
 */
uint8_t stmt(uint8_t empty);
void stmt_empty();
void stmt_list();

/**
 * @return: 1 if epsilon rule was used, else 0
 */
uint8_t if_n();

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
