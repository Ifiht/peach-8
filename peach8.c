/*
This is the assembler program.
*/
#include <stdio.h>
#include <toads/lexer.h>
#include <toads/parser.h>
#include <toads/emitter.h>


int main() {
	a = lex($1);
	b = parse(a);
	c = emit(b);
return c;
}