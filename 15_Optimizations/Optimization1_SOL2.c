#include "Benchmarker.h"
#include <stdio.h>
#include <stdlib.h>

/*
	Solution 2: Trying to be clever and use function pointers to choose appropriate function based
   on the result of the modulus operation.
*/


int PlusOne()
{
	return 1;
}

int MinusOne()
{
	return -1;
}


int main(void)
{
	StartBenchmarking();


	int (*functions[])() = {PlusOne, MinusOne};
	long long result = 0;
	for (size_t i = 0; i < 100000000; ++i)
	{
		result += functions[rand() % 2]();
	}
	printf("The result is: %lld\n", result);

	StopBenchmarking();

	return EXIT_SUCCESS;
}