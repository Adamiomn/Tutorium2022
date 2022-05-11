/*
	Task: Create a function "SumDiff" that takes two integer pointers and replaces the values of the two pointers with the sum and difference of the integers the pointers point to.
*/



#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x = 4;
	int y = 3;

	printf("Before...\n");
	printf("x: %d    y: %d\n", x, y);

	// TODO: Call SumDiff

	printf("\nAfter...\n");
	printf("sum: %d    diff: %d\n", x, y);

	return EXIT_SUCCESS;
}