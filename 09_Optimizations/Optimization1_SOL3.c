#include <stdlib.h>
#include <stdio.h>
#include "Benchmarker.h"

/*
	Solution 3: Trying to optimize the result from solution 2 by not using function pointers but just using numbers (only works if they are constant expressions!).
*/


int main()
{
	StartBenchmarking();


	int selector[] = {1, -1};
	long long result = 0;
	for (size_t i = 0; i < 100000000; ++i)
	{
		result += selector[rand() % 2];
	}
	printf("The result is: %lld\n", result);

	StopBenchmarking();

	return EXIT_SUCCESS;
}