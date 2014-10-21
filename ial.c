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
