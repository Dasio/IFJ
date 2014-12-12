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
#include <stdint.h>
#include <float.h>


#include "system.h"
#include "string.h"

#ifndef SCANNER_H_
#define SCANNER_H_

#include "istream.h"
#include "token.h"

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
	SOS_baseExtract,	// 9
	SOS_baseInString,	// 10
	SOS_colon,			// 11
	SOS_comma,			// 12
	SOS_divide,			// 13
	SOS_dot,			// 14 ADD
	SOS_equality,		// 15
	SOS_greater,		// 16
	SOS_greaterOrEqual,	// 17
	SOS_identifier,		// 18
	SOS_inequality,		// 19
	SOS_keyword,		// 20
	SOS_less,			// 21
	SOS_lessOrEqual,	// 22
	SOS_leftBrace,		// 23
	SOS_leftCurlyBrace,	// 24
	SOS_minus,			// 25
	SOS_multiply,		// 26
	SOS_integer,		// 27
	SOS_plus,			// 28
	SOS_real,			// 29
	SOS_realDot,		// 30
	SOS_realDotValue,	// 31
	SOS_realE,			// 32
	SOS_realESign,		// 33
	SOS_realEValue,		// 34
	SOS_rightBrace,		// 35
	SOS_semicolon,		// 36
	SOS_string,			// 37 ADD
	SOS_stringHashtag,	// 38 ADD
	SOS_stringASCII,	// 39 ADD
	SOS_stringApostrophe,// 40 ADD
	SOS_whitespace		// 41
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

	/** Describes base of value stored in token / string
	  * Used for bin/hex/oct conversion to decimal
	  */
	uint8_t base;

	/**
	 * Temporary value used in ASCII value escaped char in string
	 */
	int ascii_to_char_val;

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
