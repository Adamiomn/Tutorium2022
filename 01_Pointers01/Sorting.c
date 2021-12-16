#include <stdlib.h>
#include <stdio.h>


void PrintArray(int array[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		printf("%d\n", array[i]);
	}
}

int compar( const void * p1, const void * p2)
{
	int x = *(int *)p1;
	int y = *(int *)p2;
	return y - x;
}



int main()
{
	size_t length = 6;
	int numbers[] = {
		1,
		50,
		0
		-4021340,
		1,
		5
	};
	printf("Before...\n");
	PrintArray(numbers, length);
	qsort(&numbers[0], length, sizeof(int), compar);
	printf("\nAfter...\n");
	PrintArray(numbers, length);
	return 0;
}