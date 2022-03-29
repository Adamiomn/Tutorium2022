/*
	Task: Compute and print whether the user's input is an even number.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Input a non-negative whole number: ");
	unsigned inputNumber;
	if (scanf("%u", &inputNumber) != 1)
	{
		printf("Failed to parse input. Aborting.\n");
		return EXIT_FAILURE;
	}

	int isEven;
	// Solution 1: portable, readable, fast
	isEven = inputNumber % 2 == 0;
	// Solution 2: portable, cute, fast; is only portable for unsigned integers
	isEven = !(inputNumber & 1);
	printf("isEven: %d\n", isEven);

	return EXIT_SUCCESS;
}