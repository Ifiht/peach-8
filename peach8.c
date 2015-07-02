/*
This is the assembler program.
*/
#include <stdio.h>
#include <lexer.h>
#include <parser.h>
#include <emitter.h>


int main() {
	a = lex($1);
	b = parse(a);
	c = emit(b);
return c;
}