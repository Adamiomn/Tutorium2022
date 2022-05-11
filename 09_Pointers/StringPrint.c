/*
	Task: Write a function "StringPrint" that prints each char of a string individually without using any kind of iteration variable.
		a) What kind of function signature do we need?
		b) Take care of all the edge cases.
		c) Discuss if adding const at various points in the signature would make the implementation impossible.
		d) Try adding const after changing the type from array to pointer in the function signature.
*/



#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char string1[] = "Hello World!";
	char string2[] = "One";
	char string3[] = "";
	char * string4 = NULL;

	printf("Printing string 1...\n");

	// TODO call function

	printf("\n\nPrinting string 2...\n");

	// TODO call function

	printf("\n\nPrinting string 3...\n");

	// TODO call function

	printf("\n\nPrinting string 4...\n");

	// TODO call function

	printf("\n\n");

	return EXIT_SUCCESS;
}