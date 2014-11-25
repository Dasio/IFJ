/**
 * Module for manipulating with tokens
 */

#include "system.h"
#include "string.h"

#ifndef _TOKEN_H
#define _TOKEN_H

	/**
	 * Enum codes for all tokens, keywords are nested
	 */
	typedef enum {
		/** Regular tokens, castable from scanner state */
		TT_assignment,
		TT_colon,
		TT_comma,
		TT_division,
		TT_dot,
		TT_equality,
		TT_greater,
		TT_greaterOrEqual,

		TT_inequality,
		TT_less,
		TT_lessOrEqual,
		TT_leftBrace,
		TT_leftCurlyBrace,
		TT_leftSquareBrace,
		TT_minus,
		TT_multiply,
		TT_plus,
		TT_rightBrace,
		TT_rightCurlyBrace,
		TT_rightSquareBrace,
		TT_semicolon,

		TT_special_separator,
		/** Special tokens, corresponding element from union */
		TT_keyword = 64,
		TT_identifier = 128, // 8. bit
		TT_bool,
		TT_integer,
		TT_real,
		TT_string,

		/** Special special token, default */
		TT_empty = 512
	} TokenType;

	/**
	 * Enum of keyword tokens
	 */
	typedef enum {
		Key_begin,
		Key_boolean,
		Key_do,
		Key_else,
		Key_end,
		Key_false,
		Key_find,
		Key_forward,
		Key_function,
		Key_if,
		Key_integer,
		Key_readln,
		Key_real,
		Key_sort,
		Key_string,
		Key_then,
		Key_true,
		Key_var,
		Key_while,
		Key_write,

		Key_none // Special keyword, used in identifierToToken(String)
				 // Must be last
	} KeywordTokenType;

	/**
	 * Type which represents one token parsed
	 * from Scanner with getToken(Scanner *).
	 */
	typedef struct {
		TokenType type;
		union {
			String str;  // string
			double r;  // real
			int32_t n; // integer
			KeywordTokenType keyword_token;
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

#endif
