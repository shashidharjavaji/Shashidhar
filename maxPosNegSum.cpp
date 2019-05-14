
/*
OVERVIEW: Given an array of integers find the maximum possible sum formed by a positive and the negative
integer in the array.
Ex: input: [1, 9, 8, 2, 3, -1,-10,-5] output: 8 (formed by 9 and -1) 

INPUTS: An Integer array and the length of the array

OUTPUT: Maximum possible sum formed by a positive and the negative integer in the array

ERROR CASES: Return 0 for the invalid inputs

NOTES:
*/

#include <stdio.h>

int maxPosNegSum(int* input,int length)
{  if (length<=0)
	{
	return 0;
	}
	int index1, index2, posMax=0, negMax=0,flag=0;
	for (index1 = 0; index1<length; index1++)
	{
		if (input[index1]>=0)
		{
			posMax = input[index1];
			flag++;
			break;
		}
	}
	for (index1 = 0; index1<length; index1++)
	{
		if (input[index1]<0)
		{
			negMax = input[index1];
			break;
		}
	}
	for (index1 = 0; index1<length; index1++)
	{
		for (index2 = index1; index2<length; index2++)
		{
			if (input[index2]>posMax)
			{
				posMax = input[index2];
			}
			if (input[index2]<0 && input[index2]>negMax)
			{
				negMax = input[index2];
			}
		}
	}
	if (negMax == 0 || flag==0 )
	{
		return 0;
	}
	else
	{
		return posMax + negMax;
	}
}