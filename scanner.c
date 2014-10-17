
#include "scanner.h"

typedef enum
{
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
}Keyword;

// https://gcc.gnu.org/onlinedocs/cpp/Stringification.html
// Hack for generating states as strings
#define xstr(s) str(s)
#define str(s) #s

#define state_translation_gen(name) [SOS_##name] = str(name)

/**
 * Array of translations from int stateOfScanner
 * to human reader string with name of state itself
 */
const char *STATECODES[] =
{

	state_translation_gen(start),
	state_translation_gen(error),
	state_translation_gen(EOF),

	state_translation_gen(statesplitter),

	state_translation_gen(assignment),
	state_translation_gen(colon),
	state_translation_gen(comma),
	state_translation_gen(divide),
	state_translation_gen(equality),
	state_translation_gen(greater),
	state_translation_gen(greaterOrEqual),
	state_translation_gen(identifier),
	state_translation_gen(inequality),
	state_translation_gen(keyword),
	state_translation_gen(less),
	state_translation_gen(lessOrEqual),
	state_translation_gen(leftBrace),
	state_translation_gen(leftCurlyBrace),
	state_translation_gen(leftSquareBrace),
	state_translation_gen(minus),
	state_translation_gen(multiply),
	state_translation_gen(integer),
	state_translation_gen(integerE),
	state_translation_gen(integerESign),
	state_translation_gen(integerEValue),
	state_translation_gen(plus),
	state_translation_gen(real),
	state_translation_gen(realDot),
	state_translation_gen(realE),
	state_translation_gen(realESign),
	state_translation_gen(realEValue),
	state_translation_gen(rightBrace),
	state_translation_gen(rightCurlyBrace),
	state_translation_gen(rightSquareBrace),
	state_translation_gen(semicolon),
	state_translation_gen(whitespace)
};

void scannerInfo(Scanner *scanner) {
	assert(scanner);
	printf("Scanner in state %s\n", STATECODES[scanner->state]);
}

Scanner initScanner()
{
	Scanner s = {
		.state = SOS_start,
		.input = initIStream()
	};

	return s;
}

void destroyScanner(Scanner *scanner) {
	assert(scanner);

	scanner->state = SOS_EOF;
	destroyIStream(&scanner->input);
}

Token getToken(Scanner *scanner)
{
	assert(scanner);

	int symbol;
	bool char_accepted;

	Token token = initToken();

	// Through every
	while( (symbol = nextChar(&scanner->input)) != EOF) {
		char_accepted = processNextSymbol(scanner, &token, symbol);

		assert(scanner->state != SOS_error);

		// FIXME: Need condition to detect when token is filled

		if(!char_accepted) {
			returnChar(&scanner->input, symbol);

			printf("Returning char ASCII %i\n", (int) symbol);
			tokenInfo(&token);
			scannerInfo(scanner);

			scanner->state = SOS_start;
		}
	}

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
		/*case '-': {
			scanner->state = SOS_minus;
			//actToken->str[0] = symbol;
			break;
		}*/
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

#define append_symbol() appendCharToString(&token->str, symbol)
#define setState(new_state) scanner->state = new_state

bool processNextSymbol(Scanner *scanner, Token *token, char symbol)
{
	switch(scanner->state) {
		case SOS_start: {
			// TODO : Refactor with pre-filled array of stateOfScanner
			if (isblank(symbol)) {
				return true;
			}
			else if(isalpha(symbol) || symbol == '_') {
				scanner->state = SOS_identifier;
				append_symbol();
			}
			else if(isdigit(symbol)) {
				scanner->state = SOS_integer;
			}
			else {
				scanner->state = symbolToState(symbol);
			}
			return true;
		}
		case SOS_colon: {
			if (symbol == '=') {
				setState(SOS_assignment);
				return true;
			}
			else {
				return false;
			}
		}
		case SOS_real: {
			if (isdigit(symbol)) {
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
				// TODO: Error propagation
				fprintf(stderr, "Wrong decimal part of number\n");
				return false;
			}
		}
		case SOS_realE: {
			if (isdigit(symbol)) {
				setState(SOS_realEValue);
				append_symbol();
				return false;
			}
			else if (symbol == '+' || symbol == '-') {
				setState(SOS_realESign);
				append_symbol();
				return true;
			}
			else {
				setState(SOS_error);
				// TODO: Error propagation
				fprintf(stderr, "Wrong E exponent value with real\n");
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
				// TODO: Error propagation
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
				return false;
			}
		}

		case SOS_greater: {
			if (symbol == '=') {
				setState(SOS_greaterOrEqual);
				return true;
			}
			else {
				return false;
			}
		}

		case SOS_identifier: {
			if (isalnum(symbol) || (symbol == '_')) {
				append_symbol();
				return true;
			}
			else {
				return false;
			}
		}

		case SOS_leftCurlyBrace: {
			if (symbol == '}') {
				// Escaping out of comment
				setState(SOS_start);
			}
			return true;
		}

		case SOS_less: {
			if (symbol == '=') {
				setState(SOS_lessOrEqual);
				// TODO : Set token as terminal
				return true;
			}
			else if (symbol == '>') {
				setState(SOS_inequality);
				// TODO : Set token as terminal
				return true;
			}
			else {
				// TODO : Set token as terminal
				return false;
			}
		}

		case SOS_integer: {
			if (isdigit(symbol)) {
				// TODO : Why ?
				//if(atString(&token->str, 0) == '0')
				append_symbol();
				return true;
			}
			else {
				switch (symbol) {
					case 'e':
					case 'E': {
						setState(SOS_integerE);
						append_symbol();
						return true;
					}
					case '.': {
						setState(SOS_realDot);
						append_symbol();
						return true;
					}
					default: {
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
				return false;
			}
			else {
				setState(SOS_error);
				// TODO: Error propagation
				fprintf(stderr, "Wrong E exponent value\n");
				return false;
			}
		}

		//expects value of exponent, otherwise, an error occurs
		case SOS_integerESign: {
			if (symbol >= '0' && symbol <= '9') {
				setState(SOS_integerEValue);
				append_symbol();
				return true;
			}
			else {
				setState(SOS_error);
				// TODO: Error propagation
				fprintf(stderr, "Wrong exponent value with integer\n");
				return false;
			}
		}

		case (SOS_integerEValue): {
			// TODO : Cover zeros in 20E+005
			if (isdigit(symbol)) {
				append_symbol();
				return true;
			}
			else {
				return false;
			}
		}

		default: {
			return true;
		}
	}
	return true;
}

// Macro for shorter statements
#define keyword_cmp(src) streq(str->data, src)

bool IsKeyword(String *str)
{
	switch (str->data[0]) {
		case 'b': {
			if(keyword_cmp("begin") || keyword_cmp("boolean"))
				return true;
		}
		case 'd': {
			if(keyword_cmp("div") || keyword_cmp("do"))
				return true;
		}
		case 'e': {
			if(keyword_cmp("else") || keyword_cmp("end"))
				return true;
		}
		case 'f': {
			if(	keyword_cmp("false")	 || keyword_cmp("find") ||
				keyword_cmp("forward") || keyword_cmp("function"))
				return true;
		}
		case 'i': {
			if(keyword_cmp("if") || keyword_cmp("integer"))
				return true;
		}
		case 'r': {
			if(keyword_cmp("readln") || keyword_cmp("real"))
				return true;
		}
		case 's': {
			if(keyword_cmp("sort") || keyword_cmp("string"))
				return true;
		}
		case 't': {
			if(keyword_cmp("then") || keyword_cmp("true"))
				return true;
		}
		case 'v': {
			if(keyword_cmp("var"))
				return true;
		}
		case 'w': {
			if(keyword_cmp("while") || keyword_cmp("write"))
				return true;
		}
	}
	return false;
}

