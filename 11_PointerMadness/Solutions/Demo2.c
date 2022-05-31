/*
	Task: Decide which lines are legal and which could result in undefined behaviour. Also, does this compile?
*/



#include <stdio.h>
#include <stdlib.h>


// In total: Undefined behaviour
void CountingDownEvil(const unsigned * const uint_ptr)
{
	// Undefined behaviour, compiles but with a warning. We are casting away the const of the underlying unsigned int
	unsigned * evilCast = uint_ptr;
	// Legal, we are just getting the value from "evilCast"
	while (*evilCast)
	{
		// Undefined behaviour, uint_ptr was pointing to a const unsigned int
		printf("%d\n", (*evilCast)--);
	}
}


int main(void)
{
	// Legal, nothing interesting here
	unsigned innocent_int = 5;
	// Legal, even though "innocent_int" is not const, the function will make its usage more restrictive, which is okay
	CountingDownEvil(&innocent_int);

	return EXIT_SUCCESS;
}