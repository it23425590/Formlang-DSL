CC = gcc
CFLAGS = -Wall -g
LEX = flex
YACC = yacc -d

all: formgen debug

formgen: y.tab.c lex.yy.c
	$(CC) $(CFLAGS) -o formgen.exe y.tab.c lex.yy.c

debug: y.tab.c lex.yy.c debug.c
	$(CC) $(CFLAGS) -o debug.exe debug.c lex.yy.c

y.tab.c: yacc.y
	$(YACC) yacc.y

lex.yy.c: lex.l
	$(LEX) lex.l

clean:
	rm -f formgen.exe debug.exe lex.yy.c y.tab.c y.tab.h *~

test: formgen
	./formgen.exe simple.form simple.html

.PHONY: all clean test
