/*
	Refactor this piece of code, taken from https://www.javatpoint.com/matrix-multiplication-in-c
	This code does not work in general. What is the issue? Try to fix it :)
	The size of the matrices are always 10x10. If the user wants to enter a bigger matrix, they can't do that.
	Also, the user can enter different values for rows and columns which doesn't work with the current implementation.
*/


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int numberOfRows;
	int numberOfColumns1;
	int numberOfColumns2;
	printf("enter the number of rows for the first matrix = ");
	scanf("%d", &numberOfRows);
	printf("enter the number of columns for the first matrix = ");
	scanf("%d", &numberOfColumns1);
	printf("enter the number of columns for the second matrix = ");
	scanf("%d", &numberOfColumns2);
	int matrix1[numberOfRows][numberOfColumns1];
	int matrix2[numberOfColumns1][numberOfColumns2];
	int resultMatrix[numberOfRows][numberOfColumns2];
	printf("enter the first matrix\n");
	for (int i = 0; i < numberOfRows; ++i)
	{
		for (int j = 0; j < numberOfColumns1; ++j)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("enter the second matrix\n");
	for (int i = 0; i < numberOfColumns1; ++i)
	{
		for (int j = 0; j < numberOfColumns2; ++j)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}

	printf("multiply of the matrix=\n");
	for (int i = 0; i < numberOfRows; ++i)
	{
		for (int j = 0; j < numberOfColumns2; ++j)
		{
			resultMatrix[i][j] = 0;
			for (int k = 0; k < numberOfColumns1; ++k)
			{
				resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	for (int i = 0; i < numberOfRows; ++i)
	{
		for (int j = 0; j < numberOfColumns2; ++j)
		{
			printf("%d\t", resultMatrix[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}