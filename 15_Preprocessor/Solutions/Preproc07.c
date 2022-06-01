/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/



#include <stdio.h>
#include <stdlib.h>


#define a b
#define b a


int main(void)
{
	int a = 10;
	int b = 2;
	printf("%d\n", a + b);
	return EXIT_SUCCESS;
}



/*-----------------------------------------------------------------------------------------*/
// The preprocessor now has two rules:
//		1. replace every a with b
//		2. replace every b with a
// This seems like an infinite loop but there is another rule that states that every macro can only
// be used once during an expansion. This means that a -> b (because of the first macro) and then b
// -> a (because of the second macro). The first macro has already been used so a is not changed to
// b again.
/*-----------------------------------------------------------------------------------------*/

// [includes are copied]

int main(void)
{
	int a = 10;
	int b = 2;
	printf("%d\n", a + b);
	return 0;
}



/*-----------------------------------------------------------------------------------------*/
// Output is 12.
/*-----------------------------------------------------------------------------------------*/