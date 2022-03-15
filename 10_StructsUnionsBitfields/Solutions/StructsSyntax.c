#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


/*
	Task: Decide which lines are legal and correct the ones that aren't. Also decide if something
   should be added to make the code less error-prone.
*/



typedef struct point
{
	int x;
	int y;
	char name[10];
} point;


bool ArePointsEqual(const point * const point1, const point * const point2)
{
	if (point1->x != point2->x)
	{
		return false;
	}
	if (point1->y != point2->y)
	{
		return false;
	}
	return true;
}

point AddPoints(const point * const point1, const point * const point2)
{
	return (point) {.x = point1->x + point2->x, .y = point1->y + point2->y, .name = "TMPNAME"};
}


int main(void)
{
	point pointA = {10, 20, "Punkt A"};
	point pointB = {.x = -3, .y = 2, .name = "Punkt B"};
	point pointC = {.x = 10, .y = 20, "Punkt A"};

	if (ArePointsEqual(&pointA, &pointC))
	{
		printf("Point A and Point C are the same!\n");
	}
	else
	{
		printf("Point A and Point C are not the same :(\n");
	}

	printf("Point B's y-coordinate is %d\n", pointB.x);

	point pointD = AddPoints(&pointA, &pointB);
	printf("Point D's x-coordinate is %d\n", pointD.x);

	return EXIT_SUCCESS;
}