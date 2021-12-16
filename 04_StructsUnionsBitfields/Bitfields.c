#include <stdio.h>
#include <stdlib.h>


/*
	Task: Write a program that does the following:
		1) Takes a 4-digit input number using scanf
		2) Translates each digit to a "property", depending on its value:
				Digit 1 from the left: if not 0, the caller is a person 
				Digit 2 from the left: if not 0, the callers is a child
				Digit 3 from the left: if not 0, the caller comes from Austria
				Digit 4 from the left: if not 0, the caller likes winter
		   Edit the provided function "ExtractDigits" to give the desired behaviour and save the individual properties as storage efficient as possible, using a bit field.
		3) Print appropriate messages in "main" depending on the properties given. You can use the messages commented out at the end of "main".
*/




void ExtractDigits(unsigned number)
{
	unsigned digit1 = (number / 1000) % 10 != 0;
	unsigned digit2 = (number / 100) % 10 != 0;
	unsigned digit3 = (number / 10) % 10 != 0;
	unsigned digit4 = number % 10 != 0;
}



int main()
{
	printf("Enter a 4 digit number:\n");

	unsigned number;
	scanf("%u", &number);


	/*
		// Digit 1
		printf("You are a person!\n");
		printf("You are not a person, what are you?\n");

		// Digit 2
		printf("You are a child!\n");
		printf("Hello, fellow adult!\n");

		// Digit 3
		printf("You are from Austria!\n");
		printf("Where are you from?\n");

		// Digit 4
		printf("You like winter!\n");
		printf("More of a summer person, right?\n");
	*/

	// TODO
	// printf("Size of bitfield in bits: %lu\n", sizeof(...) * 8);

	return EXIT_SUCCESS;
}