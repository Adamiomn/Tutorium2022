/*
	Task: Write a function that approximates the sine of an angle using the taylor series (https://en.wikipedia.org/wiki/Sine_and_cosine#Series_definition).
	Use at least 5 terms and try to make it as readable as possible. Don't forget to use const wherever possible.
*/



#include <math.h>
#include <stdio.h>
#include <stdlib.h>


long long CalculateFactorial(const unsigned number)
{
	long long factorial = 1;
	for (int i = 1; i <= number; ++i)
	{
		factorial *= i;
	}
	return factorial;
}


double CalculateSine(const double angle)
{
	const numberOfTerms = 5;
	double result = 0;
	for (int i = 0; i < numberOfTerms; ++i)
	{
		const int sign = ((i + 1) % 2) * 2 - 1;
		const double power = pow(angle, 2 * i + 1);
		const double factorial = CalculateFactorial(2 * i + 1);
		result += sign * power / factorial;
	}
	return result;
}


int main(void)
{
	double angle = 0;
	printf("Enter an angle in radians: \n");
	if (scanf("%lf", &angle) < 1)
	{
		printf("Invalid input!\n");
		return EXIT_FAILURE;
	}

	printf("The sine of %.2f radians is %.2f\n", angle, CalculateSine(angle));
	return EXIT_SUCCESS;
}