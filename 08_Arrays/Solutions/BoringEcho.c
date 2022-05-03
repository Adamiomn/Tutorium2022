/*
	Task: Use scanf to read integers from the standard input until the user types in something other than a number or has reached the limit of 100 integers. Then print the integers back to the user, separated by commas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter numbers individually.\n");
	int numberOfIntegers = 0;
	int tempStorage[100];
	while (numberOfIntegers < 100 && scanf("%d", &tempStorage[numberOfIntegers]) == 1)
	{
		++numberOfIntegers;
	}

	if (numberOfIntegers == 0)
	{
		printf("No numbers entered. Aborting...\n");
		return EXIT_FAILURE;
	}

	printf("All numbers entered.\n");
	printf("The numbers you have entered were:\n");
	for (int i = 0; i < numberOfIntegers - 1; ++i)
	{
		printf("%d, ", tempStorage[i]);
	}
	printf("%d\n", tempStorage[numberOfIntegers - 1]);

	return EXIT_SUCCESS;
}