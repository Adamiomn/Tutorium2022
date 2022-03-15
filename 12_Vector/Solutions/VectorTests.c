#include "VectorTests.h"
#include <assert.h>
#include <stdio.h>


struct Vector_int
{
	int * data;
	size_t size;
	size_t capacity;
};


void _TEST_CreateVector()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(0);
	assert(vector);
	assert(!vector->data);
	assert(vector->size == 0);
	assert(vector->capacity == 0);
	free(vector);
	vector = CreateVector(2);
	assert(vector);
	assert(vector->data);
	assert(vector->size == 0);
	assert(vector->capacity == 2);
	free(vector->data);
	free(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_DeleteVector()
{
	printf("%s started...\n", __func__);
	// Difficult to test, use valgrind
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_IsVectorEmpty()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(0);
	assert(IsVectorEmpty(vector));
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_GetSize()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(0);
	assert(GetSize(vector) == 0);
	vector->size = 4;
	assert(GetSize(vector) == 4);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_AccessElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	assert(AccessElement(vector, 0) == 2);
	assert(AccessElement(vector, 1) == -3);
	assert(AccessElement(vector, 2) == 10);
	assert(AccessElement(vector, 3) == 561329);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_AccessFirstElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	assert(AccessFirstElement(vector) == 2);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_AccessLastElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	assert(AccessLastElement(vector) == 561329);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_InsertElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(2);
	vector->data[0] = 2;
	vector->data[1] = 561329;
	vector->size = 2;
	InsertElement(vector, 5, 100);
	InsertElement(vector, 5, 1);
	InsertElement(vector, -30, 1);
	assert(vector->data[0] == 2);
	assert(vector->data[1] == -30);
	assert(vector->data[2] == 5);
	assert(vector->data[3] == 561329);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_RemoveElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	RemoveElement(vector, 1);
	assert(vector->size == 3);
	assert(vector->data[0] == 2);
	assert(vector->data[1] == 10);
	assert(vector->data[2] == 561329);
	RemoveElement(vector, 1);
	assert(vector->size == 2);
	assert(vector->data[0] == 2);
	assert(vector->data[1] == 561329);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_RemoveElements()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = 10;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	RemoveElements(vector, 3);
	assert(vector->size == 4);
	assert(vector->data[0] == 2);
	assert(vector->data[1] == 10);
	assert(vector->data[2] == 10);
	assert(vector->data[3] == 561329);
	RemoveElements(vector, 10);
	assert(vector->size == 2);
	assert(vector->data[0] == 2);
	assert(vector->data[1] == 561329);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_GetElementIndex()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	assert(GetElementIndex(vector, 5) == -1);
	assert(GetElementIndex(vector, -3) == 1);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_CountValues()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = 10;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	assert(CountValues(vector, 10) == 2);
	assert(CountValues(vector, 5) == 0);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_ContainsValue()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	assert(ContainsValue(vector, 2));
	assert(ContainsValue(vector, -3));
	assert(ContainsValue(vector, 10));
	assert(ContainsValue(vector, 561329));
	assert(!ContainsValue(vector, 5));
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_PushBackElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(0);
	PushBackElement(vector, 2);
	PushBackElement(vector, -3);
	PushBackElement(vector, 10000);
	PushBackElement(vector, 0);
	PushBackElement(vector, 2);
	PushBackElement(vector, 2);
	PushBackElement(vector, 5);
	assert(vector->size == 7);
	assert(vector->data[0] == 2);
	assert(vector->data[1] == -3);
	assert(vector->data[2] == 10000);
	assert(vector->data[3] == 0);
	assert(vector->data[4] == 2);
	assert(vector->data[5] == 2);
	assert(vector->data[6] == 5);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_PopBackElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	PopBackElement(vector);
	assert(vector->size == 3);
	assert(vector->data[0] == 2);
	assert(vector->data[1] == -3);
	assert(vector->data[2] == 10);
	PopBackElement(vector);
	assert(vector->size == 2);
	assert(vector->data[0] == 2);
	assert(vector->data[1] == -3);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_PushFrontElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	PushFrontElement(vector, 5);
	assert(vector->size == 5);
	assert(vector->data[0] == 5);
	assert(vector->data[1] == 2);
	assert(vector->data[2] == -3);
	assert(vector->data[3] == 10);
	assert(vector->data[4] == 561329);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_PopFrontElement()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	PopFrontElement(vector);
	assert(vector->size == 3);
	assert(vector->data[0] == -3);
	assert(vector->data[1] == 10);
	assert(vector->data[2] == 561329);
	PopFrontElement(vector);
	assert(vector->size == 2);
	assert(vector->data[0] == 10);
	assert(vector->data[1] == 561329);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}


int _TEST_Function(const int value) { return value * 2; }
void _TEST_ApplyFunctionToVector()
{
	printf("%s started...\n", __func__);
	Vector_int * vector = CreateVector(4);
	vector->data[0] = 2;
	vector->data[1] = -3;
	vector->data[2] = 10;
	vector->data[3] = 561329;
	vector->size = 4;
	ApplyFunctionToVector(vector, _TEST_Function);
	assert(vector->data[0] == 2 * 2);
	assert(vector->data[1] == -3 * 2);
	assert(vector->data[2] == 10 * 2);
	assert(vector->data[3] == 561329 * 2);
	DeleteVector(vector);
	printf("%s passed successfully.\n\n", __func__);
}