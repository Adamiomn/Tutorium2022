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
	for (size_t i = 0; i < 100000000; ++i)
	{
		int randomNumber = rand() % 10;
		if (randomNumber % 2 == 0)
		{
			result += randomNumber * 2;
		}
		else
		{
			result -= randomNumber * 3;
		}
	}
	printf("The result is: %lld\n", result);

	StopBenchmarking();

	return EXIT_SUCCESS;
}