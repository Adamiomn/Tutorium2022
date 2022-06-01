/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/



#include <stdio.h>
#include <stdlib.h>


#define a b


int main(void)
{
	int a = 3;
	int number = a;
	printf("%d\n", number);
	return EXIT_SUCCESS;
}



/*-----------------------------------------------------------------------------------------*/
// Every a is replaced by b.
/*-----------------------------------------------------------------------------------------*/

// [includes are copied]

int main(void)
{
	int b = 3;
	int number = b;
	printf("%d\n", number);
	return 0;
}



/*-----------------------------------------------------------------------------------------*/
// Output is 3.
/*-----------------------------------------------------------------------------------------*/