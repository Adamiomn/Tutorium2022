/*
	Task: Use scanf to read integers from the standard input until the user types in something other than a number or has reached the limit of 100 integers. Assume the integers to be the elements of a vector. Now print the norm of the vector (sqrt(a^2 + b^2 + c^2 + d^2 + ...)).
*/



#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int numberOfElements = 0;
	int input;
	double result = 0;
	while (numberOfElements < 100 && scanf("%d", &input))
	{
		++numberOfElements;
		result += input * input;
	}

	printf("The norm is: %lf\n", sqrt(result));

	return EXIT_SUCCESS;
}