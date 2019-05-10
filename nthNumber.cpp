/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
	long long int a[20];
	a[0] = 0;
	a[1] = 1;
	for (int index = 2; index<n; index++)
	{
		a[index] = a[index - 1] + a[index - 2];
	}
	return a[n- 1];
}

int nthPrime(int num)
{ if (num<=0)
{
	return -1;
}
	int second= 2, count = 0;
	if (num == 1)
	{
		return 2;
	}
	else
	{
		for (int first = 2; first < (num*num); first++)
		{
			for (second = 2; second < first; second++)
			{
				if (first%second == 0)
					break;

			}
			if (first == second)
			{
				count++;
				if (count == num)
				{
					return first;
				}
			}
		}
	}
}