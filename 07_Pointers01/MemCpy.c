#include <stdio.h>
#include <stdlib.h>


void PrintArray(int array[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%d\n", array[i]);
	}
}

void PrintArrayAddress(int * array[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("location: %p      value: %d\n", (void *)array[i], *array[i]);
	}
}



int main(void)
{
	size_t length = 5;
	int numbers[] = {1, -4, 20000, 0, 3};
	int * address[] = {&numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]};
	PrintArray(numbers, length);
	PrintArrayAddress(address, length);
	return 0;
}