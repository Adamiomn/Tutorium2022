/*
	Task: Write a function that approximates the sine of an angle using the taylor series (https://en.wikipedia.org/wiki/Sine_and_cosine#Series_definition).
	Use at least 5 terms and try to make it as readable as possible. Don't forget to use const wherever possible.
*/


#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	double angle = 0;
	printf("Enter an angle in radians: \n");
	if (scanf("%lf", &angle) < 1)
	{
		printf("Invalid input!\n");
		return EXIT_FAILURE;
	}

	printf("The sine of %.2f radians is %.2f\n", angle, SineTaylor(angle));
	return EXIT_SUCCESS;
}