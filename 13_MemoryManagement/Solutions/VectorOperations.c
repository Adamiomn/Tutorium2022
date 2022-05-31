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


int VectorAddition(const int elem1, const int elem2)
{
	return elem1 + elem2;
}


int VectorMultiplication(const int elem1, const int elem2)
{
	return elem1 * elem2;
}


int VectorMin(const int elem1, const int elem2)
{
	return elem1 < elem2 ? elem1 : elem2;
}


int VectorMax(const int elem1, const int elem2)
{
	return elem1 > elem2 ? elem1 : elem2;
}


int * VectorOperation(const int vector1[],
					  const int vector2[],
					  const size_t length,
					  int (*operation)(int, int))
{
	int * result = malloc(sizeof(int) * length);
	for (size_t i = 0; i < length; i++)
	{
		result[i] = operation(vector1[i], vector2[i]);
	}
	return result;
}



int main(void)
{
	size_t length = 6;
	int vector1[6] = {1, 4, -3, 20, 0, 1};
	int vector2[6] = {7, 0, -6, -2, 5, 11};

	int * vector3 = VectorOperation(vector1, vector2, length, VectorAddition);
	PrintVector(vector3, length);
	free(vector3);

	int * vector4 = VectorOperation(vector1, vector2, length, VectorMultiplication);
	PrintVector(vector4, length);
	free(vector4);

	int * vector5 = VectorOperation(vector1, vector2, length, VectorMin);
	PrintVector(vector5, length);
	free(vector5);

	int * vector6 = VectorOperation(vector1, vector2, length, VectorMax);
	PrintVector(vector6, length);
	free(vector6);

	return EXIT_SUCCESS;
}