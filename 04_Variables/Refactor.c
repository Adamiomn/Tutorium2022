/*
	Task: Try to understand what the code is trying to do and give all the variables an appropriate name.
	Use the tools in your IDE to quickly rename all the variables.
	Also adjust the print statements to communicate what was calculated.
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0;
	printf("Enter a number:\n");
	scanf("%d", &a);

	if (a < 0)
	{
		return EXIT_FAILURE;
	}


	/*----------------- (1) ----------------*/
	int b = a;
	long c = 0;
	while (b > 0)
	{
		c += b;
		--b;
	}
	printf("result: %ld\n", c);


	/*----------------- (2) ----------------*/
	b = 1;
	long long d = 1;
	while (b <= a)
	{
		d *= b;
		++b;
	}
	printf("result: %lld\n", d);


	/*----------------- (3) ----------------*/
	b = 2;
	int e = 1;
	while (b < a)
	{
		if (a % b == 0)
		{
			e = 0;
			break;
		}
		++b;
	}
	if (e)
	{
		printf("yay!\n");
	}
	else
	{
		printf("not yay :(\n");
	}

	return EXIT_SUCCESS;
}