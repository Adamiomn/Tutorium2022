/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



#include <stdio.h>
#include <stdlib.h>


// In total: Legal
void PrintStringConst(const char * string)
{
	// Legal, we are just getting the value that "string" points to
	// As an aside, this could backfire if "string" is NULL
	while (*string)
	{
		// Legal, we are just getting the value that "string" points to
		printf("%c\n", *string);
		// Legal, "string" is not a const pointer, instead, the character it points to is const
		++string;
	}
}



int main(void)
{
	// Legal, nothing interesting here
	char * string = "Hello";
	// Legal, even though "string" is not a const pointer, the function will make its usage more restrictive, which is okay
	PrintStringConst(string);

	return EXIT_SUCCESS;
}