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

	// Assign to "sign" the sign of inputNumber
	int sign = 0;
	printf("sign: %d\n", sign);

	return EXIT_SUCCESS;
}