/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/



#include <stdio.h>
#include <stdlib.h>


#define a b
#define b c


int main(void)
{
	int a = 10;
	int b = 2;
	printf("%d\n", a + b);
	return EXIT_SUCCESS;
}



/*-----------------------------------------------------------------------------------------*/
// The preprocessor now has 2 rules:
//		1. replace a with b
//		2. replace b with c
// So every a is replaced with b and every b is replaced with c.
/*-----------------------------------------------------------------------------------------*/

// [includes are copied]

int main(void)
{
	int c = 10;
	int c = 2;
	printf("%d\n", c + c);
	return 0;
}



/*-----------------------------------------------------------------------------------------*/
// Fails to compile, c is defined twice.
/*-----------------------------------------------------------------------------------------*/