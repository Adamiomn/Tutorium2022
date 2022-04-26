#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	int number = 5;
	char name[] = "Sara";
	double weight = 62.3;
	void * list[] = {(void *)&number, (void *)&name, (void *)&weight};
	printf("number: %d\n", *(int *)list[0]);
	printf("number: %s\n", (char *)list[1]);
	printf("number: %lf\n", *(double *)list[2]);
	return 0;
}