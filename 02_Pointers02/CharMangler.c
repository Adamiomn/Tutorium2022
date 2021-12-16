#include <stdlib.h>
#include <stdio.h>


/*
	Task:
		a)	Write a function "CharMangler" that takes as input
				i) char array
				ii) a function pointer that takes a char and returns a char
			The function should apply the function that was passed to all the characters in the char array and overwrite the respective char.
			The "CharMangler" function does not return anything.
		b)	Write a function that you could pass to "CharMangler" and call "CharMangler" with a string of your choice.
*/



int main()
{
	char string1[] = "Hello World!";
	char string2[] = "One";
	char string3[] = "";

	printf("before: %s\n", string1);
	// TODO call function
	printf("after: %s\n\n", string1);

	printf("before: %s\n", string2);
	// TODO call function
	printf("after: %s\n\n", string2);

	printf("before: %s\n", string3);
	// TODO call function
	printf("after: %s\n\n", string3);

	return 0;
}