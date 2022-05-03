#include "Vector_int.h"
#include <stdio.h>


struct Vector_int
{
	int * data;
	size_t size;
	size_t capacity;
};


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
	// TODO
	// Remove this return statement when implementing the function
	return NULL;
}

void DeleteVector(Vector_int * const vector)
{
}

bool IsVectorEmpty(const Vector_int * const vector)
{
	// TODO
	// Remove this return statement when implementing the function
	return true;
}

size_t GetSize(const Vector_int * const vector)
{
	// TODO
	// Remove this return statement when implementing the function
	return 0;
}

int AccessElement(const Vector_int * const vector, const size_t index)
{
	// TODO
	// Remove this return statement when implementing the function
	return 0;
}

int AccessFirstElement(const Vector_int * const vector)
{
	// TODO
	// Remove this return statement when implementing the function
	return 0;
}

int AccessLastElement(const Vector_int * const vector)
{
	// TODO
	// Remove this return statement when implementing the function
	return 0;
}

void InsertElement(Vector_int * const vector, const int element, const size_t index)
{
}

void RemoveElements(Vector_int * const vector, const int element)
{
}

long long GetElementIndex(const Vector_int * const vector, const int value)
{
	// TODO
	// Remove this return statement when implementing the function
	return -1;
}

size_t CountValues(const Vector_int * const vector, const int value)
{
	// TODO
	// Remove this return statement when implementing the function
	return 0;
}

bool ContainsValue(const Vector_int * const vector, const int value)
{
	// TODO
	// Remove this return statement when implementing the function
	return false;
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