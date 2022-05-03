/*
	Task: Refactor all the individual parts of the program into functions and replace the while-loops with for-loops. What can be made const?
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned input = 0;
	printf("Enter a non-negative number:\n");
	if (scanf("%u", &input) < 1)
	{
		printf("Invalid input!\n");
		return EXIT_FAILURE;
	}


	unsigned i = input;
	long sum = 0;
	while (i > 0)
	{
		sum += i;
		--i;
	}
	printf("sum: %ld\n", sum);


	i = 1;
	long long factorial = 1;
	while (i <= input)
	{
		factorial *= i;
		++i;
	}
	printf("factorial: %lld\n", factorial);


	i = 2;
	int isPrime = 1;
	while (i < input)
	{
		if (input % i == 0)
		{
			isPrime = 0;
			break;
		}
		++i;
	}
	if (isPrime)
	{
		printf("The number is prime!\n");
	}
	else
	{
		printf("The number is not prime :(\n");
	}

	return EXIT_SUCCESS;
}