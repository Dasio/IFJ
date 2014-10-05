
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
		if (token->state == SOS_number) {
			CheckNulls(token->str);
		}
		printf("Token->state: %d and token attribute %s\n",token->state,token->str);
	} while (token->state != SOS_EOF);

	return 1;
}

Token *GetToken (Token *actToken)
{
	char symbol = fgetc(sourceFile);

	
	//Read next symbol and check the EOF		
	while (symbol != EOF) {
		/* Filter whitespace characters between tokens, check end character of token
			and filter comments */
		if (isspace(symbol)) {
			if (actToken->state != SOS_start && actToken->state != SOS_leftCurlyBrace) {
				return actToken;
			}
			symbol = fgetc(sourceFile);
			continue;			;
		}
		// automat of states 
		switch (actToken->state) {
			case (SOS_start): {
				//printf("SOS_start\n");
				
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
					actToken->state = SOS_number;
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
							printf("Cannot identify");
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
			/*Ignoring comments*/
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
			case (SOS_number): {
				if (symbol >= '0' && symbol <= '9') {
					//actToken->state = SOS_number;
					FillString(actToken->str,symbol);
					break;
				}
				else if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || (symbol == '_')) {
					actToken->state = SOS_identifier;
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

void CheckNulls(char *stringOfNumbers)
{
	int i = 0;
	int j = 0;
	//count the number of nulls
	for (i = 0; stringOfNumbers[i] == '0'; i++)
		;
	//the number consists only of nulls eg.: "00000" transforms to "0"
	if (stringOfNumbers[i] == '\0') {
		stringOfNumbers[1] = '\0';
	}
	//if the number is not just '0', it deletes nuls in the beggining
	else if (i) {
		do {
		stringOfNumbers[j++] = stringOfNumbers[i++];
		//printf("%s jes\n",stringOfNumbers);
		} while (stringOfNumbers[i] != '\0');
		stringOfNumbers[j] = '\0';
	}
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
