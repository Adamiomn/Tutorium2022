/*
	Task: Implement the function "GetStringLength", which calculates the length of a string (char array). Do not pass the length of the string to the function, instead use the fact, that strings are null-terminated; i.e. the last character of the char array is always '\0' (this character does not contribute to the length).
	Then, print the length of the strings already given in the main function.
*/

#include <stdio.h>
#include <stdlib.h>


// TODO: implement GetStringLength
int GetStringLength(char string[])
{
	int i;
	for (i = 0; string[i] != '\0'; ++i)
		;
	return i;
}

int main(void)
{
	char myString1[] = "Hello World!";					  // should be length 12
	char myString2[] = "This is a very long string\n";	  // should be length 27
	char myString3[] = "";								  // should be length 0

	printf("Length of myString1: %d\n", GetStringLength(myString1));
	printf("Length of myString2: %d\n", GetStringLength(myString2));
	printf("Length of myString3: %d\n", GetStringLength(myString3));

	return EXIT_SUCCESS;
}