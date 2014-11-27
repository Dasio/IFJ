/**
 * created 2.10.2014
 * symbol.c IFJ
 */


#include "symbol.h"

Context *InitContext()
{
	// malloc Context
	Context *funCont = malloc(sizeof(Context));
	if(funCont == NULL)
	{
		setError(ERR_Allocation)
		return NULL;
	}

	// malloc arg array
	funCont->arg = malloc(sizeof(struct SymbolList*)*DEFAULT_ARG_NUM);
	if(funCont->arg == NULL)
	{
		setError(ERR_Allocation);
		free(funCont);
		return NULL;
	}

	// malloc HASH array
	funCont->locTable = malloc(sizeof(struct SymbolList*)*DEFAULT_HASH_SIZE);
	if (funCont->locTable == NULL)
	{
		setError(ERR_Allocation);
		free(funCont->arg);
		free(funCont);
		return NULL;
	}

	// erase HASH array
	for(unsigned i=0;i<DEFAULT_HASH_SIZE;i++)
		funCont->locTable[i]=NULL;

	// erase arg array
	for(unsigned i=0;i<DEFAULT_ARG_NUM;i++)
		funCont->arg[i]=NULL;

	// set other values of Context
	funCont->argCount = 0;
	funCont->locCount = 0;
	funCont->argMax = DEFAULT_ARG_NUM;
	funCont->locSize = DEFAULT_HASH_SIZE;
	funCont->instrucIndex = 0;
	funCont->returnType = T_Undefined;
	return funCont;
}

// to add Symbol without argument call htab_addSymbol in ial.c file
// SymbolContext is NULL if SymbolType is variable
Symbol *AddArgToContext(Context *funCont, SymbolType type, char *name, Context *symbolContext)
{
	if(funCont->argCount >= funCont->argMax)
	{
		funCont->argMax *= 2;
		funCont->arg = realloc(funCont->arg, funCont->argMax);
	}

	Symbol *symbol = SymbolAdd(funCont, type, name, symbolContext, NULL);
	funCont->arg[funCont->argCount++] = symbol;
	funCont->locCount--; // Arguments are not included in locCount number
	return symbol;
}

void FreeContext(Context *funCont)
{
	if (funCont==NULL)
		return;

	ContextLocTableFree(funCont);

	if(funCont->locTable != NULL)
		free(funCont->locTable);
	funCont->locTable = NULL;

	if(funCont->arg != NULL)
		free(funCont->arg);
	funCont->arg = NULL;

	free(funCont);
	funCont = NULL;
}
ArgList *initArgList()
{
	ArgList *list = malloc(sizeof(ArgList));
	if(list == NULL)
	{
		setError(ERR_Allocation);
		return NULL;
	}
	list->argCount = 0;
	list->head = NULL;
	list->last = NULL;
	return list;
}
Argument *addArgToList(ArgList *list,char *name,SymbolType type)
{
	Argument *arg = malloc(sizeof(Argument));
	if(arg == NULL)
	{
		setError(ERR_Allocation);
		return NULL;
	}
	arg->name = name;
	arg->type = type;
	arg->next = NULL;
	// First arg
	if(list->head == NULL)
		list->head = arg;
	else
		list->last->next = arg;
	list->last = arg;
	list->argCount++;
	return arg;

}
void freeArgList(ArgList *list)
{
	if(list == NULL || list->head == NULL)
		return;
	Argument *tmp;
	for(Argument *arg = list->head; arg;)
	{
		tmp = arg;
		arg = arg->next;
		free(tmp);
	}
	list->head = NULL;
	list->last = NULL;
}
