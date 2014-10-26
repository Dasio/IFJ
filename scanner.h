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
	SOS_colon,
	SOS_comma,
	SOS_divide,
	SOS_equality,
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
	SOS_semicolon,
	SOS_whitespace
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
 * Returns whether string from input is keyword.
 * @param  str Pointer to String
 * @return     True if string is keyword, else false
 */
bool IsKeyword(String *str);


#endif /* SCANNER_H_ */
