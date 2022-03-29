/*
	Task: Count and print the number of bits of the user's input that are 1.
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

	// Assign to "bitCounter" the number of bits in inputNumber
	unsigned bitCounter = 0;
	printf("number of bits: %d\n", bitCounter);

	return EXIT_SUCCESS;
}