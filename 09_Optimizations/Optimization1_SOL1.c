#include <stdlib.h>
#include <stdio.h>
#include "Benchmarker.h"

/*
	Task: Try to optimize the condition in the loop to improve execution time.
*/


int PlusOne()
{
	return 1;
}

int MinusOne()
{
	return -1;
}


int main()
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