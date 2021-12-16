#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



// In total:
void PrintStringConst(const char * string)
{
	while(*string)					//
	{
		printf("%c\n", *string);	//
		++string;					//
	}
}



int main()
{
	char * string = "Hello";		//
	PrintStringConst(string);		//

	return EXIT_SUCCESS;
}