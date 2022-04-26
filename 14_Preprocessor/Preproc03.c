#include <stdio.h>
#include <stdlib.h>

/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/

#define a b


int main(void)
{
	int a = 3;
	int number = a;
	printf("%d\n", number);
	return EXIT_SUCCESS;
}