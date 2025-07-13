#include <stdio.h>
#include <stdlib.h>
#include "form.h"
#include "y.tab.h"

extern FILE *yyin;
extern int yylex();
extern char *yytext;

/* Define yylval since it's not included from yacc */
YYSTYPE yylval;

/* Define yyerror since it's used in lex.l */
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(int argc, char **argv) {
    int token;
    
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error: Cannot open input file %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
    }
    
    printf("Tokenizing input file...\n");
    
    while ((token = yylex())) {
        printf("Token: %d, Text: '%s'\n", token, yytext);
        
        /* Print additional info based on token type */
        switch (token) {
            case STRING:
                printf("  String value: '%s'\n", yylval.string);
                break;
            case IDENTIFIER:
                printf("  Identifier: '%s'\n", yylval.string);
                break;
            case NUM:
                printf("  Number value: %d\n", yylval.number);
                break;
            case TYPE:
                printf("  Field type: %d\n", yylval.field_type);
                break;
        }
    }
    
    if (yyin != stdin) fclose(yyin);
    
    return 0;
}
