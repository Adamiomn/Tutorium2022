#include <stdio.h>
#include <stdlib.h>



void SumDiff(int * x_sum, int * y_diff)
{
	*x_sum = *x_sum + *y_diff;
	*y_diff = *x_sum - 2 * *y_diff;
}



int main(void)
{
	int x = 4;
	int y = 3;
	printf("Before...\n");
	printf("x: %d    y: %d\n", x, y);
	SumDiff(&x, &y);
	printf("\nAfter...\n");
	printf("sum: %d    diff: %d\n", x, y);
	return 0;
}