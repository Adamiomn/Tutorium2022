/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



#include <stdio.h>
#include <stdlib.h>


// In total: Undefined behaviour
void PrintStringConstEvil(const char * const string)
{
	// Undefined behaviour, "string" was guaranteed to point to a const char
	char * evilCast = (char *)string;
	// Legal, we are just getting the value in "evilCast"
	while (*evilCast)
	{
		// Undefined behaviour, "string" was guaranteed to point to a const char, we may not change its content
		*evilCast = 'A';
		// Legal, we are just getting the value in "evilCast"
		printf("%c\n", *evilCast);
		// Legal, evilCast is not a const pointer, we may change it
		++evilCast;
	}
}


int main(void)
{
	// Lega, nothing interesting here
	char * string1 = "Hello";
	char string2[] = "World";

	// Will compile but will result in a run-time error. This is because PrintStringConstEvil will try to change the content of string1, which the operating system does not allow because character literals (which string1 points to) are read-only. This is enforced by the OS.
	PrintStringConstEvil(string1);
	// Legal, the content of the character literal "World" will be copied into string2. string2 is just an array, we are allowed to change its content.
	PrintStringConstEvil(string2);

	return EXIT_SUCCESS;
}