/*
	Task: Use qsort to sort the array "numbers".
*/



#include <stdio.h>
#include <stdlib.h>


void PrintArray(const int array[], const size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%d\n", array[i]);
	}
}


int main(void)
{
	const size_t length = 6;
	int numbers[] = {1, 50, 0, 4021340, 1, 5};

	printf("Before...\n");
	PrintArray(numbers, length);

	// TODO: Use qsort to sort the array

	printf("\nAfter...\n");
	PrintArray(numbers, length);

	return EXIT_SUCCESS;
}