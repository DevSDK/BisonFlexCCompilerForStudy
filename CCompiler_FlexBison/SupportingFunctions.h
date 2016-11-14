#ifndef __DEF_SUPPORTING_FUNCS__
#define __DEF_SUPPORTING_FUNCS__
#include <stdio.h>
#include <stdlib.h>
#include "Types.h"
#include "c_compiler.tab.h"
#include <string.h>
extern char * yytext;
A_TYPE * int_type, *char_type, *void_type, * float_type, *string_type;
A_NODE * root;
A_ID * current_id = NIL;
int syntax_err = 0;
int line_no = 1;
int current_level = 0;
A_NODE	* makeNode(NODE_NAME, A_NODE *, A_NODE*, A_NODE*);
A_NODE	* makeNodeList(NODE_NAME, A_NODE *, A_NODE*);
A_ID	* makeIdentifier(char *);
A_ID    * makeDummyIdentifier();
A_TYPE  * makeType(T_KIND);
A_SPECIFIER * makeSpecifer(A_TYPE*, S_KIND);
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
void syntax_error(int, char *);
void initalize();
A_NODE * makeNode(NODE_NAME n, A_NODE *a, A_NODE * b, A_NODE *c)
{
	A_NODE * m;
	m = (A_NODE *)malloc(sizeof(A_NODE));
	m->name = n;
	m->llink = a;
	m->clink = b;
	m->rlink = c;
	m->type = NIL;
	m->line = line_no;
	m->value = 0;
	return m;
}
A_NODE * makeNodeList(NODE_NAME n, A_NODE *a, A_NODE *b)
{
	A_NODE * m, *k;
	k = a;
	while (k->rlink)
		k = k->rlink;
	m = (A_NODE *)malloc(sizeof(A_NODE));
	m->name = k->name;
	m->llink = NIL;
	m->clink = NIL;
	m->rlink = NIL;
	m->type = NIL;
	m->line = line_no;
	m->value = 0;
	k->name = n;
	k->llink = b;
	k->rlink = m;
	return a;
}


A_ID * makeIdentifier(char *s)
{
	A_ID *id;
	id = (A_ID*)malloc(sizeof(A_ID));
	id->name = s;
	id->kind = ID_KIND::ID_NULL;
	id->specifier = S_KIND::S_NULL;
	id->level = current_level;
	id->address = 0;
	id->init = NIL;
	id->type = NIL;
	id->link = NIL;
	id->line = line_no;
	id->value = 0;
	id->prev = current_id;
	current_id = id;
	return id;

}

A_ID * makeDummyIdentifier()
{
	A_ID * id =(A_ID *) malloc(sizeof(A_ID));
	id->name = "";
	id->kind = ID_KIND::ID_NULL;
	id->specifier = S_KIND::S_NULL;
	id->level = current_level;
	id->address = 0;
	id->init = NIL;
	id->type = NIL;
	id->link = NIL;
	id->line = line_no;
	id->value = 0;
	id->prev = 0;
	return id;
}
A_TYPE * makeType(T_KIND k)
{
	A_TYPE * t;
	t = (A_TYPE *)malloc(sizeof(A_TYPE));
	t->kind = k;
	t->size = 0;
	t->local_var_size = 0;
	t->element_type = NIL;
	t->field = NIL;
	t->expr = NIL;
	t->check = FALSE;
	t->prt = FALSE;
	t->line = line_no;
	return t;
	
}

A_SPECIFIER * makeSpecifer(A_TYPE * t, S_KIND s)
{
	A_SPECIFIER *p;
	p = (A_SPECIFIER *)malloc(sizeof(A_SPECIFIER));
	p->type = t;
	p->stor = s;
	p->line = line_no;
	return p;
}
A_ID * searchIdentifier(char *s, A_ID * id)
{
	while (id)
	{
		if (strcmp(id->name, s)==0)
			break;
		id = id->prev;
	}
	return id;
}
A_ID * searchIdentifierAtCurrentLevel(char *s, A_ID * id)
{
	while (id)
	{
		if (id->level < current_level)
			return NIL;
		if (strcmp(id->name, s) == 0)
			break;
		id = id->prev;
	}
	return id;
}

void checkForwardReference()
{
	A_ID * id;
	A_TYPE * t;
	id = current_id;
	while (id)
	{
		if (id->level < current_level)
		{
			break;
		}
		t = id->type;
		if (id->kind = ID_NULL)
			syntax_error(31, id->name);
		else if ((id->kind == ID_STRUCT || id->kind == ID_ENUM) && t->field == NIL)
			syntax_error(32, id->name);
		id = id->prev;
	}

}

void setDefaultSpecifier(A_SPECIFIER * p)
{
	A_TYPE * t;
	if (p->type = NIL)
		p->type = int_type;
	if (p->stor == S_NULL)
		p->stor = S_AUTO;
}

A_SPECIFIER * updateSpecifier(A_SPECIFIER * p, A_TYPE * t, S_KIND s)
{
	if (t)
		if (p->type)
		{
			if (p->type != t)
				syntax_error(24, nullptr);

		}
		else
			p->type = t;
	if (s)
	{
		if (p->stor)
		{ 
			if (s != p->stor)
				syntax_error(24,nullptr);
		}
		else
			p->stor = s;
	}
	return p;
}

A_ID* linkDeclaratorList(A_ID * id1, A_ID * id2)
{
	A_ID * m = id1;
	if (id1 == NIL)
		return id2;
	while (m->link)
		m = m->link;
	m->link = id2;
	return id1;
} 

A_ID * getIdentifierDeclarator(char *s)
{
	A_ID * id;
	id = searchIdentifier(s, current_id);
	if (id == NIL)
		syntax_error(13, s);
	return id;
}

A_TYPE * getTypeOfStructOrEnumRefIdentifier(T_KIND k, char *s, ID_KIND kk)
{
	A_TYPE *t;
	A_ID *id;
	id = searchIdentifier(s, current_id);
	if (id)
	{
		if (id->kind == kk && id->type->kind == k)
		{
			return id->type;
		}
		else
			syntax_error(11, s);
		t = makeType(k);
		id->kind = kk;
		id->type = t;
		return t;		
	}
}
A_ID * setDeclaratorKind(A_ID * id,  A_NODE * n)
{
	id->init = n;
	return  id;	
}
A_ID * setDeclaratorListSpecifier(A_ID * id, A_SPECIFIER * p)
{
	A_ID * a;
	setDefaultSpecifier(p);
	a = id;
	while (a)
	{
		if (strlen(a->name) && searchIdentifierAtCurrentLevel(a->name, a->prev))
		
		a = setDeclaratorElementType(a, p->type);
		if (p->stor == S_TYPEDEF)
			a->kind = ID_TYPE;
		else if (a->type->kind == T_FUNC)
			a->kind = ID_FUNC;
		else
			a->kind = ID_VAR;
		a->specifier = p->stor;
		if (a->specifier == S_NULL)
			a->specifier = S_AUTO;
		a = a->link;	
	}
	return id;
}

A_ID * setParameterDeclaratorSpecifier(A_ID * id, A_SPECIFIER * p)
{
	if (searchIdentifierAtCurrentLevel(id->name, id->prev))
		syntax_error(12, id->name);
	if (p->stor || p->type == void_type)
		syntax_error(14,id->name);
	setDefaultSpecifier(p);
	id = setDeclaratorElementType(id, p->type);
	id->kind = ID_PARM;
	return id;
}
A_ID * setStructDeclaratorListSpecifier(A_ID * id, A_TYPE * t)
{
	A_ID *a;
	a = id;
	while (a)
	{
		if (searchIdentifierAtCurrentLevel(a->name, a->prev))
			syntax_error(12, a->name);
		a = setDeclaratorElementType(a, t);
		a->kind = ID_FIELD;
		a = a->link;
	}
	return id;
}

A_TYPE * setTypeNameSpecifier(A_TYPE * t, A_SPECIFIER * p)
{
	if (p->stor)
		syntax_error(20, "");
	setDefaultSpecifier(p);
	t = setTypeElementType(t, p->type);
	return t;
}
A_TYPE * setTypeElementType(A_TYPE * t, A_TYPE * s)
{
	A_TYPE * q;
	if (t == NIL)
		return s;
	q = t;
	while (q->element_type)
		q = q->element_type;
	q->element_type = s;
	return t;
}
A_TYPE * setTypeField(A_TYPE * t, A_ID * n)
{
	t->field = n;
	return t;
}
A_TYPE * setTypeExpr(A_TYPE * t, A_NODE * n)
{
	t->expr=n;
	return t;
}
A_TYPE * setTypeStructOrEnumIdentifier(T_KIND k, char * s, ID_KIND kk)
{
	A_TYPE * t;
	A_ID * id, *a;
	a = searchIdentifierAtCurrentLevel(s, current_id);

	if (a)
	{
		if (a->kind == kk && a->type->kind == k)
		{
			if (a->type->field)
				syntax_error(12, s);
			else
				return a->type;
		}
		else
			syntax_error(12, s);
	}
	id = makeIdentifier(s);
	t = makeType(k);
	id->type = t;
	id->kind = kk;
	return t;
}


A_TYPE * setTypeAndKindOfDeclarator(A_TYPE * t, ID_KIND k, A_ID * id)
{
	if (searchIdentifier(id->name, id->prev))
		syntax_error(12, id->name);
	id->kind = k;
	id->type = t;
	return t;
}

bool isNotSameFormalParameters(A_ID * a, A_ID * b)
{
	if (a == NIL)
		return false;
	while (a)
	{
		if (b == NIL || isNotSameType(a->type, b->type))
			return false;
		a = a->link;
		b = b->link;
	}
	if (b)
		return true;
	else
		return false;

}
bool isNotSameType(A_TYPE * t1, A_TYPE * t2)
{
	if (isPointerOrArrayType(t1) || isPointerOrArrayType(t2))
		return isNotSameType(t1->element_type, t2->element_type);
	else
		return t1 != t2;
}


void initalize()
{
	int_type = setTypeAndKindOfDeclarator(makeType(T_ENUM), ID_TYPE, makeIdentifier("int"));
	float_type = setTypeAndKindOfDeclarator(makeType(T_ENUM), ID_TYPE, makeIdentifier("float"));
	char_type = setTypeAndKindOfDeclarator(makeType(T_ENUM), ID_TYPE, makeIdentifier("char"));
	void_type = setTypeAndKindOfDeclarator(makeType(T_ENUM), ID_TYPE, makeIdentifier("void"));
	string_type = setTypeElementType(makeType(T_POINTER), char_type);
	int_type->size = 4;			int_type->check = true;
	float_type->size = 4;		float_type->check = true;
	char_type->size = 1;		char_type->check = true;
	void_type->size = 0;		void_type->check = true;
	string_type->size = 4;		string_type->check = true;

	setDeclaratorTypeAndKind(makeIdentifier("printf"), setTypeField(setTypeElementType(makeType(T_FUNC), void_type),
	linkDeclaratorList(setDeclaratorTypeAndKind(makeDummyIdentifier(), string_type, ID_PARM), 
	setDeclaratorKind(makeDummyIdentifier(), ID_PARM))), ID_FUNC);

	setDeclaratorTypeAndKind(
		makeIdentifier("malloc"),
		setTypeField(
			setTypeElementType(makeType(T_FUNC), 
			string_type), setDeclaratorTypeAndKind(makeDummyIdentifier(), int_type, ID_PARM)), ID_FUNC);
}

void syntax_error(int i, char * s)
{
	syntax_err++;
	printf("line %d : syntax error : ", line_no);
	switch (i)
	{
	
	case 11: printf("illegal reference struct or union identifier %s ", s);
		break;
	case 12: printf("redeclaration of identifier %s ", s);
		break;
	case 13: printf("undefined identifier %s ", s);
		break;
	case 14: printf("illegal type specifier in formal parameter ");
		break;
	case 20: printf("illegal storage class in type specifiers ");
		break;
	case 21: printf("illegal function declarator ");
		break;
	case 22: printf("conflicting parm type in prototype function function %s ", s);
		break;
	case 23: printf("empty parameter name ");
		break;
	case 24: printf("illegal declaration specifiers ");
		break;
	case 25: printf("illegal function specifiers");
		break;
	case 26: printf("illegal or conflictting return type in function %s , s");
		break;
	case 31: printf("undefined type for identifier %s",s);
		break;
	case 32: printf("imcomplete forward reference for identifier %s",s);
		break;

	default: printf("unknown");
		break;
		if (strlen(yytext) == 0)
			printf(" at end \n");
		else
			printf(" near %s \n",yytext);

	}
}

#endif
