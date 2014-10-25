/**
 * Module for manipulating with tokens
 */

#ifndef _TOKEN_H
#define _TOKEN_H

	/**
	 * Enum codes for all tokens, keywords are nested
	 */
	typedef enum {
		/** Regular tokens */
		TT_colon,
		TT_comma,
		TT_division,
		TT_equality,
		TT_greater,
		TT_less,
		TT_leftBrace,
		TT_leftCurlyBrace,
		TT_leftSquareBrace,
		TT_multiply,
		TT_plus,
		TT_rightBrace,
		TT_rightCurlyBrace,
		TT_rightSquareBrace,
		TT_semicolon,

		/** Special tokens, corresponding element from union */
		TT_keyword,
		TT_real,
		TT_int,
		TT_string,

		/** Special special token, default */
		TT_empty
	} TokenType;

	/**
	 * Enum of keyword tokens
	 */
	typedef enum {
		Key_begin,
		Key_boolean,
		Key_div,
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
		Key_write
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
			KeywordTokenType keywordToken;
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

	/**
	 * Prints basic info about token
	 * @param token Pointer to token
	 */
	void tokenInfo(Token *token);

#endif
