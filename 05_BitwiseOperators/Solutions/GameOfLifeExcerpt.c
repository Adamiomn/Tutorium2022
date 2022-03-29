/*
	Task: Try to implement the snippet to calculate the new cell status according to the rules of Conway's Game of Life.
	Can you do it without using if-else?
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter [isCellAlive; 0, 1] and [numberOfAliveNeighbors; 0-8]\n");
	int isCellAlive;
	int numberOfAliveNeighbors;
	if (scanf("%d %d", &isCellAlive, &numberOfAliveNeighbors) != 2)
	{
		printf("Failed to parse input. Aborting.\n");
		return EXIT_FAILURE;
	}

	// Comput and assign to "newCellStatus" whether the cell should be dead (0) or alive (1) in the next iteration.
	int newCellStatus;
	// Solution 1: readable, slow
	if (isCellAlive)
	{
		if (numberOfAliveNeighbors == 2 || numberOfAliveNeighbors == 3)
		{
			newCellStatus = 1;
		}
		else
		{
			newCellStatus = 0;
		}
	}
	else
	{
		if (numberOfAliveNeighbors == 3)
		{
			newCellStatus = 1;
		}
		else
		{
			newCellStatus = 0;
		}
	}
	// Solution 2: like solution 1, but branchless
	newCellStatus = (isCellAlive & (numberOfAliveNeighbors == 2 || numberOfAliveNeighbors == 3)) |
					(numberOfAliveNeighbors == 3);
	// Solution 3: like solution 2, but optimized using logic rules
	newCellStatus = (isCellAlive & (numberOfAliveNeighbors == 2)) | (numberOfAliveNeighbors == 3);

	return EXIT_SUCCESS;
}