/*
	Task: Determine the output of the program without executing it. Does it even compile?
*/



#include <stdio.h>
#include <stdlib.h>


#define VARPRINT(x) printf(#x ": %s\n", x)


int main(void)
{
	int a = 10;
	VARPRINT("a");
	return EXIT_SUCCESS;
}



/*-----------------------------------------------------------------------------------------*/
// #x is replaced with the variable name inside a string and escape operators are automatically added ("\"a\""). x is just replaced with "a".
/*-----------------------------------------------------------------------------------------*/

// [includes are copied]

int main(void)
{
	int a = 10;
	printf("\"a\""
		   " :%s\n",
		   "a");
	return 0;
}



/*-----------------------------------------------------------------------------------------*/
// Adjacent strings are concatenated.
/*-----------------------------------------------------------------------------------------*/

// [includes are copied]

int main(void)
{
	int a = 10;
	printf("\"a\" :%s\n", "a");
	return 0;
}



/*-----------------------------------------------------------------------------------------*/
// Output is "a": a.
/*-----------------------------------------------------------------------------------------*/