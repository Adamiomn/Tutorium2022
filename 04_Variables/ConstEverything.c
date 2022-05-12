/*
	Task: Making everything const that should not be changed is a good practice when programming in C. Try to find all the variables that you can make constant.
*/



#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;

	printf("Welcome to the cubic polynomial solver!\n");
	printf("Enter the four polynomial coefficients:\n");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	double a_deriv = 3 * a;
	double b_deriv = 2 * b;
	double c_deriv = c;
	double x = 0;

	double errorThreshold = 0.0001;
	double error = errorThreshold;
	double iterationLimit = 10000;
	int iterations = 0;
	while (fabs(error) >= errorThreshold && iterations < iterationLimit)
	{
		error = (a * x * x * x + b * x * x + c * x + d);
		x -= error / (a_deriv * x * x + b_deriv * x + c_deriv);
		++iterations;
	}

	printf("One root is at x = %.4lf\n", x);

	return EXIT_SUCCESS;
}