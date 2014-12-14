/*
 * Project name:
 * Implementace interpretu imperativního jazyka IFJ14
 *
 * Repository:
 * https://github.com/Dasio/IFJ
 *
 * Team:
 * Dávid Mikuš			(xmikus15)
 * Peter Hostačný		(xhosta03)
 * Tomáš Kello			(xkello00)
 * Adam Lučanský		(xlucan01)
 * Michaela Lukášová		(xlukas09)
 */

#include "ial.h"
/*
	Find substring in string
	original input->data
	looking for find->data

	REQUIRED
		both input structure have to contain LENGTH of data
	Return
	  SUCCESSFUL
		index which point to input index (start from "0")
	  UNSUCCESSFUL
		length of input length
		ERR_Allocation if unable to malloc
 */

extern Context *mainContext;


int FindString(String *input, String *find)
{
	if(find->length == 0)
		return 1;
	int *Mask = GetFormula(find);
	if(Mask == NULL)
	{
		setError(ERR_Allocation);
		return 0; // did not find value + ERROR
	}
	uint32_t inInd=1, fiInd=1;
	while(inInd<=input->length && fiInd<=find->length)
	{
		if(input->data[inInd-1] == find->data[fiInd-1])
		{
			inInd++;
			fiInd++;
		}
		else
		{
			fiInd = Mask[fiInd-1];
			if(fiInd==0)
			{
				inInd++;
				fiInd++;
			}
		}
	}
	free(Mask);
	Mask = NULL;
	if(fiInd>find->length)
		return inInd - find->length; // index where strings match

	return 0; // did not find value
}



/*
	Imput is string and it make Mask for KMP algorithm
	required LENGTH in String structure
 */
int *GetFormula(String *find)
{
	int r;
	int *Mask = malloc((find->length) * sizeof(int));
	if(Mask==NULL)
		return NULL;
	Mask[0] = 0;
	for (uint32_t i = 1; i < find->length; ++i)
	{
		r = Mask[i-1];
		while( (r>0) && (find->data[r-1] != find->data[i-1]) )
			r=Mask[r-1];
		Mask[i] = r+1;
	}
	return Mask;
}

/*
	Imput is unordered array of char ended with character == 0
	sort that array based on ASCII number.

	used Recursive Quick Sort
 */

// get length of string and call QuickSortRecursive function
void QuickSort(String *string)
{
	QuickSortRecursive(string->data, 0, string->length - 1);
}

//QuickSort which use recursive function
void QuickSortRecursive(char *arr, int left, int right)
{
	int i = left;
	int j = right;
	int pm = arr[(i+j)/2];
	char swap;
	do
	{
		while (arr[i] < pm)
			i = i + 1;
		while (arr[j] > pm)
			j = j - 1;
		if (i <= j)
		{
			swap = arr[i];
			arr[i] = arr[j];
			arr[j] = swap;
			i++;
			j--;
		}
	}while (i<=j);

	if (left < j)
		QuickSortRecursive(arr,left,j);
	if (i < right)
		QuickSortRecursive(arr,i,right);
}

// Calculate index for HashFunction
uint32_t GetHash(const char *str, uint32_t htab_size)
{
	uint32_t h=0;
	const uint8_t *p;
	for(p=(const uint8_t*)str; *p!='\0'; p++)
		h = 65599*h + *p;
	return h % htab_size;
}


Symbol *SymbolFind(Context *funCont, char *name)
{
	if (funCont==NULL || name==NULL) return NULL;
	/* Vypocitanie indexu kde je kluc ulozeny a ulozenie prveho listu*/
	SymbolList *item;
	item = funCont->locTable[GetHash(name,funCont->locSize)];
	for(; item != NULL; item=item->next)
		if(strcmp(item->data.name, name) == 0)
			break;
	return item == NULL ? NULL : &(item->data);
}

Symbol *SymbolAdd(Context *funCont, SymbolType type, char *name, Context *symbolContext, Symbol *foundSymbol, bool skipCheck)
{
	Symbol *symbol = foundSymbol?foundSymbol:SymbolFind(funCont, name);
	if (symbol != NULL)
	{
		// Symbol already exist
		setError(ERR_RedefVar);
		return NULL;
	}
	SymbolList *newItem = malloc(sizeof(SymbolList));
	if (newItem == NULL)
	{
		setError(ERR_Allocation);
		return NULL;
	}
	// fill newItem
	newItem->data.type = type;
	if (funCont == mainContext)
	{
		// global variables indexed from 1
		newItem->data.index = ++(funCont->locCount);
	}
	else
	{
		// local variables indexed from 2
		newItem->data.index = ++(funCont->locCount) + 1;
		// Check if var name doesn't collide with function
		if(!skipCheck)
		{
			SymbolList **table = mainContext->locTable;
			for(int32_t index = 0; index<mainContext->locSize; index++)
			{
				for(SymbolList *item = table[index]; item != NULL; item=item->next)
				{
					if(item->data.type == T_FunPointer && strcmp(name,item->data.name) == 0)
					{
						setError(ERR_VarAsFunc);
						return NULL;
					}
				}
			}
		}
	}
	newItem->data.name = name;
	newItem->data.funCont = symbolContext;
	newItem->data.stateFunc = FS_Undefined;
	newItem->data.adressVector = NULL;
	if(type == T_FunPointer)
		funCont->locCount--;
	uint32_t index = GetHash(name, funCont->locSize);

	// save newItem to first position of hashTable[index]
	newItem->next = funCont->locTable[index];
	funCont->locTable[index] = newItem;
	return &(newItem->data);
}

bool ResizeHashTable(Context *funCont, uint32_t NewSize)
{
	SymbolList **tmp = malloc(sizeof(SymbolList*)* NewSize);

	SymbolList *item;
	uint32_t x;

	for (int32_t i = 0; i < funCont->locSize; ++i)
	{
		item = funCont->locTable[i];
		for(; item != NULL; item=item->next)
		{
			x = GetHash(item->data.name, NewSize);
			item->next = tmp[x];
			tmp[x] = item;
		}
	}

	free(funCont->locTable);
	funCont->locTable = tmp;

	return true;
}


void ContextLocTableFree(Context *t)
{
	if (t==NULL) return;
	if (t->locTable == NULL) return;
	SymbolList *item = NULL;
	SymbolList *temp = NULL;
	for (int32_t i = 0; i < t->locSize; i++)
	{
		if (t->locTable[i]==NULL)
			continue;
		for(item=t->locTable[i];item != NULL;item=temp)
		{
			temp=item->next;
			if(item->data.type == T_FunPointer)
				FreeContext(item->data.funCont);
			SymbolListFree(item);
		}
		t->locTable[i] = NULL;
	}
	free(t->locTable);
	t->locTable = NULL;
}

void SymbolListFree(SymbolList *t)
{
	if (t==NULL) return;
	//destroyString(&t->data.name);
	free(t);
	t = NULL;
}
