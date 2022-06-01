/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/



#include <stdio.h>
#include <stdlib.h>


#define a 5


int main(void)
{
	printf("a\n");
	return EXIT_SUCCESS;
}



/*-----------------------------------------------------------------------------------------*/
// Every a is replaced with 5. Strings are not affected, however.
/*-----------------------------------------------------------------------------------------*/

// [includes are copied]

int main(void)
{
	printf("a\n");
	return 0;
}



/*-----------------------------------------------------------------------------------------*/
// Output is "a".
/*-----------------------------------------------------------------------------------------*/