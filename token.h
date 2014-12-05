/**
 * Module for manipulating with tokens
 */

#include "system.h"
#include "string.h"
#include "vector.h"

#ifndef _TOKEN_H
#define _TOKEN_H

	/**
	 * Enum codes for all tokens, keywords are nested
	 */
	typedef enum {
		/** Regular tokens, castable from scanner state */

		/********************************/
		/*   DONT CHANGE THE ORDER  !!! */
		/********************************/

		/* priority 0 */
		TT_unaryMinus,
		TT_not,

		/* priority 1 */
		TT_multiply,
		TT_division,
		TT_and,

		/* priority 2 */
		TT_plus,
		TT_minus,
		TT_or,
		TT_xor,

		/* priority 3 */
		TT_less,
		TT_greater,
		TT_lessOrEqual,
		TT_greaterOrEqual,
		TT_equality,
		TT_inequality,

		TT_leftBrace,
		TT_rightBrace,
		TT_function, // not used in scanner
		TT_comma,
		TT_empty, // special token, default value
		TT_identifier,
		TT_real,
		TT_integer,
		TT_string,
		TT_bool, // value in "n" (1 = true, 0 = false)
		// TT_bool must stay here

		TT_assignment, // must stay here !!! (size of precedence_table array)
		TT_colon,
		TT_dot,
		TT_semicolon,
		TT_leftCurlyBrace,
		TT_rightCurlyBrace,

		TT_keyword
	} TokenType;

	/**
	 * Enum of keyword tokens
	 */
	typedef enum {
		Key_and,
		Key_begin,
		Key_boolean,
		Key_do,
		Key_else,
		Key_end,
		Key_false,
		Key_forward,
		Key_function,
		Key_if,
		Key_integer,
		Key_not,
		Key_or,
		Key_readln,
		Key_real,
		Key_repeat,
		Key_string,
		Key_then,
		Key_true,
		Key_var,
		Key_until,
		Key_while,
		Key_write,
		Key_xor,

		Key_none // Special keyword, used in identifierToToken(String)
				 // Must be last
	} KeywordTokenType;

	/**
	 * Type which represents one token parsed
	 * from Scanner with getToken(Scanner *).
	 */
	typedef struct {
		TokenType type;
		KeywordTokenType keyword_token;
		union {
			String str;  // string
			double r;  // real
			int32_t n; // integer
		};
	} Token;

	/**
	 * Token constructor, constructs also String.
	 * First malloc is done with appending to string
	 * @return Token structure
	 */
	Token initToken();

	/**
	 * Token destructor, destructs String inside.
	 * @param token Pointer to token
	 */
	void destroyToken(Token *token);


	inline void appendCharToToken(Token *token, char c) {
		assert(token);
		// TODO : Check for current type
		appendCharToString(&token->str, c);
	}
	/**
	 * Prints basic info about token
	 * @param token Pointer to token
	 */
	void tokenInfo(Token *token);

	/**
	 * Converts token's enum type to literals for printing (live debugging).
	 * @param  token Pointer to token
	 * @return       Literal describing token (TT_less -> "<")
	 */
	char *stringifyToken(Token *token);

	/**
	 * Vector generation for type Token
	 */
	GenVectorPrototypes(Token)

#endif
