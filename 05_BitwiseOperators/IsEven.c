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

	// Assign to "isEven" whether inputNumber is even
	int isEven = 0;
	printf("isEven: %d\n", isEven);

	return EXIT_SUCCESS;
}