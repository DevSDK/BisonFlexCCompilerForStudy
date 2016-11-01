%{
#include <stdio.h>
#include <stdlib.h>
#include "Types.h"

extern int yylex();
extern int yyparse();
extern int line_no, syntax_err;
extern FILE* yyin;
void yyerror(const char* s);
%}

%union {
int ival;
float fval;
char * str;
}



%token<ival> T_INT
%token<fval> T_FLOAT
%token T_PLUS T_MINUS T_MULTIPLY T_DIVIDE T_LEFT T_RIGHT
%token T_NEWLINE T_QUIT

%start program
%token IDENTIFIER TYPE_IDENTIFIER FLOAT_CONSTANT INTEGER_CONSTANT
	   CHARCTER_CONSTANT STRING_LITERAL PLUS MINUS PLUSPLUS
	   MINUSMINUS BAR AMP BARBAR AMPAMP ARROW
	   SEMICOLON LSS GTR LEQ REQ GEQ EQL NEQ DOTDOTDOT
	   LP RP LB RB LR RR PERIOD COMMA EXCL STAR SLASH PERCENT ASSIGN
	   COLON AUTO_SYM SIZEOF_SYM UNION_SYM
	   STRUCT_SYM ENUM_SYM STATIC_SYM  
	   IF_SYM ELSE_SYM WHILE_SYM DO_SYM FOR_SYM CONTINUE_SYM
	   BREAK_SYM RETURN_SYM SWITCH_SYM CASE_SYM DEFAULT_SYM TYPEDEF_SYM
%left T_PLUS T_MINUS
%left T_MULTIPLY T_DIVIDE 

%type<ival> expression
%type<fval> mixed_expression


%%

program
		: translation_unit
		{root = makeNode(N_PROGRAM, NIL, $1, NIL); checkForweradReference();}
		;
		translation_unit
		: external_declaration {$$ = $1;}
		| translation_unit external_declaration {$$ = linkDeclaratorList($1, $2)}
		;

%%
int main() {
yyin = stdin;
do { 
	yyparse();
} while(!feof(yyin));
return 0;
}
void yyerror(const char* s) {
fprintf(stderr, "Parse error: %s\n", s);
exit(1);
}