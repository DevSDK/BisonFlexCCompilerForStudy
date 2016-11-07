#ifndef __DEF_SUPPORTING_FUNCS__
#define __DEF_SUPPORTING_FUNCS__
#include <stdio.h>
#include <stdlib.h>
#include "Types.h"
#include "c_compiler.tab.h"
A_TYPE * int_type, *char_type, *void_type, * float_type, *string_type;
A_NODE * root;
A_ID * current_id = NIL;
int syntax_err = 0;
int current_level = 0;
A_NODE	* makeNode(NODE_NAME, A_NODE *, A_NODE*, A_NODE*);
A_NODE	* makeNodeList(NODE_NAME, A_NODE *, A_NODE*);
A_ID	* makeIdentifier(char *);
A_ID    * makeDummyIdentifier();
A_TYPE  * makeType(T_KIND);
A_SPECIFIER * makeSpecifier(A_TYPE*, S_KIND);
void checkForwardReference();
void setDefaultSpecifier(A_SPECIFIER*);
A_ID	* linkDeclaratorList(A_ID *, A_ID *);
A_ID	* getIdentifierDeclared(char *);
A_TYPE	* getTypeOfStructOrEnumRefIdentifier(T_KIND, char *, ID_KIND);
A_ID	* setDeclaratorInit(A_ID *, A_NODE *);
A_ID	* setDeclaratorKind(A_ID *, ID_KIND);
A_ID	* setDeclaratorType(A_ID*, A_TYPE *);
A_ID	* setDeclaratorElementType(A_ID *, A_TYPE *);
A_ID	* setDeclaratorTypeAndKind(A_ID *, A_TYPE *, ID_KIND);
A_ID	* setDeclaratorListSpecifier(A_ID *, A_SPECIFIER*);
A_ID	* setFunctionDeclaratorSpeficier(A_ID *, A_SPECIFIER *);
A_ID	* setFunctionDeclaratorBody(A_ID *, A_NODE *);
A_ID	* setParameterDeclaratorSpecifier(A_ID*, A_TYPE *);
A_ID	* setStructDeclaratorListSpecifier(A_ID*, A_TYPE *);
A_TYPE * setTypeNameSpecifier(A_TYPE *, A_SPECIFIER *);
A_TYPE * setTypeElementType(A_TYPE *, A_TYPE *);
A_TYPE * setTypeField(A_TYPE *, A_ID *);
A_TYPE * setTypeExpr(A_TYPE *, A_NODE*);
A_TYPE * setTypeAndKindOfDeclarator(A_TYPE *, ID_KIND, A_ID *);
A_TYPE * setTypeStructOrEnumIdentifier(T_KIND, char *, ID_KIND);
bool isNotSameFormalParameters(A_ID*, A_ID*);
bool isNotSameType(A_TYPE *, A_TYPE *);
bool isPointerOrArrayType(A_TYPE *);
void syntax_error();
void initalize();
#endif