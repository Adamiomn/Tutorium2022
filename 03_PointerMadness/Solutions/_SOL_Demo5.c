#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



// In total: Undefined behaviour
void PrintReinterpretedString(const char * const string)
{
	int * integer = (int *)string;	// Undefined behaviour. sizeof(int) != sizeof(char) so pointer arithmetic could cause segmentation fault.
	while(*integer)
	{
		printf("%d\n", *integer);	// Legal
		++integer;					// Legal?
	}
}



int main()
{
	printf("size of char: %lu\n", sizeof(char) * 8);
	printf("size of int : %lu\n", sizeof(int) * 8);

	char * string1 = "Hello";										// Legal
	char * string2 = "Hello World!";								// Legal
	char * string3 = "Hello World!\0\0\0";							// Legal
	char * string4 = "H\0\0\0E\0\0\0L\0\0\0L\0\0\0O\0\0\0\0\0\0";	// Legal

	PrintReinterpretedString(string1);		// Undefined behaviour. Possible segmentation fault.
	PrintReinterpretedString(string2);		// Undefined behaviour. Possible segmentation fault. Length of string is multiple of 4 but there is only one null terminator which is only 1/4 of the size of an int.
	PrintReinterpretedString(string3);		// Legal. Length of string is multiple of 4 and the last four characters are all 0, so the int will also be 0 and abort the while loop.
	PrintReinterpretedString(string4);		// Legal. Will print out the integer values for the characters "H", "E", "L", "L", "O"


	return EXIT_SUCCESS;
}