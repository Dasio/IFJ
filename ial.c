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

int FindString(String *input, String *find)
{
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
	QuickSortRecursive(string->data, string->length);
}

//QuickSort which use recursive function
void QuickSortRecursive(char *arr, uint32_t n)
{
	if(n<=1)
		return;// if arr include only one number
	char *l=arr, *r=arr+n-1; //prepare index on border of group
	char p = arr[n/2]; //set pivot (center value)

	while (l <= r) { // while left and right border finished
		if (*l < p) l++; //skip left number if is smaller
		else if (*r > p) r--; //skip right number if is smaller
		else {
			if (l!=r) //if the numbers are different change their value
			{
				*l += *r;
				*r = *l - *r;
				*l -= *r;
			}
			l++; r--; //goto next numbers
		}
	}

	//recursive call for array on left and right side from the pivot
	QuickSortRecursive(arr, r-arr+1);
	QuickSortRecursive(l, arr+n-l);
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

Symbol *SymbolAdd(Context *funCont, SymbolType type, char *name, Context *symbolContext, Symbol *foundSymbol)
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
	newItem->data.index = ++(funCont->locCount); // unique index in stack
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
