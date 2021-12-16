#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



// In total: 
void PrintStringConstEvil(const char * const string)
{
	char * evilCast = (char *)string;	//
	while(*evilCast)					//
	{
		*evilCast = 'A';				//
		printf("%c\n", *evilCast);		//
		++evilCast;						//
	}
}



int main()
{
	char * string1 = "Hello";		//
	char string2[] = "World";		//

	PrintStringConstEvil(string1);	//
	PrintStringConstEvil(string2);	//

	return EXIT_SUCCESS;
}