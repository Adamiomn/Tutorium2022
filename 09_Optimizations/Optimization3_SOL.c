#include <stdlib.h>
#include <stdio.h>
#include "Benchmarker.h"

/*
	Solution: NOthing really changed, because the compiler is too clever and inlined the functions :( The branches are still there.
*/

int FirstOption(int randomNumber)
{
	return randomNumber * 2;
}

int SecondOption(int randomNumber)
{
	return -randomNumber * 3;
}


int main()
{
	StartBenchmarking();

	int (*functions[])(int) = {FirstOption, SecondOption};
	long long result = 0;
	for (size_t i = 0; i < 100000000; ++i)
	{
		int randomNumber = rand() % 10;
		result += functions[randomNumber % 2](randomNumber);
	}
	printf("The result is: %lld\n", result);

	StopBenchmarking();

	return EXIT_SUCCESS;
}