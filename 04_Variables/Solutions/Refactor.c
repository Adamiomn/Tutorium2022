/*
	Task: Try to understand what the code is trying to do and give all the variables an appropriate name.
	Use the tools in your IDE to quickly rename all the variables.
	Also adjust the print statements to communicate what was calculated.
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input = 0;
	printf("Enter a number:\n");
	scanf("%d", &input);

	if (input < 0)
	{
		return EXIT_FAILURE;
	}


	/*----------------- (1) ----------------*/
	int i = input;
	long sum = 0;
	while (i > 0)
	{
		sum += i;
		--i;
	}
	printf("sum: %ld\n", sum);


	/*----------------- (2) ----------------*/
	i = 1;
	long long factorial = 1;
	while (i <= input)
	{
		factorial *= i;
		++i;
	}
	printf("factorial: %lld\n", factorial);


	/*----------------- (3) ----------------*/
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