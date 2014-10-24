/* Implementation of scanner
 *
 *
 *  Created on: 28.9.2014
 *      Author:
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifndef ARR_SIZE
#define ARR_SIZE	 50
#endif

#ifndef SCANNER_H_
#define SCANNER_H_

/*
 * Enumeration of possible states of scanner.
 */
typedef enum
{	
	SOS_assigment,
	SOS_colon,
	SOS_comma,
	SOS_devide,
	SOS_dot,
	SOS_equality,
	SOS_EOF,
	SOS_error,
	SOS_greater,
	SOS_greaterOrEqual,
	SOS_identifier,
	SOS_inequality,
	SOS_keyword,
	SOS_less,
	SOS_lessOrEqual,
	SOS_leftBrace,
	SOS_leftCurlyBrace,
	SOS_leftSquareBrace,
	SOS_minus,
	SOS_multiply,
	SOS_integer,
	SOS_integerE,
	SOS_integerESign,
	SOS_integerEValue,
	SOS_plus,
	SOS_real,
	SOS_realDot,
	SOS_realE,
	SOS_realESign,
	SOS_realEValue,
	SOS_rightBrace,
	SOS_rightCurlyBrace,
	SOS_rightSquareBrace,
	SOS_start,
	SOS_semicolon,
	SOS_string,
	SOS_stringHashtag,
	SOS_stringASCII,
	SOS_stringApostrophe
}StateOfScanner;

/*
 * Structure which represents one token parsed from the program.
 */
struct token {
	StateOfScanner state;
	char str[ARR_SIZE];
};

typedef struct token Token;

/*
 * Function reads symbols from source and returns
 * one token consisting of these symbols.
 *
 */
Token *GetToken (Token *actToken);

/*
 * Prepares token structure for next token,
 * delete string and set the state of scanner to START.
 *
 */
void EmptyToken(Token *actToken);

/*
 * Adds read symbol at the end of array, except numbers
 * having '0' at the beggining - then replace this symbol
 * with new one.
 */
char *FillString(char *array, char addedSymbol);

/*
 * Function checks if there are some nulls in the beggining of the number
 * and deletes them.
 */
void CheckNulls(char *stringOfNumbers);

/*
 * Opens source file, passed to the function as argument, for processing.
 *
 */
int OpenFile(const char* file);

/*
 * Close source file, passed to the function as argument, for processing.
 *
 */
int CloseFile(FILE *filename);

/*
 * Calls function GetTokens until the EOF is detected and calls function
 * which check if the token is a keyword.
 */
int ParseToTokens(Token *token);

/*
 * Compares token attribute(string) if it is a keyword.
 * If it is, sets the state of token to SOS_keyword.
 */
void IsKeyword(Token *token);


#endif /* SCANNER_H_ */
