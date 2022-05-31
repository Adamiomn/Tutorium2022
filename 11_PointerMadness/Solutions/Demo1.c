/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



#include <stdio.h>
#include <stdlib.h>


// In total: Legal
void CountingDown(const unsigned * const uint_ptr)
{
	// Legal, we are just dereferencing the value and copying it into "count"
	unsigned count = *uint_ptr;
	// Legal, count is not const
	while (count)
	{
		// Legal, count is not const
		printf("%d\n", count--);
	}
}


int main(void)
{
	// Legal, nothing interesting here
	unsigned innocent_int = 5;
	// Legal, even though "innocent_int" is not const, the function will make its usage more restrictive, which is okay
	CountingDown(&innocent_int);

	return EXIT_SUCCESS;
}