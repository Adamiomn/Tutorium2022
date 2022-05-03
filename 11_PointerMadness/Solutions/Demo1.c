#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



// In total:
void CountingDown(const unsigned * const uint_ptr)
{
	unsigned count = *uint_ptr;	   // Legal
	while (count)				   // Legal
	{
		printf("%d\n", count--);	// Legal
	}
}



int main(void)
{
	unsigned innocent_int = 5;		// Legal
	CountingDown(&innocent_int);	// Legal

	return EXIT_SUCCESS;
}