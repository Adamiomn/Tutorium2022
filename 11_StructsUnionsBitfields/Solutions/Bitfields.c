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
		   Edit the provided function "ExtractDigits" to give the desired behaviour and save the
   individual properties as storage efficient as possible, using a bit field. 3) Print appropriate
   messages in "main" depending on the properties given. You can use the messages commented out at
   the end of "main".
*/



typedef struct options
{
	unsigned char option1 : 1;
	unsigned char option2 : 1;
	unsigned char option3 : 1;
	unsigned char option4 : 1;
} options;


options ExtractDigits(unsigned number)
{
	return (options) {.option1 = (number / 1000) % 10 != 0,
					  .option2 = (number / 100) % 10 != 0,
					  .option3 = (number / 10) % 10 != 0,
					  .option4 = number % 10 != 0};
}



int main(void)
{
	printf("Enter a 4 digit number:\n");

	unsigned number;
	scanf("%u", &number);
	if (number > 9999)
	{
		printf("ERROR! The number given is longer than 4 digits!\n");
		return EXIT_FAILURE;
	}

	options properties = ExtractDigits(number);

	if (properties.option1 != 0)
	{
		printf("You are a person!\n");
	}
	else
	{
		printf("You are not a person, what are you?\n");
	}
	if (properties.option2 != 0)
	{
		printf("You are a child!\n");
	}
	else
	{
		printf("Hello, fellow adult!\n");
	}
	if (properties.option3 != 0)
	{
		printf("You are from Austria!\n");
	}
	else
	{
		printf("Where are you from?\n");
	}
	if (properties.option4 != 0)
	{
		printf("You like winter!\n");
	}
	else
	{
		printf("More of a summer person, right?\n");
	}

	return EXIT_SUCCESS;
}