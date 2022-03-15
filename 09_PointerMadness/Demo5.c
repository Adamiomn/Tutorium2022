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
	printf("size of char: %lu\n", sizeof(char) * 8);
	printf("size of int : %lu\n", sizeof(int) * 8);

	char * string1 = "Hello";										 //
	char * string2 = "Hello World!";								 //
	char * string3 = "Hello World!\0\0\0";							 //
	char * string4 = "H\0\0\0E\0\0\0L\0\0\0L\0\0\0O\0\0\0\0\0\0";	 //

	PrintReinterpretedString(string1);	  //
	PrintReinterpretedString(string2);	  //
	PrintReinterpretedString(string3);	  //
	PrintReinterpretedString(string4);	  //


	return EXIT_SUCCESS;
}