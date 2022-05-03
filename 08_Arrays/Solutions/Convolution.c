/*
	Task: Compute the convolution of vector1 with vector2 and print the result (https://en.wikipedia.org/wiki/Convolution#Discrete_convolution).
	The result should be 6 22 -21 26 -15 30 -10 25
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int vector1[6] = {1, 4, -3, 0, 0, 5};
	const int vector2[3] = {6, -2, 5};

	const int convolvedLength = 6 + 3 - 1;
	int convolvedVector[convolvedLength];
	for (int i = 0; i < convolvedLength; ++i)
	{
		convolvedVector[i] = 0;
	}
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			convolvedVector[i + j] += vector1[i] * vector2[j];
		}
	}

	for (int i = 0; i < convolvedLength - 1; ++i)
	{
		printf("%d, ", convolvedVector[i]);
	}
	printf("%d\n", convolvedVector[convolvedLength - 1]);

	return EXIT_SUCCESS;
}