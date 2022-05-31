/*
	Task: Write a function that reinterprets the bits of an integer to be the bits of a float using a union. Test the function by printing various floats with known bit representation and checking if they match with the value the integer would be, if it had that same bit representation.
	You can use these websites to get the bit representations:
		https://www.binaryconvert.com/convert_float.html
		https://www.binaryconvert.com/convert_signed_int.html
*/



#include <stdio.h>
#include <stdlib.h>


typedef union converter
{
	int integer;
	float floating;
} converter;


float IntToFloat(const int number)
{
	converter tmp;
	tmp.integer = number;
	return tmp.floating;
}


int main(void)
{
	printf("\n");

	int number = 1069547520;						// 00111111 11000000 00000000 00000000
	printf("int  : %d\n", number);					// 1069547520
	printf("float: %.9f\n", IntToFloat(number));	// 1.5
	printf("\n");

	number = -1031815168;							// 11000010 01111111 11000000 00000000
	printf("int  : %d\n", number);					// -1031815168
	printf("float: %.9f\n", IntToFloat(number));	// -63.9375
	printf("\n");

	return EXIT_SUCCESS;
}