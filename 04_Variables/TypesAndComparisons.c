/*
	Task: What is printed and what is happening under the hood?
*/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int number = -5;
	const unsigned counter = 10;
	const long bigNumber = -1e15;
	const float decimal = 0.1f + 0.2f;
	const double decimalPrecise = 0.1 + 0.2;


	// a) decimal vs decimalPrecise
	if (decimal < decimalPrecise)
	{
		printf("decimal < decimalPrecise\n");
	}
	else if (decimal == decimalPrecise)
	{
		printf("decimal = decimalPrecise\n");
	}
	else
	{
		printf("decimal > decimalPrecise\n");
	}


	// b) number vs decimal
	if (number < decimal)
	{
		printf("%d < %f\n", number, decimal);
	}
	else if (number == decimal)
	{
		printf("%d == %f\n", number, decimal);
	}
	else
	{
		printf("%d > %f\n", number, decimal);
	}


	// c) number vs counter
	if (number < counter)
	{
		printf("%d < %u\n", number, counter);
	}
	else if (number == counter)
	{
		printf("%d == %u\n", number, counter);
	}
	else
	{
		printf("%d > %u\n", number, counter);
	}


	// d) number vs bigNumber
	if (number < bigNumber)
	{
		printf("%d < %ld\n", number, bigNumber);
	}
	else if (number < bigNumber)
	{
		printf("%d == %ld\n", number, bigNumber);
	}
	else
	{
		printf("%d > %ld\n", number, bigNumber);
	}


	// e) counter vs bigNumber
	if (counter < bigNumber)
	{
		printf("%u < %ld\n", counter, bigNumber);
	}
	else if (counter < bigNumber)
	{
		printf("%u == %ld\n", counter, bigNumber);
	}
	else
	{
		printf("%u > %ld\n", counter, bigNumber);
	}


	return EXIT_SUCCESS;
}