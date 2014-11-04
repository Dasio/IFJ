#ifndef PARSER_H
#define PARSER_H

#include "scanner.h"
#include "error.h"

void parse();
void program();
void var_declr();
void func();
void compound_stmt(uint8_t semicolon);
void var_def(uint8_t next);
void forward();
void param_list();
void params(uint8_t next);

/**
 * @param1: 1 if stmt() was called from stmt_empty()
 * @return: 1 if epsilon rule was used, else 0
 */
uint8_t stmt(uint8_t empty);
void stmt_empty();
void stmt_list();
void expr();
/**
 * @return: 1 if epsilon rule was used, else 0
 */
uint8_t if_n();

#endif
