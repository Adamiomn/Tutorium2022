#include <stdio.h>
#include <stdlib.h>

/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/

#define VARPRINT(x) printf(#x ": %d\n", x)


int main()
{
	int a = 10;
	VARPRINT(a);
	return EXIT_SUCCESS;
}