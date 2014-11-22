#include "../scanner.h"
#include "../vector.h"
#include "../system.h"

static Token randomToken() {
	Token t = initToken();

	t.type = RandInt(TT_assignment, TT_special_separator + 1);

	if(t.type == TT_special_separator + 0) {
		t.type = TT_keyword;
		KeywordTokenType ktt = RandInt(Key_begin+1, Key_none-1);
		t.keyword_token = ktt;
	}

	if(t.type == TT_special_separator + 1) {
		t.type = TT_string;
	}

	// if(t.type == TT_special_separator + 1) {
	// 	t.type = TT_string
	// }
	// TODO: Cover real, integer, string

	if(t.type == TT_identifier || t.type == TT_string) {
		int iter = RandInt(2, 40);
		for(int i = 0; i < iter ; i++) {
			char c = RandInt('A', 'Z');
			appendCharToToken(&t, c);
		}
	}

	return t;
}

int main()
{
	Scanner scanner = initScanner();

	//assignString(&scanner.input, "ahoj_svet : := 00000123\n");
	assignFile(&scanner.input, "testFile2.txt");

	//TokenVector *tokvect = getTokenVector(&scanner);
	//
	TokenVector *tokvect = TokenInitVector(128);

	for(int i = 0; i < 4096; i++) {
		TokenVectorAppend(tokvect, randomToken());
	}

	String full_input = initEmptyString();

	Token *it = TokenVectorFirst(tokvect);
	while(it++ != TokenVectorLast(tokvect)) {
		appendCharsToString(&full_input, stringifyToken(it));

		int rand_spaces = RandInt(0, 2);
		for(int i = 0; i < rand_spaces; i++) {
			appendCharToString(&full_input, ' ');
		}
	}

	printString(&full_input);

	destroyScanner(&scanner);

	// TODO: Destroy TokenVector

	return 0;
}
