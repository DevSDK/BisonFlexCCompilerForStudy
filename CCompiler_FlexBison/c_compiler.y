%{
#include <stdio.h>
#include <stdlib.h>
#include "SyntaxAnalize.h"

extern int yylex();
extern int yyparse();
extern int line_no, syntax_err;
extern FILE* yyin;
void yyerror(const char* s);
%}

%union {
int ival;
float fval;
}



%token<ival> T_INT
%token<fval> T_FLOAT
%token T_PLUS T_MINUS T_MULTIPLY T_DIVIDE T_LEFT T_RIGHT
%token T_NEWLINE T_QUIT

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

%start calculation

%%

calculation: 
	| calculation line
;

line: T_NEWLINE
| mixed_expression T_NEWLINE { printf("\tResult: %f\n", $1);}
| expression T_NEWLINE { printf("\tResult: %i\n", $1); } 
| T_QUIT T_NEWLINE { printf("bye!\n"); exit(0); }
;

mixed_expression: T_FLOAT                 		 { $$ = $1; }
	| mixed_expression T_PLUS mixed_expression	 { $$ = $1 + $3; }
	| mixed_expression T_MINUS mixed_expression	 { $$ = $1 - $3; }
	| mixed_expression T_MULTIPLY mixed_expression { $$ = $1 * $3; }
	| mixed_expression T_DIVIDE mixed_expression	 { $$ = $1 / $3; }
	| T_LEFT mixed_expression T_RIGHT		 { $$ = $2;  }
	| expression T_PLUS mixed_expression	 	 { $$ = $1 + $3; }
	| expression T_MINUS mixed_expression	 	 { $$ = $1 - $3; }
	| expression T_MULTIPLY mixed_expression 	 { $$ = $1 * $3; }
	| expression T_DIVIDE mixed_expression	 { $$ = $1 / $3; }
	| mixed_expression T_PLUS expression	 	 { $$ = $1 + $3; }
	| mixed_expression T_MINUS expression	 	 { $$ = $1 - $3; }
	| mixed_expression T_MULTIPLY expression 	 { $$ = $1 * $3; }
	| mixed_expression T_DIVIDE expression	 { $$ = $1 / $3; }
	| expression T_DIVIDE expression		 { $$ = $1 / (float)$3; }
;

expression: T_INT				{ $$ = $1; }
	| expression T_PLUS expression	{ $$ = $1 + $3;}
	| expression T_MINUS expression	{ $$ = $1 - $3; }
	| expression T_MULTIPLY expression	{ $$ = $1 * $3; }
	| T_LEFT expression T_RIGHT		{$$ = $2;  }
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