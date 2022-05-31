/*
	Task: Decide which lines are legal and which could result in undefined behaviour.
*/



#include <stdio.h>
#include <stdlib.h>


// In total:
void CountingDown(const unsigned * const uint_ptr)
{
	unsigned count = *uint_ptr;	   //
	while (count)				   //
	{
		printf("%d\n", count--);	//
	}
}


int main(void)
{
	unsigned innocent_int = 5;		//
	CountingDown(&innocent_int);	//

	return EXIT_SUCCESS;
}