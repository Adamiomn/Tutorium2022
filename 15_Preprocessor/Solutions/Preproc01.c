/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/



#include <stdio.h>
#include <stdlib.h>


#define a 5


int main(void)
{
	int number = a;
	printf("%d\n", number);
	return EXIT_SUCCESS;
}



/*-----------------------------------------------------------------------------------------*/
// Every a is replaced with 5.
/*-----------------------------------------------------------------------------------------*/

// [includes are copied]

int main(void)
{
	int number = 5;
	printf("%d\n", number);
	return 0;
}



/*-----------------------------------------------------------------------------------------*/
// Output is "5".
/*-----------------------------------------------------------------------------------------*/