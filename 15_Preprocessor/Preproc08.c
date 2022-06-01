/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/



#include <stdio.h>
#include <stdlib.h>


#define VARPRINT(x) printf(#x ": %d\n", x)


int main(void)
{
	int a = 10;
	VARPRINT(a);
	return EXIT_SUCCESS;
}