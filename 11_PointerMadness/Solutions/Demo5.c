/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



#include <stdio.h>
#include <stdlib.h>


// In total: Undefined behaviour
void PrintReinterpretedString(const char * const string)
{
	// Undefined behaviour. sizeof(int) != sizeof(char) so pointer arithmetic could cause segmentation fault.
	int * integer = (int *)string;
	while (*integer)
	{
		// Legal, we are just getting the value pointed to by "integer"
		printf("%d\n", *integer);
		// Illegal in this context, because we know the pointer in "integer" is really a pointer to char
		++integer;
	}
}


int main(void)
{
	printf("size of char: %lu\n", sizeof(char) * 8);
	printf("size of int : %lu\n", sizeof(int) * 8);

	// Legal, nothing interesting here
	char * string1 = "Hello";										 // Legal
	char * string2 = "Hello World!";								 // Legal
	char * string3 = "Hello World!\0\0\0";							 // Legal
	char * string4 = "H\0\0\0E\0\0\0L\0\0\0L\0\0\0O\0\0\0\0\0\0";	 // Legal

	// Undefined behaviour. Possible segmentation fault, because "++integer" will jump outside of the string. If, by chance, there are enough 0 bits, the while loop will terminate.
	PrintReinterpretedString(string1);
	// Undefined behaviour. Possible segmentation fault. Length of string is multiple of 4 but there is only one null terminator which is only 1/4 of the size of an int.
	PrintReinterpretedString(string2);
	// Legal (i.e. it will work). Length of string is multiple of 4 and the last four characters are all 0, so the int will also be 0 and abort the while loop.
	PrintReinterpretedString(string3);
	// Legal (similar to string3). Will print out the integer values for the characters "H", "E", "L", "L", "O"
	PrintReinterpretedString(string4);

	return EXIT_SUCCESS;
}