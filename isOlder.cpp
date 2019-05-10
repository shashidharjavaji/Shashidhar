/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {

	int count, yearOne, yearTwo, monthOne, monthTwo, dayOne, dayTwo, first = 0, second = 0, dashOne = 0, dashTwo = 0;;
	if (dob1[2] != '-' && dob1[5] != '-')
	{
		return -1;
	}
	if (dob2[2] != '-' && dob2[5] != '-')
	{
		return -1;

	}
	for (int count = 0; dob1[count] != '\0'; count++)
	{
		if ((dob1[count] >= 65 && dob1[count] <= 122))
			return -1;
		if ((dob2[count] >= 65 && dob2[count] <= 122))
			return -1;

		if (dob1[count] == '-' || dob2[count] == '-')
		{
			continue;
		}
		else
		{
			first = first * 10 + dob1[count] - '0';
			second = second * 10 + dob2[count] - '0';
		}
	}
	yearOne = first % 10000;
	first = first / 10000;
	monthOne = first % 100;
	dayOne = first / 100;
	yearTwo = second % 10000;
	second = second / 10000;
	monthTwo = second % 100;
	dayTwo = second / 100;
	if (yearOne >= 1900 && yearOne <= 9999)
	{
		//check month
		if (monthOne >= 1 && monthOne <= 12)
		{
			//check days
			if ((dayOne >= 1 && dayOne <= 31) && (monthOne == 1 || monthOne == 3 || monthOne == 5 || monthOne == 7 || monthOne == 8 || monthOne == 10 || monthOne == 12))
			{
			}
			else if ((dayOne >= 1 && dayOne <= 30) && (monthOne == 4 || monthOne == 6 || monthOne == 9 || monthOne == 11))
			{
			}
			else if ((dayOne >= 1 && dayOne <= 28) && (monthOne == 2))
			{
			}
			else if (dayOne == 29 && monthOne == 2 && (yearOne % 400 == 0 || (yearOne % 4 == 0 && yearOne % 100 != 0)))
			{
			}
			else
				return -1;
		}
		else
		{
			return -1;

		}
	}
	else
	{
		return -1;

	}
	if (yearTwo >= 1900 && yearTwo <= 9999)
	{
		//check month
		if (monthTwo >= 1 && monthTwo <= 12)
		{
			//check days
			if ((dayTwo >= 1 && dayTwo <= 31) && (monthTwo == 1 || monthTwo == 3 || monthTwo == 5 || monthTwo == 7 || monthTwo == 8 || monthTwo == 10 || monthTwo == 12))
			{
			}
			else if ((dayTwo >= 1 && dayTwo <= 30) && (monthTwo == 4 || monthTwo == 6 || monthTwo == 9 || monthTwo == 11))
			{
			}
			else if ((dayTwo >= 1 && dayTwo <= 28) && (monthTwo == 2))
			{
			}
			else if (dayTwo == 29 && monthTwo == 2 && (yearTwo % 400 == 0 || (yearTwo % 4 == 0 && yearTwo % 100 != 0)))
			{
			}
			else
				return -1;
		}
		else
		{
			return -1;

		}
	}
	else
	{
		return -1;

	}
	if (yearOne > yearTwo)
	{
		return 2;
	}
	else if (yearOne < yearTwo)
	{
		return 1;
	}
	else
	{
		if (monthOne < monthTwo)
		{
			return 1;

		}
		else if (monthOne > monthTwo)
		{
			return 2;
		}
		else
		{
			if (dayOne < dayTwo)
			{
				return 1;
			}
			else if (dayOne > dayTwo)
			{
				return 2;
			}
			else
			{
				return 0;
			}
		}
	}
}