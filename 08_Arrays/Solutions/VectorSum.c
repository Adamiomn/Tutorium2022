/*
	Task: Calculate the euclidian norm of the sum of vector1 and vector2 (the norm is the square root of the sum of the squares of all components).
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	const int vector1[10] = {5, -4, 2, 0, 1, 1, 9, 3, 8, 9};
	const int vector2[10] = {4, 2, 8, 8, 6, 7, 5, 9, -1, 2};

	int vectorSum[10];
	for (int i = 0; i < 10; ++i)
	{
		vectorSum[i] = vector1[i] + vector2[i];
	}

	long sumOfSquares = 0;
	for (int i = 0; i < 10; ++i)
	{
		sumOfSquares += vectorSum[i] * vectorSum[i];
	}

	printf("%lf\n", sqrt((double)sumOfSquares));

	return EXIT_SUCCESS;
}