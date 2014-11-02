#ifndef PARSER_H
#define PARSER_H

#include "scanner.h"
#include "error.h"

void program();
void var_declr();
void func(); //OK
void compound_stmt(uint8_t semicolon);
void var_def(uint8_t next);
void forward();
void param_list();
void params(uint8_t next);
void stmt();
void stmt_list();
void expr();
void if_n();

#endif
