#include <stdio.h>
#include <stdlib.h>

/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/

#define a 5


int main()
{
	int number = a;
	printf("%d\n", number);
	return EXIT_SUCCESS;
}



/*-----------------------------------------------------------------------------------------*/
// Every a is replaced by 5.
/*-----------------------------------------------------------------------------------------*/

// [includes are copied]

int main()
{
	int number = 5;
	printf("%d\n", number);
	return 0;
}



/*-----------------------------------------------------------------------------------------*/
// Output is "5".
/*-----------------------------------------------------------------------------------------*/