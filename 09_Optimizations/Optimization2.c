#include <stdlib.h>
#include <stdio.h>
#include "Benchmarker.h"

/*
	Task: Try to optimize the condition in the loop in the same way you did in Optimization1.
*/


int main()
{
	StartBenchmarking();

	long long result = 0;
	for (size_t i = 0; i < 500000000; ++i)
	{
		if (i % 2)
		{
			result += 1;
		}
		else
		{
			result -= 1;
		}
	}
	printf("The result is: %lld\n", result);

	StopBenchmarking();

	return EXIT_SUCCESS;
}