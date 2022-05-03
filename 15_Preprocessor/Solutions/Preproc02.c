#include <stdio.h>
#include <stdlib.h>

/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/

#define a 5


int main(void)
{
	printf("a\n");
	return EXIT_SUCCESS;
}



/*-----------------------------------------------------------------------------------------*/
// Every a is replaced by 5. Strings are not affected, however.
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