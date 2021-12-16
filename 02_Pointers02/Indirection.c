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
	✅ ❌ Print2DArray_Native(int array[][]);

	✅ ❌ Print2DArray_Native(int array[][], size_t columns);

	✅ ❌ Print2DArray_Native(int array[][], size_t rows, size_t columns);

	✅ ❌ Print2DArray_Native(size_t rows, size_t columns, int array[rows][columns]);

	✅ ❌ Print2DArray_Native(size_t rows, int array[rows][], size_t columns);

	✅ ❌ Print2DArray_Native(size_t columns, int array[][columns], size_t rows);

	✅ ❌ Print2DArray_Native(size_t columns, int array[][columns]);
*/




int main()
{
	int array_native[5][3] = {
		{1, 2, 3},
		{4, 5, -7},
		{10, -157, 2014},
		{0, 42, 0},
		{32, 2, 3}
	};

	// TODO call function
	printf("\n\n\n");

	// TODO: call function with indirection

	return 0;
}