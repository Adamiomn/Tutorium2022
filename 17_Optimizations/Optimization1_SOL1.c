#include "Benchmarker.h"
#include <stdio.h>
#include <stdlib.h>

/*
	Solution 1: Being clever and including the result of the modulus operation in the calculation.
*/


int main(void)
{
	StartBenchmarking();

	long long result = 0;
	for (size_t i = 0; i < 100000000; ++i)
	{
		result += 2 * (rand() % 2) - 1;
	}
	printf("The result is: %lld\n", result);

	StopBenchmarking();

	return EXIT_SUCCESS;
}