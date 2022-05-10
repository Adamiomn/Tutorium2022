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


int compare(const void * p1, const void * p2)
{
	const int x = *(int *)p1;
	const int y = *(int *)p2;
	return y - x;
}


int main(void)
{
	const size_t length = 6;
	int numbers[] = {1, 50, 0, 4021340, 1, 5};
	printf("Before...\n");
	PrintArray(numbers, length);
	qsort(&numbers[0], length, sizeof(int), compare);
	printf("\nAfter...\n");
	PrintArray(numbers, length);
	return EXIT_SUCCESS;
}