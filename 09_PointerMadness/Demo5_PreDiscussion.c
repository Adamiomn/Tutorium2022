#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



// In total:
void PrintReinterpretedString(const char * const string)
{
	int * integer = (int *)string;	  //
	while (*integer)
	{
		printf("%d\n", *integer);	 //
		++integer;					 //
	}
}



int main(void)
{
	char * string1 = "Hello";	 //

	PrintReinterpretedString(string1);	  //


	return EXIT_SUCCESS;
}