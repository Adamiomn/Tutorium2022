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



/*-----------------------------------------------------------------------------------------*/
// The preprocessor now has 2 rules:
//		1. replace a by b
//		2. replace b by c
// So every a is replaced by b and every b is replaced by c.
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