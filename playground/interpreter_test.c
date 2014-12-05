#include "../interpreter.h"

int main() {
	initInterpret();

	printf("%d\n",(int)sizeof(String*));
	generateExprInstruction(NEG, &(Operand) {.var_type = LOCAL, .data_type = STRING, .int_ = 5},
							 &(Operand) {.var_type = LOCAL, .data_type = STRING, .int_ = 5},
						     &(Operand) {.var_type = LOCAL, .data_type = STRING, .double_ = 25.0});

	runInterpretation();
}
