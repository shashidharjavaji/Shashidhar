/*
OVERVIEW:
1)Write a function which takes a octal number as input and returns the hexadecimal number for 
  octalToHexadecimal().
E.g.: octalToHexadecimal(10) returns 8.

2)Write a function which takes a fractional octal number as input and returns the hexadecimal number for 
octalToHexadecimalFraction() until precision two
E.g.: octalToHexadecimal(6.01) returns 6.04

INPUTS: Single octal number num;

OUTPUT: hexadecimal value of the octal number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
#include<math.h>
int octalToHexadecimal(long int num)
{
	int decimal = 0, index = 0;
	if (num <= 0)
	{
		return 0;
	}
	while (num != 0)
	{
		decimal = decimal + (num % 10)* pow((double)8, index++);
		num = num / 10;
	}
	char hexaDeciNum[100];

	int index1 = 0;
	while (decimal != 0)
	{
		int temp = 0;

		temp = decimal % 16;


		if (temp < 10)
		{
			hexaDeciNum[index1] = temp + 48;
			index1++;
		}
		else
		{
			hexaDeciNum[index1] = temp + 55;
			index1++;
		}

		decimal = decimal / 16;
	}
	int first = 0;
	for (int count = index1 - 1; count >= 0; count--)
		first = first * 10 + hexaDeciNum[count] - '0';
	return first;
}

float octalToHexadecimalFraction(float num)
{
	return 0.0;
}