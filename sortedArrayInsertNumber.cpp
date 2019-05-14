/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use memory allocation techniques to allocate memory.

ProblemCode :SAIN
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (Arr==NULL || len<=0)
	{
		return NULL;

	}
	int index1;
	for (index1 = len - 1; index1 >= 0; index1--)
	{
		if (Arr[index1] > num)
		{
			Arr[index1 + 1] = Arr[index1];
		}
		else
		{
			break;
		}
	}
	Arr[index1 + 1] = num;
	return Arr;
}