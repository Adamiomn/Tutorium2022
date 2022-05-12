/*
	Task: Write a function that counts the number of primes in a given range. Think about what parameters the function should take and what can be const.
*/



#include <stdio.h>
#include <stdlib.h>


int IsPrime(const int number)
{
	int isPrime = 1;
	for (int i = 2; i < number; ++i)
	{
		if (number % i == 0)
		{
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}


unsigned CountPrimes(const unsigned lowerBound, const unsigned upperBound)
{
	unsigned count = 0;
	for (unsigned i = lowerBound; i <= upperBound; ++i)
	{
		if (IsPrime(i))
		{
			++count;
		}
	}
	return count;
}


int main(void)
{
	unsigned lowerBound = 0;
	unsigned upperBound = 0;
	printf("Enter two numbers: [LOWER BOUND] [UPPER BOUND] \n");
	if (scanf("%u %u", &lowerBound, &upperBound) < 2 || lowerBound >= upperBound)
	{
		printf("Invalid input!\n");
		return EXIT_FAILURE;
	}

	printf("There are %u number of primes between %u and %u\n",
		   CountPrimes(lowerBound, upperBound),
		   lowerBound,
		   upperBound);
	return EXIT_SUCCESS;
}