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
 */

int FindString(String *input, String *find)
{
	int *Mask = GetFormula(find);
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
    if(fiInd>find->length)
        return inInd-find->length-1;
    return input->length;
}



/*
	Imput is string and it make Mask for KMP algorithm
	required LENGTH in String structure
 */
int *GetFormula(String *find)
{
	int r;
	int *Mask = malloc((find->length) * sizeof(int));
	if(Mask==NULL) return 0;
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
 */
void QuickSort(char arr[])
{
    Vector *vec = initintVector(8);
    int r,l,i,j;
    intVectorAppend(vec, 0); //left border of sorting
    intVectorAppend(vec, len(arr)-1); //rights border of sorting

    while (vec->used != 0)
    {
        r = *intVectorPop(vec); //get right border
        l = *intVectorPop(vec); //get left border
        while(l<r) //while left gruping did not finished
        {
            i=l; j=r; //prepare index on border of group 
            int p = (i+j)/2; //set pivot (center value)
            do
            {
            	// find higher value of pivot on left side
                while ((arr[i] <= arr[p]) & (i!=p)) i++;
                //find lower value of pivot on right side
                while ((arr[j] >= arr[p]) & (j!=p)) j--;
                if (i<j) //if the values are not same replace them
                {
                    arr[i] += arr[j];
                    arr[j] = arr[i] - arr[j];
                    arr[i] -= arr[j];
                }
            }while (i>j); //while group is not finished (indexes are the same)
            intVectorAppend(vec, i+1); //save left border of right group
            intVectorAppend(vec, r);  //save right border of right group
            r=j; //go to left group and set right border
        }
    }
    intVectorFree(vec);
}

//return lengthe of array of chars (last character == 0)
uint16_t len(char *arr)
{
    uint16_t i=0;
    while(arr[i] != 0) i++;
    return i;
}
