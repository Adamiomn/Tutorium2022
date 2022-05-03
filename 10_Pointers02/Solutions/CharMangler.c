#include <stdio.h>
#include <stdlib.h>


/*
	Task:
		a)	Write a function "CharMangler" that takes as input
				i) char array
				ii) a function pointer that takes a char and returns a char
			The function should apply the function that was passed to all the characters in the char
   array. The "CharMangler" function does not return anything. b)	Write a function that you could
   pass to "CharMangler" and call "CharMangler" with a string of your choice.
*/


void CharMangler(char * string, char function_ptr(char))
{
	while (*string)
	{
		*string = function_ptr(*string);
		++string;
	}
}


char AAAAAAAAA(char input)
{
	return 'A';
}



int main(void)
{
	char string1[] = "Hello World!";
	char string2[] = "One";
	char string3[] = "";

	printf("before: %s\n", string1);
	CharMangler(string1, AAAAAAAAA);
	printf("after: %s\n\n", string1);

	printf("before: %s\n", string2);
	CharMangler(string2, AAAAAAAAA);
	printf("after: %s\n\n", string2);

	printf("before: %s\n", string3);
	CharMangler(string3, AAAAAAAAA);
	printf("after: %s\n\n", string3);

	return 0;
}
