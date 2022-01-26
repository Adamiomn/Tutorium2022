#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "Benchmarker.h"


float startTime;

void StartBenchmarking()
{
	startTime = (float)clock() / CLOCKS_PER_SEC;
	srand(time(NULL));
}

void StopBenchmarking()
{
	float endTime = (float)clock() / CLOCKS_PER_SEC;
	float timeElapsed = endTime - startTime;
	printf("Time taken: %f\n", timeElapsed);
}