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
	   CHARACTER_CONSTANT STRING_LITERAL PLUS MINUS PLUSPLUS
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
parameter_type_list_opt
		:
		| parameter_type_list
		;
parameter_type_list
		:parameter_list
		| parameter_list COMMA DOTDOTDOT
		
		;
parameter_list
		: parameter_declaration

		| parameter_list COMMA parameter_declaration

		;
parameter_declaration
		: declaration_specifiers declarator
		
		| declaration_specifiers abstract_declarator_opt

		;
abstract_declarator_opt
		:
		| abstract_declarator
		;
abstract_declarator
		: direct_abstract_declarator
		| pointer
		| pointer direct_abstract_declarator
		;
direct_abstract_declarator
		| pointer
		| pointer direct_abstract_declarator
		;
statement_list_opt
		:
		| statement_list
		;
statement_list
		: statement
		| statement_list statement
		;
statement
		: labeled_statement
		| expression_statemnt
		| selection_statement
		| iteration_statemnt
		| jump_statement
		;
labeled_statement
		: CASE_SYM contant_expression COLON statement
		| DEFAULT_SYM COLON statement
		;
compound_statement
		: LR
		

		;
expression_statement
		: SEMICOLON
		| expression SEMICOLON
		;
selection_statement
		: IF_SYM LP expression RP statement
			{$$ = makeNode(N_STMT_IF, $3, NIL, $5);}
		| IF_SYM LP expression RP statement ELSE_SYM statement
			{$$ = makeNode(N_STMT_IF_ELSE, $3, NIL, $5);}
		| SWITCH_SYM LP expression RP statement
			{$$ = makeNode(N_STMT_SWITCH, $3, NIL, $5);}
		;
iteration_statemnt
		: WHILE_SYM LP expression RP statement
		| DO_SYM statement WHILE_SYM RP expression RP SEMICOLON
		| FOR_SYM LP for_expression RP statement
		;
for_expression
		: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt

		;
expression_opt
		:
		| expression
		;
jump_statement
		: RETURN_SYM expression_opt SEMICOLON
		| CONTINUE_SYM SEMICOLON
		| BREAK_SYM SEMICOLON
		;
arg_expression_list_opt
		:
		| arg_expression
		;
arg_expression
		: assignment_expression
		| arg_expression_list COMMA assignment_expression
		;
constant_expression_opt
		: constant_expression
		;
constant_expression
		: expression
		;
expression
		: comma_expression
		;
comma_expression
		: assignment_expression
		;
assignment_expression
		: conditional_expression
		| unary_expression ASSIGN assignment_expression
		;
conditional_expression
		: logical_or_expression
		;
logical_or_expression
		: local_and_expression
		| logical_or_expression BARBAR logical_and_expression

		;
logical_and_expression
		: bitwise_or_expression
		| logical_and_expression AMPAMP bitwise_or_expression
		;
bitwise_or_expression
		: bitwise_xor_expression
		;
bitwise_xor_expression
		: bitwise_and_expression
		;
bitwise_and_expression
		: equality_expression
		;
equality_expression
		: relational_expression
		| equality_expression EQL relational_expression
		| equality_expression NEQ relational_expression
		;
relational_expression
		: shift_expression
		| relational_expression LSS shift_expression
		| relational_expression GTR shift_expression
		| relational_expression LEQ shift_expression
		| relational_expression_GEQ shift_expression
		;
shift_expression
		: additive_expression
		;
additive_expression
		: multiplicative_expression
		| additive_expression PLUS multiplicative_expression
		|additive_expression  MINUS multiplicative_expression
		;
multiplicative_expression
		:cast_expression
		| multiplicative_expression STAR cast_expression
		| multiplicative_expression SLASH cast_expression
		|multiplicative_expression PRECENT cast_expression

		;
cast_expression
		: unary_expression
		| LP type_name RP cast_expression
		;
unary_expression
		: postfix_expression
		| PLUSPLUS unary_expression
		| MINUSMINUS unary_expression
		| AMP cast_expression
		| STAR cast_expression
		| EXCL cast_expression
		| MINUS cast_expression
		| PLUS cast_expression
		| SIZEOF_SYM unary_expression
		| SIZEOF_SYM LP type_name RP
		;
postfix_expression
		:primary_expression
		| postfix_expression LB expression RB
		| postfix_expression LP arg_expression_list_opt RP
		| postfix_expression PREIOD IDENTIFIER
		| postfix_expression ARROW IDENTIFIER
		| postfix_expression PLUSPLUS
		| postfix_expression MINUSMINUS
		;
primary_expression
		: IDENTIFIER
		| INTEGER_CONSTANT
		| FLOAT_CONSTANT
		| CHARACTER_CONSTANT
		| STRING_LITERAL
		| LP expression RP
;
type_name
		: declaration_specifiers abstract_declarator_opt
		;

%%
extern char * yytext;

void yyerror(const char* s) {
	syntax_err ++;
	printf("Line %d: %s near %s\n", line_no,s,yytext);
}
