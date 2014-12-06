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
	scanner->ascii_to_char_val = 0;
	scanner->base = 10;
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
			setError(ERR_Lexical);
			break;
		}

		// Returning symbol if not accepted
		if(!char_accepted) {
			returnChar(&scanner->input, symbol);

			scanner->state = SOS_start;
		}

		// Returning token if FSM decided so
		if(scanner->foundToken) {
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
			//destroyString(&token.str);

			token.type = TT_keyword;
			token.keyword_token = kword;
		}
	}

	switch(scanner->convertTo) {
		case TT_real: {
			String str = token.str;

			char *err = NULL;
			token.r = strtod(str.data, &err);

			if(*err != 0)
				setError(ERR_LexicalConversion);

			destroyString(&str);

			token.type = TT_real;

			break;
		}
		case TT_integer: {
			String str = token.str;

			char *err = NULL;

			if(scanner->base == 10 || scanner->base == 2 ||
				scanner->base == 8 || scanner->base == 16) {

				token.n = (int32_t) strtol(str.data, &err, scanner->base);
				if(*err != 0) {
					setError(ERR_LexicalConversion);
					fprintf(stderr, "strtol() conversion failed\n");
				}
			} 
			else {
				setError(ERR_LexicalConversion);
			}

			destroyString(&str);

			token.type = TT_integer;

			break;
		}
		default: {
			break;
		}
	}

	if(token.type == TT_keyword) {
		switch(token.keyword_token) {
			case Key_true: {

				destroyString(&token.str);

				token.type = TT_bool;
				token.n = 1;

				break;
			}
			case Key_false: {

				destroyString(&token.str);

				token.type = TT_bool;
				token.n = 0;

				break;
			}
			default: {
				break;
			}
		}
	}

	if (scanner->state == SOS_leftCurlyBrace) {
		setError(ERR_Lexical);
		fprintf(stderr, "Missing right curly brace to finish comment\n");
	}

	// Cleanup
	resetScanner(scanner);

	return token;
}

TokenVector* getTokenVector(Scanner *scanner)
{
	Token t;
	TokenVector *tokVect = TokenVectorInit(128);
	while(true) {
		t = getToken(scanner);

		if(getError()) {
			printError();
			// In case of incomplete token; must be also free'd
			TokenVectorAppend(tokVect, t);
			break;
		}
		if(t.type == TT_empty || scannerFinished(scanner))
		{
			TokenVectorAppend(tokVect, t);
			break;
		}

		TokenVectorAppend(tokVect, t);
	};
	return tokVect;
}

void destroyTokenVector(TokenVector *tokVect)
{
	Token *tokenLast = TokenVectorLast(tokVect)+1;
	for(Token *tokenIt = TokenVectorFirst(tokVect); tokenIt != tokenLast; tokenIt++)
		destroyToken(tokenIt);
	TokenVectorFree(tokVect);
}

/**
 * "Conversion table" for char to state.
 * TODO: Refactor with array
 * @param	Pointer to scanner
 * @param   Pointer to token
 * @param   Current symbol
 */
static inline void processSingleCharToken(Scanner *scanner, Token *token, char symbol)
{
	switch (symbol) {
		case ':': {
			scanner->state = SOS_colon;
			token->type = TT_colon;
			return;
		}
		case ',': {
			scanner->state =  SOS_comma;
			token->type = TT_comma;
			return;
		}
		case '.': {
			scanner->state = SOS_dot;
			token->type = TT_dot;
			return;
		}
		case '/': {
			scanner->state =  SOS_divide;
			token->type = TT_division;
			return;
		}
		case '=': {
			scanner->state =  SOS_equality;
			token->type = TT_equality;
			return;
		}
		case '>': {
			scanner->state =  SOS_greater;
			token->type = TT_greater;
			return;
		}
		case '<': {
			scanner->state =  SOS_less;
			token->type = TT_less;
			return;
		}
		case '(': {
			scanner->state =  SOS_leftBrace;
			token->type = TT_leftBrace;
			return;
		}
		case '{': {
			scanner->state =  SOS_leftCurlyBrace;
			token->type = TT_leftCurlyBrace;
			return;
		}
		case '-': {
			scanner->state =  SOS_minus;
			token->type = TT_minus;
			return;
		}
		case '*': {
			scanner->state =  SOS_multiply;
			token->type = TT_multiply;
			return;
		}
		case '+': {
			scanner->state =  SOS_plus;
			token->type = TT_plus;
			return;
		}
		case ')': {
			scanner->state =  SOS_rightBrace;
			token->type = TT_rightBrace;
			return;
		}
		case '}': {
			scanner->state =  SOS_rightCurlyBrace;
			token->type = TT_rightCurlyBrace;
			return;
		}
		case ';': {
			scanner->state =  SOS_semicolon;
			token->type = TT_semicolon;
			return;
		}
		case '\'': {
			scanner->state = SOS_string;
			token->type = TT_string;
			return;
		}
		case '%': {
			scanner->state = SOS_baseExtract;
			scanner->convertTo = TT_integer;
			token->type = TT_integer;
			scanner->base = 2;
			return;
		}
		case '&': {
			scanner->state = SOS_baseExtract;
			scanner->convertTo = TT_integer;
			token->type = TT_integer;
			scanner->base = 8;
			return;
		}
		case '$': {
			scanner->state = SOS_baseExtract;
			scanner->convertTo = TT_integer;
			token->type = TT_integer;
			scanner->base = 16;
			return;
		}
		default: {
			scanner->state =  SOS_error;
			fprintf(stderr, "Invalid character from input\n");
		}
		return;
	}
}

#define append_symbol() appendCharToToken(token, symbol)
#define setState(new_state) scanner->state = new_state
#define terminalState() scanner->foundToken = true
#define convertTokenTo(t) scanner->convertTo = t; token->type = t

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
				token->type = TT_identifier;

				symbol = tolower(symbol);
				append_symbol();
			}
			else if(isdigit(symbol)) {
				setState(SOS_integer);

				convertTokenTo(TT_integer);
				append_symbol();
			}
			else {
				// Single symbol token (+ - * / = etc.)
				// setState(symbolToState(symbol));

				processSingleCharToken(scanner, token, symbol);
				// Either one state is returned or SOS_error,
				// error state is managed one level up
				// if(scanner->state != SOS_error) {
				// 	assert(token->type == TT_empty);

					// token->type = (TokenType) scanner->state;
					// Terminal state is assigned in default at the end
				// }
			}
			return true;
		}
		case SOS_colon: {
			if (symbol == '=') {
				//setState(SOS_assignment); // not neccesary
				token->type = TT_assignment;
				terminalState();

				return true;
			}
			else {
				token->type = TT_colon;
				terminalState();

				return false;
			}
		}
		//integer values
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
				//another possible characters for actual token state
				switch (symbol) {
					case '.': {
						setState(SOS_realDot);
						convertTokenTo(TT_real);

						append_symbol();

						return true;
					}
					case 'e':
					case 'E': {
						setState(SOS_realE);
						convertTokenTo(TT_real);

						append_symbol();

						return true;
					}
					//end of token
					default: {
						terminalState();

						return false;
					}
				}
			}
		}
		/* Real numbers */
		//whole part followed by e/E, expects value of exponent, otherwise, an error occurs
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
			//another characters are not possible
			else {
				setState(SOS_error);
				fprintf(stderr, "Missing exponent value\n");

				return true;
			}
		}
		//whole part of number followed by e/E and +/-, expects exponent value
		case SOS_realESign: {
			if (isdigit(symbol)) {
				setState(SOS_realEValue);
				append_symbol();

				return true;
			}
			//another characters are not possible
			else {
				setState(SOS_error);
				fprintf(stderr, "Missing exponent value of real number\n");

				return true;
			}
		}
		//whole part of number followed by e/E and exponent value
		case SOS_realEValue: {
			if (isdigit(symbol)) {
				// Cover zeros in 20E+005
				if (symbol == '0' && (atString(&token->str, 0) == '0')) {
						;//unnecessary to store 0 again
				}
				else {
					append_symbol();
				}
				return true;
			}
			// end of token
			else {
				terminalState();

				return false;
			}
		}
		//whole part of number followed by dot, expects decimal part
		case SOS_realDot: {
			if (isdigit(symbol)) {
				setState(SOS_realDotValue);
				convertTokenTo(TT_real);

				append_symbol();

				return true;
			}
			//another characters are not possible
			else {
				setState(SOS_error);
				fprintf(stderr, "Missing decimal part of real number\n");

				return true;
			}
		}
		//whole part of number followed by dot with decimal part
		case SOS_realDotValue: {
			if (isdigit(symbol)) {

				append_symbol();
				return true;
			}
			else if ( symbol == 'e' || symbol == 'E') {
				setState(SOS_realE);

				append_symbol();

				return true;
				}
			//end of token
			else {
				terminalState();

				return false;
			}
		}
		/* End of real numbers */

		case SOS_greater: {
			if (symbol == '=') {
				token->type = TT_greaterOrEqual;
				terminalState();

				return true;
			}
			//end of token
			else {
				terminalState();

				return false;
			}
		}
		case SOS_identifier: {
			if (isalnum(symbol) || (symbol == '_')) {
				symbol = tolower(symbol);
				append_symbol();

				return true;
			}
			//end of token
			else {
				terminalState();

				return false;
			}
		}
		//comment
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
				token->type = TT_lessOrEqual;
				terminalState();

				return true;
			}
			else if (symbol == '>') {
				setState(SOS_inequality);
				token->type = TT_inequality;
				terminalState();

				return true;
			}
			//end of token
			else {
				terminalState();

				return false;
			}
		}
		/* Strings begin here */
		case SOS_string: {
			// Escape sequence or apostrophe may occurs
			if (symbol == '\'') {
				setState(SOS_stringApostrophe);

				return true;
			}
			// Regular symbol in string
			else if (symbol > 31) {
				append_symbol();

				return true;
			}
			// Invalid character
			else {
				setState(SOS_error);
				fprintf(stderr, "Invalid character in string literal\n");

				return true;
			}
		}
		//Last char is ' in string
		case SOS_stringApostrophe: {
			if (symbol == '#') {
				setState(SOS_stringHashtag);

				return true;
			}
			// Appends '
			else if (symbol == '\'') {
				setState(SOS_string);
				append_symbol();

				return true;
			}
			// String reached right pair of quote
			else {
				terminalState();

				return false;
			}
		}
		//Last char # in string, expects escape seq.
		case SOS_stringHashtag: {
			//skipping first nulls
			if (symbol == '0')
				return true;

			else if (symbol >= '1' && symbol <= '9') {
				setState(SOS_stringASCII);
				scanner->ascii_to_char_val = (scanner->ascii_to_char_val*10) + (symbol - '0');

				return true;
			}
			//Escape sequences in another than base 10
			switch (symbol) {
				case '%': {
					scanner->state = SOS_baseInString;
					scanner->base = 2;

					return true;
				}
				case '&': {
					scanner->state = SOS_baseInString;
					scanner->base = 8;

					return true;

				}
				case '$': {
					scanner->state = SOS_baseInString;
					scanner->base = 16;

					return true;					
				}
				//another characters are not possible
				default:
					setState(SOS_error);
					fprintf(stderr, "Wrong escape sequention behind # in string\n");

					return true;
			}
		}
		//Escape seq. in string between '# '
		case SOS_stringASCII: {
			if (symbol >= '0' && symbol <= '9') {
				scanner->ascii_to_char_val = (scanner->ascii_to_char_val*10) + (symbol - '0');

				return true;
			}
			//test for valid escape sequention 
			if (scanner->ascii_to_char_val < 1 || scanner->ascii_to_char_val > 255) {
				setState(SOS_error);
				fprintf(stderr, "Wrong value to specify escape sequention (1-255)\n");

				return true;
			}
			//end of escape seq., go back to string literal
			else if (symbol == '\'') {
				setState(SOS_string);
				appendCharToToken(token, (char)scanner->ascii_to_char_val);
				scanner->ascii_to_char_val = 0;

				return true;
			}
			//another characters are not possible
			else {
				setState(SOS_error);
				fprintf(stderr, "Wrong escape sequention in string\n");

				return true;
			}
		}
		//Escape seq. in another than base 10 in string between '# '
		case SOS_baseInString: {
			//skipping first nulls
			if (symbol == '0' && scanner->ascii_to_char_val == 0) {
				
				return true;
			}
			switch (scanner->base) {
				case 2: {
					if ( symbol == '0' || symbol == '1' ) {
						scanner->ascii_to_char_val = (scanner->ascii_to_char_val*2) + (symbol - '0');

						return true;
					}
					break;
				}
				case 8: {
					if (symbol >= '0' && symbol <= '7') {
						scanner->ascii_to_char_val = (scanner->ascii_to_char_val*8) + (symbol - '0');

						return true;
					}
					break;
				}
				case 16: {
					if (symbol >= '0' && symbol <= '9') {
						scanner->ascii_to_char_val = (scanner->ascii_to_char_val*16) + (symbol - '0');

						return true;
					}
					if (symbol >= 'A' && symbol <= 'F') {// used -'7' because for ex. 'A' has to be 10
						scanner->ascii_to_char_val = (scanner->ascii_to_char_val*16) + (symbol - '7');

						return true;
					}
					if (symbol >= 'a' && symbol <= 'f') {// used -'W' because for ex. 'a' repr. 97, but has to be 10
						scanner->ascii_to_char_val = (scanner->ascii_to_char_val*16) + (symbol - 'W');

						return true;
					}
					break;
				}
				default: {
					setState(SOS_error);
					fprintf(stderr, "Wrong base for escape sequention (2/8/16)\n");

					return true;
				}
			}
			if (scanner->ascii_to_char_val < 1 || scanner->ascii_to_char_val > 255) {
					setState(SOS_error);
					fprintf(stderr, "Wrong value to specify escape sequention (1-255)\n");

					return true;
			}
			//end of escape seq., go back to string literal
			else if (symbol == '\'') {
				setState(SOS_string);
				appendCharToToken(token, (char)scanner->ascii_to_char_val);
				scanner->ascii_to_char_val = 0;

				return true;
			}
			//another characters are not possible
			else {
				setState(SOS_error);
				fprintf(stderr, "Wrong escape sequention in string\n");

				return true;
			}
		}
		/* Strings end here */

		//Constants with bin/hex/oct base
		case SOS_baseExtract: {
			if (symbol == '0') {
				if(atString(&token->str, 0) == '0') {
					;//unnecessary to store 0 again
				}
				else {
					append_symbol();
				}

				return true;
			}
			else if (scanner->base == 2) {
				if (symbol == '1' ) {
					append_symbol();

					return true;
				}
			}
			else if (scanner->base == 8) {
				if (symbol >= '1' && symbol <= '7') {
					append_symbol();

					return true;
				}
			}
			else if (scanner->base == 16) {
				if ((symbol >= '1' && symbol <= '9') || (symbol >= 'A' && symbol <= 'F') ||
					(symbol >= 'a' && symbol <= 'f')) {
					append_symbol();

					return true;
				}
			}
			//Value is not specified
			if (atString(&token->str,0) == '\0') {
				setState(SOS_error);
				fprintf(stderr, "Unspecified constant\n");

				return true;
			}
			//end of token
			else {
				terminalState();

				return false;
			}
		}
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
		case 'a': {
			if(keyword_cmp("and")) {
				return Key_and;			
			}
			return Key_none;
		}			
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
		case 'n': {
			if(keyword_cmp("not")) {
				return Key_not;			
			}
			return Key_none;
		}
		case 'o': {
			if(keyword_cmp("or")) {
				return Key_or;			
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
			if(keyword_cmp("repeat")) {
				return Key_repeat;
			}			
			return Key_none;
		}
		case 's': {
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
		case 'u': {
			if(keyword_cmp("until")) {
				return Key_until;
			}			
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
		case 'x': {
			if(keyword_cmp("xor")) {
				return Key_xor;			
			}
			return Key_none;
		}
	}
	return Key_none;
}
