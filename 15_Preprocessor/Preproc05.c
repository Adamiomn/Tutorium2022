#include <stdio.h>
#include <stdlib.h>

/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/

#define a b


int main(void)
{
	int a = 10;
	int b = -11;
	printf("%d\n", a);
	return EXIT_SUCCESS;
}