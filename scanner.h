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

#include "system.h"
#include "string.h"

#ifndef SCANNER_H_
#define SCANNER_H_

#include "istream.h"

/*
 * Enumeration of possible states of scanner.
 */
typedef enum
{
	// Special states
	SOS_start = 0,
	SOS_error = 1,
	SOS_EOF = 2,

	// Splitting state, not used, only for comparing
	SOS_statesplitter,

	// Terminal states
	SOS_assignment = 8,
	SOS_colon,			// 9
	SOS_comma,			// 10
	SOS_divide,			// 11
	SOS_equality,		// 12
	SOS_greater,		// 13
	SOS_greaterOrEqual,	// 14
	SOS_identifier,		// 15
	SOS_inequality,		// 16
	SOS_keyword,		// 17
	SOS_less,			// 18
	SOS_lessOrEqual,	// 19
	SOS_leftBrace,		// 20
	SOS_leftCurlyBrace,	// 21
	SOS_leftSquareBrace,// 22
	SOS_minus,			// 23
	SOS_multiply,		// 24
	SOS_integer,		// 25
	SOS_integerE,		// 26
	SOS_integerESign,	// 27
	SOS_integerEValue,	// 28
	SOS_plus,			// 29
	SOS_real,			// 30
	SOS_realDot,		// 31
	SOS_realE,			// 32
	SOS_realESign,		// 33
	SOS_realEValue,		// 34
	SOS_rightBrace,		// 35
	SOS_rightCurlyBrace,// 36
	SOS_rightSquareBrace,	// 37
	SOS_semicolon,		// 38
	SOS_whitespace		// 39
} stateOfScanner;

// Token header requires scanner states to be defined
#include "token.h"

typedef struct
{
	/** Immediate state of scanner */
	stateOfScanner state;

	/** Flag if token has been found */
	bool foundToken;

	/** Type representing final type of token
	  * (conversion after getting token)
	  */
	TokenType convertTo;

	/** Source code source */
	IStream input;
} Scanner;

/**
 * Returns copy of type Scanner, initializes IStream inside
 * @return Initialized Scanner
 */
Scanner initScanner();

/**
 * Destroy's IStream and nullifies Scanner
 * @param Pointer to scanner
 */
void destroyScanner(Scanner *scanner);

/**
 * Tests scanner's state for EOF
 * @param  scanner Pointer to scanner
 * @return         Whether scanner reached end of input
 */
inline bool scannerFinished(Scanner *scanner) {
	return scanner->state == SOS_EOF || scanner->state == SOS_error;
}

/*
 * Function reads symbols from source and returns
 * one token consisting of these symbols.
 *
 */
Token getToken(Scanner *scanner);

/**
 * Processes one input symbol, one step of FSM
 * @param  token Pointer to token
 * @param  c     Symbol from input
 * @return       [description]
 */
bool processNextSymbol(Scanner *scanner, Token *token, char symbol);

/**
 * Prints basic info about scanner, newline at end
 * @param scanner Pointer to scanner
 */
void scannerInfo(Scanner *scanner);

/**
 * Returns keyword type, which is decided from String, Key_none is
 * special case in which String is not keyword.
 * @param  str Pointer to String
 * @return     Keyword type, Key_none if no keyword found
 */
KeywordTokenType identifierToKeyword(String *str);


#endif /* SCANNER_H_ */
