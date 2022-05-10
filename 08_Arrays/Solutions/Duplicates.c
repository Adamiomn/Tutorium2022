/*
	Task: Write a program with the following behaviour:
			a) Ask the user to enter a positive number n. This will be the number of the numbers the user is allowed to enter.
			b) Ask the user to enter n unique integers, one by one. If the user has already entered the number, communicate that fact and discard the number.
			c) When the user has entered n unique integers, compute the sum and print it.
*/



#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


bool Contains(int array[], size_t size, int element)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (array[i] == element)
		{
			return true;
		}
	}
	return false;
}


long Sum(int array[], size_t size)
{
	long sum = 0;
	for (size_t i = 0; i < size; ++i)
	{
		sum += array[i];
	}
	return sum;
}


int main(void)
{
	printf("Enter a positive number: ");

	size_t numberCapacity;
	if (scanf("%lu", &numberCapacity) != 1)
	{
		printf("Could not parse the number. Aborting...\n");
		return EXIT_FAILURE;
	}

	size_t arraySize = 0;
	int numbers[numberCapacity];

	while (arraySize < numberCapacity)
	{
		printf("Enter a number: ");
		int potentialNumber;
		if (scanf("%d", &potentialNumber) != 1)
		{
			printf("Could not parse the number. Try again.\n");
		}
		else if (Contains(numbers, arraySize, potentialNumber))
		{
			printf("You have already entered this number. Try again.\n");
		}
		else
		{
			numbers[arraySize] = potentialNumber;
			++arraySize;
		}
	}

	printf("The sum of the numbers is: %ld\n", Sum(numbers, arraySize));

	return EXIT_SUCCESS;
}