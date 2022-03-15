#include <stdio.h>
#include <stdlib.h>


/*
	Task:
		Write a function "StringPrint" that prints each char of a string individually on a new line
   without using any kind of iteration variable. What kind of function signature do we need? Take
   care of all the edge cases. Discuss if adding const at various points in the signature would make
   the implementation impossible. Also try adding const after changing the type from array to
   pointer in the function signature.
*/



void StringPrint(char * string)
{
	if (string == NULL)
	{
		return;
	}

	while (*string)
	{
		printf("%c", *string);
		++string;
	}
}



int main(void)
{
	char string1[] = "Hello World!";
	char string2[] = "One";
	char string3[] = "";
	char * string4 = NULL;

	printf("Printing string 1...\n");
	StringPrint(string1);
	printf("\n\n");
	printf("Printing string 2...\n");
	StringPrint(string2);
	printf("\n\n");
	printf("Printing string 3...\n");
	StringPrint(string3);
	printf("\n\n");
	printf("Printing string 4...\n");
	StringPrint(string4);
	printf("\n\n");
	return 0;
}