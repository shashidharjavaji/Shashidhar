/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

Problem Code :SAP
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int index1, index2,temp;
	for (index1 = len - 1; index1 > 0; index1--)
	{
		if (Arr[index1] < Arr[index1 - 1])
		{ 
	    	int index2 = index1 - 1;
			while (index2 >= 0 && Arr[index1] < Arr[index2])
			{
				index2--;
			}
			temp = Arr[index2 + 1];
			Arr[index2 + 1] = Arr[index1];
			Arr[index1] = temp;
			break;
		}
	}
	return NULL;
}