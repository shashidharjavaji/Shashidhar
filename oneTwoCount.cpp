/*
OVERVIEW: Given an Integer Array return the count of one's and two's in a new array of length two.
Ex: input: [1,2,2,1,2,1,2] 
	output: [3,4]
	where 3 is the count of 1's and 4 is the count of 2's

INPUTS: An Integer Array and length of the array 

OUTPUT: An Array with 1's count and 2's count

ERROR CASES: Return NULL for invalid inputs

Difficulty : Very Easy
*/

#include <stdio.h>
#include <stdlib.h>
int* oneTwoCount(int* input, int length)
{
	int index1, index2, count1=0, count2=0;
	for (index1 = 0; index1 < length; index1++)
	{
		if (input[index1] == 1)
		{
			count1++;
		}
		if (input[index1] == 2)
		{
			count2++;
		}
	}

	int* arr = (int*)malloc(2 * sizeof(int));
	arr[0] = count1;
	arr[1] = count2;

	if (length > 0)
	{
		return arr;
	}
	else
	{
		return NULL;
	}
}