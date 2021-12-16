#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



// In total: Legal
void PrintStringConst(const char * string)
{
	while(*string)					// Legal
	{
		printf("%c\n", *string);	// Legal
		++string;					// Legal
	}
}



int main()
{
	char * string = "Hello";		// Legal
	PrintStringConst(string);		// Legal

	return EXIT_SUCCESS;
}