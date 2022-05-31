/*
	Task:
		a) Write a function "VectorOperation" that takes two int arrays of the same length and and a function pointer. The function should go through the arrays, take the two elements at the same position and calculate a new element using the function pointer. This new element is saved in a new array and returned from the function.
		b) Write a few possible functions to pass as a function pointer.
*/



#include <stdio.h>
#include <stdlib.h>


void PrintVector(const int vector[], size_t length)
{
	for (size_t i = 0; i < length - 1; i++)
	{
		printf("%d, ", vector[i]);
	}
	printf("%d\n", vector[length - 1]);
}


int main(void)
{
	size_t length = 6;
	int vector1[6] = {1, 4, -3, 20, 0, 1};
	int vector2[6] = {7, 0, -6, -2, 5, 11};

	return EXIT_SUCCESS;
}