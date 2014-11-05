
#include "scanner.h"

void scannerInfo(Scanner *scanner)
{
	assert(scanner);
	//printf("Scanner in state %s\n", STATECODES[scanner->state]);
	printf("Scanner in state %d\n", scanner->state);
}

Scanner initScanner()
{
	Scanner s = {
		.state = SOS_start,
		.foundToken = false,
		.input = initIStream()
	};

	return s;
}

void destroyScanner(Scanner *scanner)
{
	assert(scanner);

	scanner->state = SOS_EOF;
	destroyIStream(&scanner->input);
}

/**
 * Resets scanner's attributes, ready for next symbols
 * @param scanner Pointer to scanner
 */
static inline void resetScanner(Scanner *scanner)
{
	scanner->foundToken = false;
	scanner->state = SOS_start;
	scanner->convertTo = TT_empty;
}

extern inline bool scannerFinished(Scanner *scanner);

Token getToken(Scanner *scanner)
{
	assert(scanner);
	assert(scanner->state != SOS_error);

	int symbol;
	bool char_accepted;

	Token token = initToken();

	// Passing char-by-char through FSM
	while( (symbol = nextChar(&scanner->input)) != EOF) {
		// Pass character
		char_accepted = processNextSymbol(scanner, &token, symbol);

		if(scanner->state == SOS_error) {
			break;
		}

		// Returning symbol if not accepted
		if(!char_accepted) {
			returnChar(&scanner->input, symbol);

			scanner->state = SOS_start;
		}

		// Returning token if FSM decided so
		if(scanner->foundToken) {
			// Cleanup
			resetScanner(scanner);
			break;
		}

	}

	/**
	 * Identifier -> Keyword conversion,
	 * identifierToKeyword(String) returns TT_identifier if not keyword
	 */
	if(token.type == TT_identifier) {
		KeywordTokenType kword = identifierToKeyword(&token.str);

		if(kword != Key_none) {
			destroyString(&token.str);

			token.type = TT_keyword;
			token.keywordToken = kword;
		}
	}

	// TODO: Conversion

	return token;
}

/**
 * "Conversion table" for char to state.
 * TODO: Refactor with array
 * @param	symbol
 * @return				stateOfScanner
 */
static inline stateOfScanner symbolToState(char symbol)
{
	switch (symbol) {
		case ':': {
			return SOS_colon;
		}
		case ',': {
			return SOS_comma;
		}
		case '/': {
			return SOS_divide;
		}
		case '=': {
			return SOS_equality;
		}
		case '>': {
			return SOS_greater;
		}
		case '<': {
			return SOS_less;
		}
		case '(': {
			return SOS_leftBrace;
		}
		case '{': {
			return SOS_leftCurlyBrace;
		}
		case '[': {
			return SOS_leftSquareBrace;
		}
		case '-': {
			return SOS_minus;
		}
		case '*': {
			return SOS_multiply;
		}
		case '+': {
			return SOS_plus;
		}
		case ')': {
			return SOS_rightBrace;
		}
		case '}': {
			return SOS_rightCurlyBrace;
		}
		case ']': {
			return SOS_rightSquareBrace;
		}
		case ';': {
			return SOS_semicolon;
		}
		default:
			return SOS_error;
	}
}

#define append_symbol() appendCharToToken(token, symbol)
#define setState(new_state) scanner->state = new_state
#define terminalState() scanner->foundToken = true
#define convertTokenTo(t) scanner->convertTo = t; token->type = (TokenType) t

extern inline void appendCharToToken(Token *token, char c);

bool processNextSymbol(Scanner *scanner, Token *token, char symbol)
{
	assert(scanner->state != SOS_error);

	switch(scanner->state) {
		case SOS_start: {
			// TODO : Refactor with pre-filled array of stateOfScanner
			if (isspace(symbol)) {
				// Whitespace
				return true;
			}
			else if(isalpha(symbol) || symbol == '_') {
				setState(SOS_identifier);
				token->type = (TokenType) TT_identifier;

				append_symbol();
			}
			else if(isdigit(symbol)) {
				setState(SOS_integer);

				convertTokenTo(TT_integer);
				append_symbol();
			}
			else {
				// Single symbol token (+ - * / = etc.)
				setState(symbolToState(symbol));

				// Either one state is returned or SOS_error,
				// error state is managed one level up
				if(scanner->state != SOS_error) {
					assert(token->type == TT_empty);

					token->type = (TokenType) scanner->state;
					// Terminal state is assigned in default at the end
				}
			}
			return true;
		}
		case SOS_colon: {
			if (symbol == '=') {
				//setState(SOS_assignment); // not neccesary
				token->type = (TokenType) SOS_assignment;
				terminalState();

				return true;
			}
			else {
				token->type = (TokenType) SOS_colon;
				terminalState();

				return false;
			}
		}
		case SOS_real: {
			if (isdigit(symbol)) {
				// Token already type'd as real
				append_symbol();

				return true;
			}
			else {
				switch(symbol) {
					case 'e':
					case 'E': {
						setState(SOS_realE);
						append_symbol();

						return true;
					}
					default: {
						return false;
					}
				}
			}
		}
		case SOS_realDot: {
			if (isdigit(symbol)) {
				setState(SOS_real);
				append_symbol();

				return true;
			}
			else {
				setState(SOS_error);
				terminalState();

				setError(ERR_Lexical);
				fprintf(stderr, "Wrong decimal part of number\n");

				return false;
			}
		}
		case SOS_realE: {
			if (isdigit(symbol)) {
				setState(SOS_realEValue);
				append_symbol();

				return true;
			}
			else if (symbol == '+' || symbol == '-') {
				setState(SOS_realESign);
				append_symbol();

				return true;
			}
			else {
				setState(SOS_error);
				terminalState();

				setError(ERR_Lexical);
				fprintf(stderr, "Wrong E exponent value with real\n");

				terminalState();
				return false;
			}
		}

		case SOS_realESign: {
			if (isdigit(symbol)) {
				setState(SOS_realEValue);
				append_symbol();

				return true;
			}
			else {
				setState(SOS_error);
				terminalState();

				setError(ERR_Lexical);
				fprintf(stderr, "Wrong exponent value with real\n");

				return false;
			}
		}

		case SOS_realEValue: {
			// TODO: cover zeroes in 20.2E+005
			if (isdigit(symbol)) {
				append_symbol();

				return true;
			}
			else {
				terminalState();

				return false;
			}
		}

		case SOS_greater: {
			if (symbol == '=') {
				token->type = (TokenType) SOS_greaterOrEqual;
				terminalState();

				return true;
			}
			else {
				terminalState();

				return false;
			}
		}

		case SOS_identifier: {
			if (isalnum(symbol) || (symbol == '_')) {
				append_symbol();

				return true;
			}
			else {
				terminalState();

				return false;
			}
		}

		case SOS_leftCurlyBrace: {
			if (symbol == '}') {
				// Escaping out of comment
				setState(SOS_start);
			}
			token->type = TT_empty;
			return true;
		}

		case SOS_less: {
			if (symbol == '=') {
				setState(SOS_lessOrEqual);
				token->type = (TokenType) SOS_lessOrEqual;
				terminalState();

				return true;
			}
			else if (symbol == '>') {
				setState(SOS_inequality);
				token->type = (TokenType) SOS_inequality;
				terminalState();

				return true;
			}
			else {
				terminalState();

				return false;
			}
		}

		case SOS_integer: {
			if (isdigit(symbol)) {
				// Prefix zeroes skipping
				if(atString(&token->str, 0) == '0') {
					setAtString(&token->str, 0, symbol);
				}
				else {
					append_symbol();
				}
				return true;
			}
			else {
				switch (symbol) {
					case 'e':
					case 'E': {
						setState(SOS_integerE);

						token->type = (TokenType) TT_real;
						scanner->convertTo = TT_real;

						append_symbol();

						return true;
					}
					case '.': {
						setState(SOS_realDot);

						token->type = (TokenType) TT_real;
						scanner->convertTo = TT_real;

						append_symbol();

						return true;
					}
					default: {
						terminalState();

						return false;
					}
				}
				return true;
			}
		}

		//expects value of exponent, otherwise, an error occurs
		case SOS_integerE: {
			if (isdigit(symbol)) {
				setState(SOS_integerEValue);
				append_symbol();

				return true;
			}
			else if (symbol == '+' || symbol == '-') {
				setState(SOS_integerESign);
				append_symbol();

				return true;
			}
			else {
				setState(SOS_error);

				terminalState();

				setError(ERR_Lexical);
				fprintf(stderr, "Wrong E exponent value\n");

				return false;
			}
		}

		//expects value of exponent, otherwise, an error occurs
		case SOS_integerESign: {
			if (isdigit(symbol)) {
				setState(SOS_integerEValue);
				append_symbol();

				return true;
			}
			else {
				setState(SOS_error);

				terminalState();

				setError(ERR_Lexical);
				fprintf(stderr, "Wrong exponent value with integer\n");

				return false;
			}
		}

		case SOS_integerEValue: {
			// TODO : Cover zeros in 20E+005
			if (isdigit(symbol)) {
				append_symbol();

				return true;
			}
			else {
				terminalState();

				return false;
			}
		}

		// TODO: Fix strings !!
			// case (SOS_string): {
			// 	if (symbol == '\'') {
			// 		actToken->state = SOS_stringApostrophe;
			// 		break;
			// 	}
			// 	else if (symbol > 31 && symbol <= 255) {
			// 		FillString(actToken->str,symbol);
			// 		break;
			// 	}
			// 	else {
			// 		actToken->state = SOS_error;
			// 		return actToken;
			// 	}
			// }
			// case (SOS_stringApostrophe): {
			// 	if (symbol == '#') {
			// 		actToken->state = SOS_stringHashtag;
			// 		break;
			// 	}
			// 	// zapise apostrof
			// 	else if (symbol == '\'') {
			// 		actToken->state = SOS_string;
			// 		FillString(actToken->str,symbol);
			// 		break;
			// 	}
			// 	else {
			// 		actToken->state = SOS_string;
			// 		ungetc(symbol,sourceFile);
			// 		return actToken;
			// 	}
			// }
			// case (SOS_stringHashtag): {
			// 	if (symbol == '0')
			// 		break;
			// 	else if (symbol >= '1' && symbol <= '9') {
			// 		actToken->state = SOS_stringASCII;
			// 		value = (value*10) + (symbol - '0');
			// 		break;
			// 	}
			// 	else {
			// 		actToken->state = SOS_error;
			// 		return actToken;
			// 	}
			// }
			// case (SOS_stringASCII): {
			// 	if (symbol >= '0' && symbol <= '9') {
			// 		value = (value*10) + (symbol - '0');
			// 		if (value > 255) {
			// 			actToken->state = SOS_error;
			// 			return actToken;
			// 		}
			// 		break;
			// 	}
			// 	else if (symbol == '\'') {
			// 		actToken->state = SOS_string;
			// 		FillString(actToken->str,(char)value);
			// 		value = 0;
			// 		break;
			// 	}
			// 	else
			// 		actToken->state = SOS_error;
			// 		return actToken;
			// }

		// In case of state with one character long tokens
		default: {
			terminalState();

			return false;
		}
	}
	return true;
}

// Macro for shorter statements
#define keyword_cmp(src) streq(str->data, src)

KeywordTokenType identifierToKeyword(String *str)
{
	// TODO: Use String macro to get letter
	switch (str->data[0]) {
		case 'b': {
			if(keyword_cmp("begin")) {
				return Key_begin;
			}
			if(keyword_cmp("boolean")) {
				return Key_boolean;
			}
			return Key_none;
		}
		case 'd': {
			if(keyword_cmp("div")) {
				return Key_div;
			}
			if(keyword_cmp("do")) {
				return Key_do;
			}
			return Key_none;
		}
		case 'e': {
			if(keyword_cmp("else")) {
				return Key_else;
			}
			if(keyword_cmp("end")) {
				return Key_end;
			}
			return Key_none;
		}
		case 'f': {
			if(keyword_cmp("false")) {
				return Key_false;
			}
			if(keyword_cmp("find")) {
				return Key_find;
			}
			if(keyword_cmp("forward")) {
				return Key_forward;
			}
			if(keyword_cmp("function")) {
				return Key_function;
			}
			return Key_none;
		}
		case 'i': {
			if(keyword_cmp("if")) {
				return Key_if;
			}
			if(keyword_cmp("integer")) {
				return Key_integer;
			}
			return Key_none;
		}
		case 'r': {
			if(keyword_cmp("readln")) {
				return Key_readln;
			}
			if(keyword_cmp("real")) {
				return Key_real;
			}
			return Key_none;
		}
		case 's': {
			if(keyword_cmp("sort")) {
				return Key_sort;
			}
			if(keyword_cmp("string")) {
				return Key_string;
			}
			return Key_none;
		}
		case 't': {
			if(keyword_cmp("then")) {
				return Key_then;
			}
			if(keyword_cmp("true")) {
				return Key_true;
			}
			return Key_none;
		}
		case 'v': {
			if(keyword_cmp("var")) {
				return Key_var;
			}
			return Key_none;
		}
		case 'w': {
			if(keyword_cmp("while")) {
				return Key_while;
			}
			if(keyword_cmp("write")) {
				return Key_write;
			}
			return Key_none;
		}
	}
	return Key_none;
}

