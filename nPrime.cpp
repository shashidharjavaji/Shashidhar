
/*
OVERVIEW: Given a number N return all the prime numbers upto the integer N.
Ex: input: 10 output: [2,3,5,7] 

INPUTS: An Integer N

OUTPUT: Return an Array of Prime numbers until the number N(N inclusive)

ERROR CASES: Return NULL for invalid inputs

Sample Input : 10
Sample Output : An Array consisting elements {2,3,5,7}
NOTES:

Try to think of a optimized way , and avoid unnecessary comparisons.
*/

#include <stdio.h>
#include <stdlib.h>
int* nPrime(int N)
{
	int *arr1 = (int*) malloc(100*sizeof(int));
	int index1, index2 = 0, index3 = 0;
	for (index1 = 2; index1 <= N; index1++)
	{
		int count = 0;
		for (index2 = 1; index2 <= index1; index2++)
		{
			if (index1%index2 == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			arr1[index3] = index1;
			index3++;
		}
	}
	if (N>0)
	{
		return arr1;
	}
	else
	{
		return NULL;
	}
}