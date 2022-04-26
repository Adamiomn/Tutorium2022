#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



// In total: Undefined behaviour
void PrintStringConstEvil(const char * const string)
{
	char * evilCast = (char *)string;	 // Legal
	while (*evilCast)					 // Legal
	{
		*evilCast = 'A';			  // Undefined behaviour
		printf("%c\n", *evilCast);	  // Legal
		++evilCast;					  // Legal
	}
}



int main(void)
{
	char * string1 = "Hello";	 // String literal is not const but it is undefined behaviour to
								 // change the contents
	char string2[] = "World";	 // String literal assigned to char array fills the individual
								 // elements with the individual chars -> not const

	PrintStringConstEvil(string1);	  // Illegal
	PrintStringConstEvil(string2);	  // Legal

	return EXIT_SUCCESS;
}