/*
	Task:
		a) Approximate the stack size experimentally by causing a stack overflow.
		b) Check the approximation with the actual stack limit.
*/



#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>


int main(void)
{
	struct rlimit stackSize;
	getrlimit(RLIMIT_STACK, &stackSize);
	printf("Actual stack size in kB = %ld\n", stackSize.rlim_cur / 1000);

	return EXIT_SUCCESS;
}