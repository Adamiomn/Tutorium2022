#include "Vector_int.h"
#include <stdio.h>


struct Vector_int
{
	int * data;
	size_t size;
	size_t capacity;
};




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
	if (vector->capacity == 0)
	{
		free(vector->data);
		vector->data = NULL;
		return;
	}
	vector->data = realloc(vector->data, sizeof(*vector->data) * vector->capacity);
	if (!vector->data)
	{
		fprintf(stderr, "ERROR when re-allocating memory for Vector_int's data.");
		exit(EXIT_FAILURE);
	}
}


void AdjustCapacity(Vector_int * const vector)
{
	if (IsVectorFull(vector))
	{
		if (vector->capacity == 0)
		{
			vector->capacity = 1;
		}
		else
		{
			vector->capacity *= 2;
		}
		ResizeVector(vector);
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
	AdjustCapacity(vector);

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

	const size_t elementCount = CountValues(vector, element);
	for (size_t i = 0; i < elementCount; ++i)
	{
		RemoveElement(vector, GetElementIndex(vector, element));
	}
}

long long GetElementIndex(const Vector_int * const vector, const int value)
{
	if (!vector)
	{
		return -1;
	}

	for (size_t i = 0; i < vector->size; ++i)
	{
		if (vector->data[i] == value)
		{
			return i;
		}
	}
	return -1;
}

size_t CountValues(const Vector_int * const vector, const int value)
{
	if (!vector)
	{
		return 0;
	}

	size_t count = 0;
	for (size_t i = 0; i < vector->size; ++i)
	{
		if (vector->data[i] == value)
		{
			++count;
		}
	}
	return count;
}

bool ContainsValue(const Vector_int * const vector, const int value)
{
	return CountValues(vector, value) > 0;
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