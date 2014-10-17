/**
 * Module for manipulating with tokens
 */

#ifndef _TOKEN_H
#define _TOKEN_H
	/**
	 * Type which represents one token parsed
	 * from Scanner with getToken(Scanner *).
	 */

	typedef struct {
		String str;
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
