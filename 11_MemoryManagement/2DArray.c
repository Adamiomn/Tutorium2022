#include <stdio.h>
#include <stdlib.h>


/*
	Task: Write a function "VectorMult" that takes two int arrays (with not necessarily the same
   length) and returns a 2D matrix by way of multiplying array1^T * array2. Discuss the structure of
   the 2D matrix compared to a traditional 2D array (i.e. int 2D_array[...][...] = ...)
*/


void Print2DArray(int ** array, size_t rows, size_t columns)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < columns; j++)
		{
			printf("%*d,   ", 5, array[i][j]);
		}
		printf("\n");
	}
}


int main(void)
{
	size_t length1 = 3;
	size_t length2 = 4;
	int vector1[3] = {1, 4, -3};
	int vector2[4] = {7, 0, -6, -2};

	int ** vector3 = VectorMult(vector1, vector2, length1, length2);
	Print2DArray(vector3, length1, length2);
	for (size_t i = 0; i < length1; i++)
	{
		free(vector3[i]);
	}
	free(vector3);

	return EXIT_SUCCESS;
}