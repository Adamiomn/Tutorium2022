/*
	Task: Take the three variables ("number", "name" and "weight") and put pointers to them in an array. Then, print the array.
	Think about what type the array needs to be and what casts are necessary.
*/



#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int age = 21;
	char name[] = "Sara";
	double weight = 62.3;
	void * list[] = {(void *)&age, (void *)&name, (void *)&weight};
	printf("age: %d\n", *(int *)list[0]);
	printf("name: %s\n", (char *)list[1]);
	printf("weight: %lf\n", *(double *)list[2]);
	return EXIT_SUCCESS;
}