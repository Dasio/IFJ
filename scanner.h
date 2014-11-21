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
#include "token.h"
#include "vector.h"

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
	SOS_dot,			// 12 ADD
	SOS_equality,		// 13
	SOS_greater,		// 14
	SOS_greaterOrEqual,	// 15
	SOS_identifier,		// 16
	SOS_inequality,		// 17
	SOS_keyword,		// 18
	SOS_less,			// 19
	SOS_lessOrEqual,	// 20
	SOS_leftBrace,		// 21
	SOS_leftCurlyBrace,	// 22
	SOS_leftSquareBrace,// 23
	SOS_minus,			// 24
	SOS_multiply,		// 25
	SOS_integer,		// 26
	SOS_integerE,		// 27
	SOS_integerESign,	// 28
	SOS_integerEValue,	// 29
	SOS_plus,			// 30
	SOS_real,			// 31
	SOS_realDot,		// 32
	SOS_realE,			// 33
	SOS_realESign,		// 34
	SOS_realEValue,		// 35
	SOS_rightBrace,		// 36
	SOS_rightCurlyBrace,// 37
	SOS_rightSquareBrace,	// 38
	SOS_semicolon,		// 39
	SOS_string,			// 40 ADD
	SOS_stringHashtag,	// 41 ADD
	SOS_stringASCII,	// 42 ADD
	SOS_stringApostrophe,// 43 ADD
	SOS_whitespace		// 44
} stateOfScanner;

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
 * Returns one token parsed from scanner.
 * @param  scanner Pointer to initialized scanner
 * @return         Token type filled with neccessary data
 */
Token getToken(Scanner *scanner);

TokenVector *getTokenVector(Scanner *scanner);

/**
 * Destroy every token in vector and also vector itself
 * @param tokVect Pointer to vector
 */
void destroyTokenVector(TokenVector *tokVect);

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
