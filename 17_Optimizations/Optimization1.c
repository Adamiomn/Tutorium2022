#include "Benchmarker.h"
#include <stdio.h>
#include <stdlib.h>

/*
	Task: Try to optimize the condition in the loop to improve execution time.
*/


int main(void)
{
	StartBenchmarking();


	long long result = 0;
	for (size_t i = 0; i < 100000000; ++i)
	{
		if (rand() % 2)
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