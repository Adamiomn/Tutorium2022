#include "Vector_int.h"
#include <stdio.h>


void PrintVectorContents(const Vector_int * const vector)
{
	if (!vector)
	{
		return;
	}

	if (IsVectorEmpty(vector))
	{
		printf("Vector is empty!");
	}

	printf("Contents of vector: \n");
	for (size_t i = 0; i < vector->size - 1; ++i)
	{
		printf("%d, ", vector->data[i]);
	}
	printf("%d\n", vector->data[vector->size - 1]);
}

Vector_int * CreateVector(const size_t initialCapacity)
{
}

void DeleteVector(Vector_int * const vector)
{
}

bool IsVectorEmpty(const Vector_int * const vector)
{
}

size_t GetSize(const Vector_int * const vector)
{
}

int AccessElement(const Vector_int * const vector, const size_t index)
{
}

int AccessFirstElement(const Vector_int * const vector)
{
}

int AccessLastElement(const Vector_int * const vector)
{
}

void InsertElement(Vector_int * const vector, const int element, const size_t index)
{
}

void RemoveElements(Vector_int * const vector, const int element)
{
}

long long GetElementIndex(const Vector_int * const vector, const int value)
{
}

size_t CountValues(const Vector_int * const vector, const int value)
{
}

bool ContainsValue(const Vector_int * const vector, const int value)
{
}

void PushBackElement(Vector_int * const vector, const int element)
{
}

void PopBackElement(Vector_int * const vector)
{
}

void PushFrontElement(Vector_int * const vector, const int element)
{
}

void PopFrontElement(Vector_int * const vector)
{
}

void ApplyFunctionToVector(Vector_int * const vector, int func(const int))
{
}