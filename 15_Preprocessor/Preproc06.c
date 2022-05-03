#include <stdio.h>
#include <stdlib.h>

/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/

#define a b
#define b c


int main(void)
{
	int a = 10;
	int b = 2;
	printf("%d\n", a + b);
	return EXIT_SUCCESS;
}