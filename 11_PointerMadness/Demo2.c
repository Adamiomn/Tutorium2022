/*
	Task: Decide which lines are legal and which could result in undefined behaviour. Also, does this compile?
*/



#include <stdio.h>
#include <stdlib.h>


// In total:
void CountingDownEvil(const unsigned * const uint_ptr)
{
	unsigned * evilCast = uint_ptr;	   //
	*evilCast = 5;					   //
	while (*evilCast)				   //
	{
		printf("%d\n", (*evilCast)--);	  //
	}
}


int main(void)
{
	unsigned innocent_int = 5;			//
	CountingDownEvil(&innocent_int);	//

	return EXIT_SUCCESS;
}