#include "error.h"
#include "token.h"

/* Global variable in which is stored last error */
SError error;
void printError()
{
    switch(error.state) {
        case ERR_None:
            return;
        case ERR_Lexical:
            printErrorDetails("Invalid input file, "
                              "lexical analysis cannot proceed");
            break;
        case ERR_Syntax:
            printErrorDetails("Syntax error");
        case ERR_Unknown:
            printErrorDetails("Unknown error");
            break;
        default:
            printErrorDetails("Unrecognized error");
    }
}

// void printToken()
// {
//     switch(token.type)
//     {
//         case TT_assignment:
//             printf(":="); break;
//         case TT_colon:
//             printf(":"); break;
//         case TT_comma:
//             printf(","); break;
//         case TT_division:
//             printf("/"); break;
//         case TT_equality:
//             printf("="); break;
//         case TT_greater :
//             printf(">"); break;
//         case TT_greaterOrEqual:
//             printf(">="); break;
//         case TT_identifier:
//             printf("%s",token.str.data); break;
//         case TT_inequality:
//             printf("<>"); break;
//         case TT_less:
//             printf("<"); break;
//         case TT_leftBrace:
//             printf("("); break;
//         case TT_leftCurlyBrace:
//             printf("{"); break;
//         case TT_leftSquareBrace:
//             printf("["); break;
//         case TT_minus:
//             printf("-"); break;
//         case TT_multiply:
//             printf("*"); break;
//         case TT_plus:
//             printf("+"); break;
//         case TT_rightBrace:
//             printf(")"); break;
//         case TT_rightCurlyBrace:
//             printf("}"); break;
//         case TT_rightSquareBrace:
//             printf("]"); break;
//         case TT_semicolon:
//             printf(";"); break;
//         case TT_keyword:
//             switch (token.keywordToken)
//             {
//                 case Key_begin:
//                     printf("begin"); break;
//                 case Key_boolean:
//                     printf("boolean"); break;
//                 case Key_do:
//                     printf("do"); break;
//                 case Key_else:
//                     printf("else"); break;
//                 case Key_end:
//                     printf("end"); break;
//                 case Key_false:
//                     printf("false"); break;
//                 case Key_find:
//                     printf("find"); break;
//                 case Key_forward:
//                     printf("forward"); break;
//                 case Key_function:
//                     printf("function"); break;
//                 case Key_if:
//                     printf("if"); break;
//                 case Key_integer:
//                     printf("integer"); break;
//                 case Key_readln:
//                     printf("readln"); break;
//                 case Key_real:
//                     printf("real"); break;
//                 case Key_sort:
//                     printf("sort"); break;
//                 case Key_string:
//                     printf("string"); break;
//                 case Key_then:
//                     printf("then"); break;
//                 case Key_true:
//                     printf("true"); break;
//                 case Key_var:
//                     printf("var"); break;
//                 case Key_while:
//                     printf("while"); break;
//                 case Key_write:
//                     printf("write"); break;
//                 default:
//                     printf("Unknown keyword"); break;
//             }
//          break;

//         default: printf("Unknown token"); break;

//     }
//     putchar('\n');
// }

void printErrorDetails(const char *description)
{
    fprintf(stderr,"%s in file \"%s\" at line: %u\n",description,error.file,error.line);
}

void setErrorDetails(EErrorStates state, unsigned line, char *file)
{
    error.state = state;
    error.line = line;
    error.file = file;
}

EErrorStates getError()
{
    return error.state;
}
