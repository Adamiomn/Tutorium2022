#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and correct the ones that aren't. Also decide if something should be added to make the code less error-prone.
*/



struct point
{
	int x;
	int y;
	char name[10];
};



int main()
{
	point pointA = {10, 20, "Punkt A"};
	point pointB = {.x = -3, .char = "Punkt B"};
	point pointC = {.x = 10, .y = 20, "Punkt A"};

	if (pointA == pointC)
	{
		printf("Point A and Point C are the same!\n");
	}
	else
	{
		printf("Point A and Point C are not the same :(\n");
	}

	printf("Point B's y-coordinate is %d\n", pointB.x);

	pointD = pointA + pointB;
	printf("Point D's x-coordinate is %d\n", pointD.x);

	return EXIT_SUCCESS;
}