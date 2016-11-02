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
		{root = makeNode(N_PROGRAM, NIL, $1, NIL); checkForwaradReference();}
		;
translation_unit
		: external_declaration {$$ = $1;}
		| translation_unit external_declaration {$$ = linkDeclaratorList($1, $2);}
		;
external_unit
		: function_definition {$$ = $1;}
		| declaration {$$ = $1;}
		;
function_defination
		: declaration_specifiers declarator {$$ = setFunctionDeclaratorSpecifier($2,$1);}
		compound_statement {$$=setFunctionDeclaatorBody{$3,$4};}
		| declarator{$$=setFunctionDeclaratorSpecifier($1, makeSpecifier(int_type,0));}
		compound_statement {$$= setFunctionDeclaratorBody($2,$3);}
		;
declaration_list_opt
		:					{$$ = NIL;}
		| declaration_list	{$$ = $1;}
		;
declaration_list
		:
		declaration {$$=$1;}
		| declaration_list declaration($$ = linkDeclaratorList($2,$1);)
		;
declaration
		: declaration_specifiers init_declaration_list_opt SEMICOLON
		{$$=setDeclaatorListSpecifier($2,$1);}
		;
declaration_specifiers
		:type_specifier
		|storage_class_specifier
		|type_specifier declaration_specifiers{$$ = updateSpecifier ($2, 0, $1);}
		| storageclass specifier declaration_specifiers
		{$$=updateSpecifier($2,0,$1);}
		;
storage_class_specifier
		: AUTO_SYM	{$$=S_AUTO;}
		| STATIC_SYM	{$$=S_STATIC;}
		| TYPEDEF_SYM	{$$=S_;}
		;			
init_declarator_list_opt
		:
		| init_declarator_list {$$=$1;}
		;
init_declarator
		: init_declarator {$$=$1;}
		| declarator ASSIGN initializer {$$=setDeclaratorInit($1, $2);}
		;
initializer
		constant_expression {$$ = makeNode(C-inIT_LIST_ONE,NIL,$1,NIL);}
		| LR initializer RR	{$$=$2;}
		;
initializer_list
		: initializer {$$=makeNode(N_INIT_LIST,$1,NIL,makeNode(N_INIT_LIST, NIL, NIL, NIL));}
		| initializer_list COMMA initializer {$$ = makeNodeList(N_INIT_LIST, $1, $2);}
		;
type_specifier
		: struct_type_specifier	{$$ = $1;}
		| enum_type_specifier {$$ = $1;}
		| TYPE_IDENTIFIER {$$ = $1;}
		;
struct_type_specifier
		: struct_or_union IDENTIFIER
		{$$=setTypeStructOrEnumIdentifier($1, $2, ID_STRUCT);}
		LR {$$= current_id; current_level++;} struct_declaration_list RR
		{checkForwardReference();$$ = setTypeField($3, $6); current_level--; current_id = $5;}
		| struct_or_union {$$ = makeType($1);} LR {$$ = current_id; current_level++;} 
		struct_declaration_list RR {checkForwardReference();$$ = setTypeField($2, $2); current_level--; current_id = $4;}
		| struct_or_union IDENTIFIER
		{$$=getTypeOfStructOrEnumRefIdentifier($1, $2, ID_STRUCT);}
		;
struct_or_union
		: STRUCT_SYM {$$= T_STRUCT;}
		| UNION_SYM {$$ = T_UNION;}
		;
struct_declaration_list
		:struct_declaration	{$$=$1;}
		| struct_declaration_list struct_declaration {$$=linkDeclaratorList($1,$2);}
		;
struct_declaration
		:type_specifier struct_declarator_list SEMICOLON
		{$$ = setStructDeclaratorListSpecifier($2,$1);}
		;
struct_declarator_list
		:struct_declarator
		| struct declarator_list COMMA struct_declarator
		
		;
struct_declarator
		: declarator
		;
enum_tpye specifier
		:ENUM_SYM IDENTIFIER

		LR enumerator_list RR
		| ENUM_SYM
		LR enumerator_list RR
		| ENUM_SYM IDENTIFIER
		
		;

enumerator_list
		: enumerator
		| enumerator_list COMMA enumerator
		;
enumerator
		: IDENTIFIER
		
		| IDENTIFIER

		ASSIGN experession
		;
declarator
		: pointer direct_declarator
		| direct_declarator
		;
pointer
		: STAR
		| STAR pointer
		;
direct_declarator
		: IDENTIFIER
		| LP declarator RP
		| direct_declarator LB constant_expression_opt RB

		| direct_declarator LP
		parameter_type_list_opt RP

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