#include <math.h>
#include <stdio.h>
#include <stdlib.h>



// Detailed explanation: https://www.youtube.com/watch?v=p8u_k2LIZyo


float fast_invsqrt(float y)
{
	float half_y = y * 0.5F;	// We'll need to this at the end for Newton's method

	long i = *(long *)&y;		  // Pointer conversion to long to be able to do bit operations
	i = 0x5f3759df - (i >> 1);	  // Bit operation
	y = *(float *)&i;			  // Pointer conversion back to float

	y = y * (1.5f - (half_y * y * y));	  // Iteration of Newton's method to improve guess

	return y;
}



int main(void)
{
	float number;

	printf("Enter a number that you want to the inverse square root of:\n");
	scanf("%f", &number);

	// Sidenote: If you leave out scanf and just hard-code "number", the compiler will optimize away
	// sqrt(...), i.e. calculate it at compile time. This will circumvent linker errors if you don't
	// have -lm enabled when linking.
	printf("invsqrt(%f):      %.9f\n", number, 1 / sqrt(number));
	printf("fast_invsqrt(%f): %.9f\n", number, fast_invsqrt(number));

	return EXIT_SUCCESS;
}