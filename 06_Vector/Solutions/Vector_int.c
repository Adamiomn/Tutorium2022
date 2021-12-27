#include "Vector_int.h"
#include <stdio.h>




/*--------------------- Helper Functions ---------------------*/

bool IsVectorFull(const Vector_int * const vector)
{
	return vector->size == vector->capacity;
}

bool IsIndexInBounds(const Vector_int * const vector, const size_t index)
{
	return index < vector->size;
}

bool MustResizeVector(const Vector_int * const vector)
{
	return vector->size < (vector->capacity / 4);
}

void ResizeVector(Vector_int * const vector)
{
	vector->data = realloc(vector->data, sizeof(*vector->data) * vector->capacity);
	if (!vector->data)
	{
		fprintf(stderr, "ERROR when re-allocating memory for Vector_int's data.");
		exit(EXIT_FAILURE);
	}
}





/*--------------------- User functions ---------------------*/

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
	Vector_int * newVector = malloc(sizeof(*newVector));
	if (!newVector)
	{
		fprintf(stderr, "ERROR when allocating memory for Vector_int.");
		exit(EXIT_FAILURE);
	}
	newVector->size = 0;
	newVector->capacity = initialCapacity;
	if (newVector->capacity == 0)
	{
		newVector->data = NULL;
	}
	else
	{
		newVector->data = malloc(sizeof(*newVector->data) * newVector->capacity);
		if (!newVector->data)
		{
			fprintf(stderr, "ERROR when allocating memory for Vector_int's data.");
			exit(EXIT_FAILURE);
		}
	}
	return newVector;
}

void DeleteVector(Vector_int * const vector)
{
	if (!vector)
	{
		return;
	}
	free(vector->data);
	free(vector);
}

bool IsVectorEmpty(const Vector_int * const vector)
{
	if (!vector)
	{
		return true;
	}
	return vector->size == 0;
}

size_t GetSize(const Vector_int * const vector)
{
	if (!vector)
	{
		return 0;
	}
	return vector->size;
}

int AccessElement(const Vector_int * const vector, const size_t index)
{
	if (!vector || !IsIndexInBounds(vector, index))
	{
		return 0;
	}
	return vector->data[index];
}

int AccessFirstElement(const Vector_int * const vector)
{
	return AccessElement(vector, 0);
}

int AccessLastElement(const Vector_int * const vector)
{
	return AccessElement(vector, vector->size - 1);
}

void InsertElement(Vector_int * const vector, const int element, const size_t index)
{
	if (!vector)
	{
		return;
	}

	// Vector must be contiguous
	if (index > vector->size)
	{
		return;
	}

	// Extend capacity if needed
	if (IsVectorFull(vector))
	{
		vector->capacity *= 2;
		ResizeVector(vector);
	}

	for (size_t i = vector->size; i > index; --i)
	{
		vector->data[i] = vector->data[i - 1];
	}
	vector->data[index] = element;
	++vector->size;
}

void RemoveElement(Vector_int * const vector, const size_t index)
{
	if (!vector || !IsIndexInBounds(vector, index))
	{
		return;
	}

	vector->data[index] = 0;
	for (size_t i = index; i < vector->size; ++i)
	{
		vector->data[i] = vector->data[i + 1];
	}
	--vector->size;

	if (MustResizeVector(vector))
	{
		vector->capacity /= 2;
		ResizeVector(vector);
	}
}

void RemoveElements(Vector_int * const vector, const int element)
{
	if (!vector)
	{
		return;
	}

	const size_t elementCount = CountElements(vector, element);
	for (size_t i = 0; i < elementCount; ++i)
	{
		RemoveElement(vector, GetElementIndex(vector, element));
	}
}

size_t GetElementIndex(const Vector_int * const vector, const int element)
{
	if (!vector)
	{
		return 0;
	}

	for (size_t i = 0; i < vector->size; ++i)
	{
		if (vector->data[i] == element)
		{
			return i;
		}
	}
	return 0;
}

size_t CountElements(const Vector_int * const vector, const int element)
{
	if (!vector)
	{
		return 0;
	}

	size_t count = 0;
	for (size_t i = 0; i < vector->size; ++i)
	{
		if (vector->data[i] == element)
		{
			++count;
		}
	}
	return count;
}

bool ContainsElement(const Vector_int * const vector, const int element)
{
	return CountElements(vector, element) > 0;
}

void PushBackElement(Vector_int * const vector, const int element)
{
	InsertElement(vector, element, vector->size);
}

void PopBackElement(Vector_int * const vector)
{
	RemoveElement(vector, vector->size - 1);
}

void PushFrontElement(Vector_int * const vector, const int element)
{
	InsertElement(vector, element, 0);
}

void PopFrontElement(Vector_int * const vector)
{
	RemoveElement(vector, 0);
}

void ApplyFunctionToVector(Vector_int * const vector, int func(const int))
{
	if (!vector)
	{
		return;
	}

	for (size_t i = 0; i < vector->size; ++i)
	{
		vector->data[i] = func(vector->data[i]);
	}
}