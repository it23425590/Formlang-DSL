%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "form.h"
#include "y.tab.h"

extern FILE *yyin, *yyout;
void yyerror(const char *s);

/* Track context to handle field names correctly */
int in_field_name = 0;
%}

%option noyywrap
%option yylineno

%%
[ \t]+                      /* Skip whitespace */
\n                          /* Skip newlines but count them */
"form"                      { return FORM; }
"meta"                      { return META; }
"author"                    { return AUTHOR; }
"section"                   { return SECTION; }
"field"                     { in_field_name = 1; return FIELD; }
"validate"                  { return VALIDATE; }
"if"                        { return IF; }
":"                         { in_field_name = 0; return COLON; }
"text"                      { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_TEXT; 
                              return TYPE; 
                            }
"textarea"                  { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_TEXTAREA; 
                              return TYPE; 
                            }
"number"                    { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_NUMBER; 
                              return TYPE; 
                            }
"email"                     { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_EMAIL; 
                              return TYPE; 
                            }
"date"                      { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_DATE; 
                              return TYPE; 
                            }
"checkbox"                  { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_CHECKBOX; 
                              return TYPE; 
                            }
"dropdown"                  { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_DROPDOWN; 
                              return TYPE; 
                            }
"radio"                     { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_RADIO; 
                              return TYPE; 
                            }
"password"                  { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_PASSWORD; 
                              return TYPE; 
                            }
"file"                      { 
                              if (in_field_name) {
                                  yylval.string = strdup(yytext);
                                  return IDENTIFIER;
                              }
                              yylval.field_type = FIELD_FILE; 
                              return TYPE; 
                            }
"required"                  { return REQUIRED; }
"pattern"                   { return PATTERN; }
"default"                   { return DEFAULT; }
"min"                       { return MIN; }
"max"                       { return MAX; }
"rows"                      { return ROWS; }
"cols"                      { return COLS; }
"accept"                    { return ACCEPT; }
"options"                   { return OPTIONS; }
"="                         { return EQUALS; }
";"                         { return SEMICOLON; }
"{"                         { return LBRACE; }
"}"                         { return RBRACE; }
"["                         { return LBRACKET; }
"]"                         { return RBRACKET; }
","                         { return COMMA; }
"<"                         { return LT; }
">"                         { return GT; }
"=="                        { return EQ; }
"!="                        { return NEQ; }
"<="                        { return LE; }
">="                        { return GE; }
"&&"                        { return AND; }
"||"                        { return OR; }
"true"                      { yylval.boolean = 1; return BOOLEAN; }
"false"                     { yylval.boolean = 0; return BOOLEAN; }
[0-9]+                      { yylval.number = atoi(yytext); return NUM; }
\"[^\"]*\"                  { 
                              yylval.string = strdup(yytext + 1); 
                              yylval.string[strlen(yylval.string) - 1] = '\0';
                              return STRING; 
                            }
[a-zA-Z][a-zA-Z0-9_]*       { yylval.string = strdup(yytext); return IDENTIFIER; }
.                           { yyerror("Invalid character"); }
%%

/* We're using %option noyywrap so we don't need to define yywrap */
