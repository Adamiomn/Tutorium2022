#include <stdio.h>
#include <stdlib.h>

/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/

#define a 5


int main(void)
{
	int number = a;
	printf("%d\n", number);
	return EXIT_SUCCESS;
}