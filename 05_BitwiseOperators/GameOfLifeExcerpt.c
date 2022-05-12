/*
	Task: Try to implement the snippet to calculate the new cell status according to the rules of Conway's Game of Life.
	Can you do it without using if-else?
*/



#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	printf("Enter [isCellAlive; 0, 1] and [numberOfAliveNeighbors; 0-8]\n");
	int isCellAlife;
	int numberOfAliveNeighbors;
	if (scanf("%d %d", &isCellAlife, &numberOfAliveNeighbors) != 2)
	{
		printf("Failed to parse input. Aborting.\n");
		return EXIT_FAILURE;
	}

	// Compute and assign to "newCellStatus" whether the cell should be dead (0) or alive (1) in the next iteration.
	int newCellStatus;
	printf("newCellStatus: %d\n", newCellStatus);

	return EXIT_SUCCESS;
}