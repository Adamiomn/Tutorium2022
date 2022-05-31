/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



#include <stdio.h>
#include <stdlib.h>


// In total:
void PrintStringConst(const char * string)
{
	while (*string)	   //
	{
		printf("%c\n", *string);	//
		++string;					//
	}
}


int main(void)
{
	char * string = "Hello";	 //
	PrintStringConst(string);	 //

	return EXIT_SUCCESS;
}