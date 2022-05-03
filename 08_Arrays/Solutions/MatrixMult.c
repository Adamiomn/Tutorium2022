/*
	Task: Multiply matrix1 with matrix2 and save the result in another matrix. Then print the matrix.
	The result should be:
		   9,  -35, -103,  -60, 15
		  37,    1,   54,  -25, 39
		 -21,   51,  -45,   12, -99
		 -13,  -67,  -45,   -8, 69
		  10,   44,  -28,  -22, -66
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int matrix1[5][3] = {{8, 1, -8}, {4, -3, 5}, {-6, 9, 0}, {5, -6, -8}, {-1, 7, 2}};
	const int matrix2[3][5] = {{5, -1, -3, -8, 3}, {1, 5, -7, -4, -9}, {4, 4, 9, -1, 0}};

	int matrixResult[5][5] = {0};
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			for (int k = 0; k < 3; ++k)
			{
				matrixResult[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%4d, ", matrixResult[i][j]);
		}
		printf("%4d\n", matrixResult[i][4]);
	}

	return EXIT_SUCCESS;
}