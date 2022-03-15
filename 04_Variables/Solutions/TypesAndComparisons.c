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
		// This will be printed.
		// decimalPrecise will be more exact, having more correct 0s.
		// See https://0.30000000000000004.com/ for details
		printf("decimal > decimalPrecise\n");
	}


	// b) number vs decimal
	if (number < decimal)
	{
		// This will be printed.
		// Since number is an integer and decimal is a float, number is promoted to a float and the comparison works out as expected.
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
		// This will (probably) be printed.
		// This is weird. If and integer and an unsigned integer take up the same amount of memory, the integer is converted to an unsigned integer.
		// This causes and underflow with the negative number, which in most cases will cause number to become very big.
		// Technically this underflow is undefined behaviour but on basically all modern machines with 2's complement an unsigned underflow will wrap around to the maximum unsigned value.
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
		// This will be printed.
		// bigNumber takes up more memory, so number is promoted to a long and the comparison works.
		// Technically the standard doesn't specify the number of bytes for int and long but on basically all modern machines long will be 8 bytes, while int will be 4 bytes.
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
		// This will be printed.
		// Since bigNumber can represent every possible value of an unsigned integer, there is no need to change its type. Instead, counter will be converted to a long.
		// Again, this is not technically true according to the standard because the sizes are not specified but it will work on a normal computer.
		printf("%u > %ld\n", counter, bigNumber);
	}


	return EXIT_SUCCESS;
}