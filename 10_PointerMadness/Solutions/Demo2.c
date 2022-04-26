#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and which could result in undefined behaviour. Also, does
   this compile?
*/



// In total: Legal
void CountingDownEvil(const unsigned * const uint_ptr)
{
	unsigned * evilCast = uint_ptr;	   // Legal, compiles but with a warning
	while (*evilCast)				   // Legal
	{
		printf("%d\n", (*evilCast)--);	  // Legal
	}
}



int main(void)
{
	unsigned innocent_int = 5;			// Legal
	CountingDownEvil(&innocent_int);	// Legal

	return EXIT_SUCCESS;
}