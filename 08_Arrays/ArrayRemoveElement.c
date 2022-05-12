/*
	Task: Write a function that removes an element at a specified index from an integer array.
		a) Think about what parameters the function needs.
		b) The elements after the one that was removed, should be moved one index to the left, to "fill the hole" that was created by removing the element.
		c) Consider edge cases.
		d) Use the array provided in the main function to test your function.
*/



#include <stdio.h>
#include <stdlib.h>


// TODO: Implement the function


void PrintArray(const int array[], const size_t size)
{
	for (size_t i = 0; i < size - 1; ++i)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[size - 1]);
}


int main(void)
{
	int numbers[10] = {1, 4, -32, 10, 23, 3, -2, -15, 6, -7};

	printf("Array before removing elements:\n");
	PrintArray(numbers, 10);
	printf("\nRemoving element at index 3...\n");

	// TODO: Call function

	printf("Array after removing the element at index 3:\n");
	PrintArray(numbers, 9);
	printf("\nRemoving element at index 0...\n");

	// TODO: Call function

	printf("Array after removing the element at index 0:\n");
	PrintArray(numbers, 8);
	printf("\nRemoving element at index 10...\n");

	// TODO: Call function

	printf("Array should look the same:\n");
	PrintArray(numbers, 8);

	return EXIT_SUCCESS;
}