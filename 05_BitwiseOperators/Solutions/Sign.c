/*
	Task: Compute and print the sign of the user's input.
	I.e. if the input is negative, print -1, if the input is 0, print 0 and if the input is positive, print 1.
*/



#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	printf("Input a whole number: ");
	int inputNumber;
	if (scanf("%d", &inputNumber) != 1)
	{
		printf("Failed to parse input. Aborting.\n");
		return EXIT_FAILURE;
	}

	int sign;
	// Solution 1: kind of portable (>> implementation defined for negative numbers), not very readable, pretty fast
	sign = 1 | inputNumber >> (sizeof(int) * 8 - 1);
	// Solution 2: portable, straight-forward and reasonably fast
	sign = sign > 0 ? 1 : sign < 0 ? -1 : 0;
	// Solution 3: portable, elegant and fast
	sign = (inputNumber > 0) - (inputNumber < 0);

	printf("sign: %d\n", sign);

	return EXIT_SUCCESS;
}