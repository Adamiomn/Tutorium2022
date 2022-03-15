#include "Benchmarker.h"
#include <stdio.h>
#include <stdlib.h>

/*
	Task: Try to optimize the condition in the loop in the same way you did in Optimization1.
	What happens?

	Worse execution time because there were no branch misses.
*/


int main(void)
{
	StartBenchmarking();

	long long result = 0;
	for (size_t i = 0; i < 500000000; ++i)
	{
		result += 2 * (rand() % 2) - 1;
	}
	printf("The result is: %lld\n", result);

	StopBenchmarking();

	return EXIT_SUCCESS;
}