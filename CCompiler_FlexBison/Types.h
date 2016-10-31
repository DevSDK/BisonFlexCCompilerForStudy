#pragma once

#include "c_compiler.tab.h"

#define NIL 0
typedef enum {FALSE, TRUE} BOOLEAN;
typedef enum e_node_name {
	C_NULL,
	C_PROGRAM,
	C_EXP_IDENT,
	C_EXP_INT_CONST,
	C_EXP_FLOAT_CONST,
	C_EXP_CHAR_CONST,
	C_EXP_STRING_LITERAL,
	C_EXP_ARRAY,
	C_EXP_FUNCTION_CALL,
	C_EXP_STRUCT,
	C_EXP_ARROW,
	C_EXP_POST_INC,
	C_EXP_POST_DEC,
	C_EXP_PRE_INC,
	C_EXP_PRE_DEC,
	C_EXP_AMP,
	C_EXP_STAR,
	C_EXP_NOT,
	C_EXP_PLUS,
	C_EXP_MINUS,
	C_EXP_SIZE_TYPE,
	C_EXP_CAST,
	C_EXP_MUL,
	C_EXP_DIV,
	C_EXP_MOD,
	C_EXP_ADD,
	C_EXP_SUB,
	C_EXP_LSS,
	C_EXP_GTR,
	C_EXP_LEQ,
	C_EXP_GEQ,
	C_EXP_NEQ,
	C_EXP_EQL,
	C_EXP_AND,
	C_EXP_OR,
	C_EXP_ASSIGN,
	C_ARG_LIST,
	C_ARG_LIST_NIL,
	C_STMT_LABEL_CASE,
	C_STMT_LABEL_DEFAULT,
	C_STMT_COMPOUND,
	C_STMT_EMPTY,
	C_STMT_EXPRESSION,
	C_STMT_IF,
	C_STMT_IF_ELSE,
	C_STMT_SWITCH,
	C_STMT_WHILE,
	C_STMT_DO,
	C_STMT_FOR,
	C_STMT_RETURN,
	C_STMT_CONTINUE,
	C_STMT_BREAK,
	C_STMT_FOR_EXP,
	C_FOR_EXP,
	C_STMT_LIST,
	C_STMT_LIST_NIL,
	C_INIT_LIST,
	C_INIT_LIST_ONE,
	C_INIT_LIST_NIL
} NODE_NAME;

typedef enum {T_NULL, T_ENUM, T_ARRAY, T_STRUCT, T_UNION, T_FUNC, T_POINTER, T_VOID}T_KIND;
typedef enum {Q_NULL, Q_CONST, Q_VOLATILE}Q_KIND;
typedef enum {S_NULL, S_AUTO, S_STATIC, S_TYPEDEF, S_EXTERN, S_REGISTER}S_KIND;
typedef enum {ID_NULL, ID_VAR, ID_FUNC, ID_PARM, ID_FIELD, ID_TYPE, ID_ENUM, ID_STRUCT, ID_ENUM_LITERAL} ID_KIND;

typedef struct s_node {
	NODE_NAME name;
	int line;
	int value;
	struct s_type * type;
	struct s_node * llink;
	struct s_node * clink;
	struct s_node * rlink;	
}A_NODE;
typedef struct s_type {
	T_KIND kind;
	int size;
	int local_var_size;
	struct s_type * element_type;
	struct s_node * expr;
	int line;
	BOOLEAN check;
	BOOLEAN prt;
}A_TYPE;
typedef struct s_id {
	char * name;
	ID_KIND kind;
	S_KIND specifier;
	int level;
	int address;
	int value;
	A_NODE * init;
	A_TYPE * type;
	int line;
	struct s_id * prev;
	struct s_id * link;
}A_ID;
typedef union { int i; float f; char c; char* s; }LIT_VALUE;
typedef struct lit { int addr; A_TYPE * type; LIT_VALUE value;} A_LITERAL;
typedef struct {
	A_TYPE * type;
	S_KIND stor;
	int line; 
} A_SPECIFIER;