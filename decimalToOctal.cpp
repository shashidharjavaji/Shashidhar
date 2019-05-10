/*
OVERVIEW: 
1)Write a function which takes a decimal number as input and returns the octal number for decimalToOctal().
E.g.: decimalToOctal(10) returns 12.

2)Write a function which takes a fractional decimal number as input and returns the octal number for decimalToOctalFraction()
until precision two
E.g.: decimalToOctal(6.06) returns 6.03

INPUTS: Single decimal number num;

OUTPUT: Octal value of the Decimal Number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>

int decimalToOctal(int num)
{ if (num<0)
{
	return 0;

}
	int octalNumber[10], indexOne = 1, indexTwo, index, number=0;
	while (num != 0)
	{
		octalNumber[indexOne++] = num % 8;
		num = num / 8;
	}

	for (indexTwo = indexOne - 1,index=0; indexTwo > 0; indexTwo--,index++)
	{
		number=number*10+octalNumber[indexTwo];
	}
	return number;
}

float decimalToOctalFraction(float num)
{
	int a[10], index1 = 0;;
	int intpart = (int)num;
	int int1 = decimalToOctal(intpart);
	float decpart = num - intpart;
	for (int index = 0; decpart != 0; index++)
	{
		decpart = decpart * 8;
		if (decpart>1)
		{
			a[index1] = (int)decpart;
			decpart = decpart - a[index1];
			index1++;
		}
	}
	int index;
	float index3 = 0;
	for (index = index1 - 1; index >= 0; index--)
		index3 = .10 * index3 + .1*a[index];
	float number1 = int1 + index3;
	return number1;
}

