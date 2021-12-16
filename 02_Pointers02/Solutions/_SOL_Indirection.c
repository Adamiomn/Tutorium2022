#include <stdlib.h>
#include <stdio.h>


/*
	Task:
		a) Discuss why passing a 2D array to a function creates the need to know the inner size in the function signature.
		b) Discuss which of the function signatures below work
		c) Implement a function Print2DArray_Native that takes a 2D array and prints it. Separate the values with commas and leftpad the values with 5 white spaces.
		d) Copy the function, rename it to Print2DArray_Indirection and change the function signature such that it doesn't take a 2D array but a pointer to pointer. Discuss how you could successfully pass an array to this function.
*/

/*
	❌ Print2DArray_Native(int array[][]);

	❌ Print2DArray_Native(int array[][], size_t columns);

	❌ Print2DArray_Native(int array[][], size_t rows, size_t columns);

	✅ Print2DArray_Native(size_t rows, size_t columns, int array[rows][columns]);

	❌ Print2DArray_Native(size_t rows, int array[rows][], size_t columns);

	✅ Print2DArray_Native(size_t columns, int array[][columns], size_t rows);

	✅ Print2DArray_Native(size_t columns, int array[][columns]);
*/

void Print2DArray_Native(size_t rows, size_t columns, int array[rows][columns])
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

void Print2DArray_Indirection(int ** array, size_t rows, size_t columns)
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



int main()
{
	int array_native[5][3] = {
		{1, 2, 3},
		{4, 5, -7},
		{10, -157, 2014},
		{0, 42, 0},
		{32, 2, 3}
	};

	Print2DArray_Native(5, 3, array_native);
	printf("\n\n\n");

	int * array_indirection[5];
	for (size_t i = 0; i < 5; i++)
	{
		array_indirection[i] = (int *)&(array_native[i]);
	}
	
	Print2DArray_Indirection(array_indirection, 5, 3);

	return 0;
}