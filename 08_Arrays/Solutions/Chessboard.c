/*
	Task: Fill a 2D-Array integer array with 0s and 1s, such that it resembles a chessboard and print it.
	You can assume that...
		1) you are looking at the chessboard from the top
		2) the white player is at the bottom
		3) the array goes from left to right and top to bottom
		4) 0 is black and 1 is white
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int chessBoard[8][8];

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			// Normal solution
			/*
			if (i % 2 == 0)
			{
				if (j % 2 == 0)
				{
					chessBoard[i][j] = 1;
				}
				else
				{
					chessBoard[i][j] = 0;
				}
			}
			else
			{
				if (j % 2 == 0)
				{
					chessBoard[i][j] = 0;
				}
				else
				{
					chessBoard[i][j] = 1;
				}
			}
			*/

			// Branchless solution
			/*
				  i      j
				 odd    odd    |   even = 1
				 odd   even    |   odd  = 0
				even    odd    |   odd  = 0
				even   even    |   even = 1
			*/
			chessBoard[i][j] = (i + j + 1) % 2;
		}
	}

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			printf("%d   ", chessBoard[i][j]);
		}
		printf("%d\n", chessBoard[i][7]);
	}

	return EXIT_SUCCESS;
}