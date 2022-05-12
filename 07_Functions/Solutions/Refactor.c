/*
	Task: Refactor all the individual parts of the program into functions and replace the while-loops with for-loops. What can be made const?
*/



#include <stdio.h>
#include <stdlib.h>


long CalculateSum(const unsigned number)
{
	long sum = 0;
	for (unsigned i = number; i > 0; --i)
	{
		sum += i;
	}
	return sum;
}


long long CalculateFactorial(const unsigned number)
{
	long long factorial = 1;
	for (unsigned i = 1; i <= number; ++i)
	{
		factorial *= i;
	}
	return factorial;
}


int IsPrime(const unsigned number)
{
	int isPrime = 1;
	for (unsigned i = 2; i < number; ++i)
	{
		if (number % i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}


int main(void)
{
	unsigned input = 0;
	printf("Enter a non-negative number:\n");
	if (scanf("%u", &input) < 1)
	{
		printf("Invalid input!\n");
		return EXIT_FAILURE;
	}


	printf("sum: %ld\n", CalculateSum(input));
	printf("factorial: %lld\n", CalculateFactorial(input));
	if (IsPrime(input))
	{
		printf("The number is prime!\n");
	}
	else
	{
		printf("The number is not prime :(\n");
	}

	return EXIT_SUCCESS;
}