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

	unsigned bitCounter = 0;
	// Solution 1: portable, readable, fast
	for (unsigned i = 0; i < sizeof(unsigned) * 8; ++i)
	{
		bitCounter += (inputNumber >> i) & 1;
	}
	// Solution 2: portable, elegant and fast
	for (bitCounter = 0; inputNumber; inputNumber >>= 1)
	{
		bitCounter += inputNumber & 1;
	}
	printf("number of bits: %d\n", bitCounter);

	return EXIT_SUCCESS;
}