
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

/*
 * Pointer to file which is processed.
 */
FILE *sourceFile = NULL;

int OpenFile(const char* file)
{
	if((sourceFile = fopen(file,"r")) == NULL) {
		fprintf(stderr, "\nChyba soubor nelze otevrit\n");
		return 0;
	}
	return 1;
}
int CloseFile(FILE *filename) 
{
	if(fclose(filename) == EOF) {
		fprintf(stderr, "Cannot close the file.\n");
		return 0;
	}
	return 1;
}

int ParseToTokens(Token *token)
{
	do {
		EmptyToken(token);
		GetToken(token);
		if (token->state == SOS_identifier) {
			IsKeyword(token);
		}
		printf("Token->state: %d and token attribute %s\n",token->state,token->str);
	} while (token->state != SOS_EOF);

	return 1;
}

Token *GetToken (Token *actToken)
{
	int symbol = fgetc(sourceFile);
	
	//Read next symbol and check the EOF		
	while (symbol != EOF) {
		// automat of states 
		switch (actToken->state) {
			case (SOS_start): {
				//printf("SOS_start\n");
				//ignores whitespaces
				if (isspace(symbol)) {
					break;
				}
				else if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || (symbol == '_')) {
					actToken->state = SOS_identifier;
					//printf("assigned id\n");
					actToken->str[0] = symbol;
					break;
				}
				else if (symbol >= '0' && symbol <= '9') {
					actToken->state = SOS_integer;
					actToken->str[0] = symbol;
					//printf("number\n");
					break;
				}
				else {
					switch (symbol) {
						case ':': {
							actToken->state = SOS_colon;
							//printf("dvojtecka\n");
							actToken->str[0] = symbol;
							break;
						}
						case ',': {
							actToken->state = SOS_comma;
							actToken->str[0] = symbol;
							//printf("comma\n");
							return actToken;
						}
						case '/': {
							actToken->state = SOS_devide;
							actToken->str[0] = symbol;
							return actToken;
						}
						case '=': {
							actToken->state = SOS_equality;
							actToken->str[0] = symbol;
							return actToken;
						}
						case '>': {
							actToken->state = SOS_greater;
							actToken->str[0] = symbol;
							break;
						}
						case '<': {
							actToken->state = SOS_less;
							actToken->str[0] = symbol;
							break;
						}
						case '(': {
							actToken->state = SOS_leftBrace;
							actToken->str[0] = symbol;
							return actToken;
						}
						case '{': {
							actToken->state = SOS_leftCurlyBrace;
							//actToken->str[0] = symbol;
							break;
						}
						case '[': {
							actToken->state = SOS_leftSquareBrace;
							actToken->str[0] = symbol;
							return actToken;
						}					
						/*case '-': {
							actToken->state = SOS_minus;
							actToken->str[0] = symbol;
							break;
						}*/
						case '*': {
							actToken->state = SOS_multiply;
							actToken->str[0] = symbol;
							return actToken;
						}
						case '+': {
							actToken->state = SOS_plus;
							actToken->str[0] = symbol;
							return actToken;
						}
						case ')': {
							actToken->state = SOS_rightBrace;
							actToken->str[0] = symbol;
							return actToken;
						}
						case '}': {
							actToken->state = SOS_rightCurlyBrace;
							//actToken->str[0] = symbol;
							break;
						}
						case ']': {
							actToken->state = SOS_rightSquareBrace;
							actToken->str[0] = symbol;
							return actToken;
						}										
						case ';': {
							actToken->state = SOS_semicolon;
							actToken->str[0] = symbol;
							return actToken;
						}
						default:
							actToken->state = SOS_error;
							printf("\nWrong start symbol\n");
							return actToken;
					}
					break;
				}
				break;
			}
			case (SOS_colon): {
				if (symbol == '=') {
					actToken->state = SOS_assigment;
					//printf("assignment\n");
					FillString(actToken->str,symbol);
					return actToken;
				}
				else {
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			case (SOS_double): {
				if (symbol >= '0' && symbol <= '9') {
					FillString(actToken->str,symbol);
					break;
				}
				else {
					switch (symbol) {
						case 'e':
						case 'E': {
							actToken->state = SOS_doubleE;
							FillString(actToken->str,symbol);
							break;
						}
						default: {
							ungetc(symbol,sourceFile);
							return actToken;
						}
					}
					break;
				}
			}
			case (SOS_doubleDot): {
				if (symbol >= '0' && symbol <= '9') {
					actToken->state = SOS_double;
					FillString(actToken->str,symbol);
					break;
				}
				else {
					actToken->state = SOS_error;
					printf("Wrong decimal part of number\n");
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			case (SOS_doubleE): {
				if (symbol >= '0' && symbol <= '9') {
					actToken->state = SOS_doubleEValue;
					FillString(actToken->str,symbol);
					break;
				}
				else if (symbol == '+' || symbol == '-') {
					actToken->state = SOS_doubleESign;
					FillString(actToken->str,symbol);
					break;
				}
				else {
					actToken->state = SOS_error;
					printf("\nWrong E exponent value with double\n");
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			case (SOS_doubleESign): {
				if (symbol >= '0' && symbol <= '9') {
					actToken->state = SOS_doubleEValue;
					FillString(actToken->str,symbol);
					break;
				}
				else {
					actToken->state = SOS_error;
					printf("\nWrong exponent value with double\n");
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			case (SOS_doubleEValue): {
				if (symbol >='0' && symbol <= '9') { //what about nulls in 20.2E+005
					FillString(actToken->str,symbol);
					break;
				}
				else {
					ungetc(symbol,sourceFile);
					return actToken;					
				}
			}
			case (SOS_greater): {
				if (symbol == '=') {
					actToken->state = SOS_greaterOrEqual;
					FillString(actToken->str,symbol);
					break;
				}
				else {
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			case (SOS_identifier): {
				//printf(" SOS_identifier\n");
				if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || (symbol >= '0' && symbol <= '9') || (symbol == '_')) {
					//actToken->state = SOS_identifier;
					FillString(actToken->str,symbol);
					break;
				}		
				else {
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			/*Ignoring comments until right curly brace is read*/
			case (SOS_leftCurlyBrace): {
				if (symbol == '}') {
					actToken->state = SOS_start;
					break;
				}
				else {
					break;
				}
			}
			case (SOS_less): {
				if (symbol == '=') {
					actToken->state = SOS_lessOrEqual;
					FillString(actToken->str,symbol);
					return actToken;
				}
				else if (symbol == '>') {
					actToken->state = SOS_inequality;
					FillString(actToken->str,symbol);
					return actToken;
				}
				else {
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			case (SOS_integer): {
				if (symbol >= '0' && symbol <= '9') {
					if (actToken->str[0] != '0')
						FillString(actToken->str,symbol);
					break;
				}
				else {
					switch (symbol) {
						case 'e':
						case 'E': {
							actToken->state = SOS_integerE;
							FillString(actToken->str,symbol);
							break;
						}
						case '.': {
							actToken->state = SOS_doubleDot;
							FillString(actToken->str,symbol);
							break;
						}
						default: {
							ungetc(symbol,sourceFile);
							return actToken;
						}
					}
					break;
				}
			}
			//expects value of exponent, otherwise, an error occurs
			case (SOS_integerE): {
				if (symbol >= '0' && symbol <= '9') {
					actToken->state = SOS_integerEValue;
					FillString(actToken->str,symbol);
					break;
				}
				else if (symbol == '+' || symbol == '-') {
					actToken->state = SOS_integerESign;
					FillString(actToken->str,symbol);
					break;
				}
				else {
					actToken->state = SOS_error;
					printf("\nWrong E exponent value\n");
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			//expects value of exponent, otherwise, an error occurs
			case (SOS_integerESign): {
				if (symbol >= '0' && symbol <= '9') {
					actToken->state = SOS_integerEValue;
					FillString(actToken->str,symbol);
					break;
				}
				else {
					actToken->state = SOS_error;
					printf("\nWrong exponent value with integer\n");
					ungetc(symbol,sourceFile);
					return actToken;
				}
			}
			case (SOS_integerEValue): {
				if (symbol >='0' && symbol <= '9') { //what about nulls in 20E+005
					FillString(actToken->str,symbol);
					break;
				}
				else {
					ungetc(symbol,sourceFile);
					return actToken;					
				}
			}
			default:
				;
		}
		symbol = fgetc(sourceFile);
	}
	actToken->state = SOS_EOF;
	return actToken;
}

void IsKeyword(Token *token)
{
	switch (token->str[0]) {
		case 'b': {
			if (strcmp(token->str,"begin") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"boolean") == 0) {
				token->state = SOS_keyword;
				break;
			}
		}
		case 'd': {
			if (strcmp(token->str,"div") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"do") == 0) {
				token->state = SOS_keyword;
				break;
			}
		}
		case 'e': {
			if (strcmp(token->str,"else") == 0) {
				token->state = SOS_keyword;
				break;
			}			
			if (strcmp(token->str,"end") == 0) {
				token->state = SOS_keyword;	
				break;		
			}
		}
		case 'f': {
			if (strcmp(token->str,"false") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"find") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"forward") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"function") == 0) {
				token->state = SOS_keyword;
				break;
			}
		}
		case 'i': {
			if (strcmp(token->str,"if") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"integer") == 0) {
				token->state = SOS_keyword;
				break;
			}
		}
		case 'r': {
			if (strcmp(token->str,"readln") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"real") == 0) {
				token->state = SOS_keyword;
				break;
			}
		}
		case 's': {
			if (strcmp(token->str,"sort") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"string") == 0) {
				token->state = SOS_keyword;
				break;
			}
		}	
		case 't': {
			if (strcmp(token->str,"then") == 0) {
				token->state = SOS_keyword;
				break;
			}
			if (strcmp(token->str,"true") == 0) {
				token->state = SOS_keyword;
				break;
			}
		}
		case 'v': {
			if (strcmp(token->str,"var") == 0) {
				token->state = SOS_keyword;
				break;
			}
		}
		case 'w': {
			if (strcmp(token->str,"while") == 0) {
				token->state = SOS_keyword;
				break;
			}	
			if (strcmp(token->str,"write") == 0) {
				token->state = SOS_keyword;
				break;
			}					
		}
	}
	return;	
}

void EmptyToken(Token *actToken) //Empty used token for next usage
{
	actToken->state = SOS_start;

	for (int i = 0; i < ARR_SIZE; i++)
		actToken->str[i] = '\0';
	return;
}

char *FillString(char *array, char addedSymbol) //Add readed symbol at the end of array
{
	int i = 0;
	while (array[i] != '\0') {
		i++;
	}
	array[i] = addedSymbol;
	return array;
}
