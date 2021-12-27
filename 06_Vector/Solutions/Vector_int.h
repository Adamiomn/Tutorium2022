#ifndef VECTOR_H
#define VECTOR_H


#include <stdlib.h>
#include <stdbool.h>

typedef struct Vector_int
{
	int * data;
	size_t size;
	size_t capacity;
} Vector_int;


void PrintVectorContents(const Vector_int * const vector);
Vector_int * CreateVector(const size_t initialCapacity);
void DeleteVector(Vector_int * const vector);
bool IsVectorEmpty(const Vector_int * const vector);
size_t GetSize(const Vector_int * const vector);
int AccessElement(const Vector_int * const vector, const size_t index);
int AccessFirstElement(const Vector_int * const vector);
int AccessLastElement(const Vector_int * const vector);
void InsertElement(Vector_int * const vector, const int element, const size_t index);
void RemoveElement(Vector_int * const vector, const size_t index);
void RemoveElements(Vector_int * const vector, const int element);
size_t GetElementIndex(const Vector_int * const vector, const int element);
size_t CountElements(const Vector_int * const vector, const int element);
bool ContainsElement(const Vector_int * const vector, const int element);
void PushBackElement(Vector_int * const vector, const int element);
void PopBackElement(Vector_int * const vector);
void PushFrontElement(Vector_int * const vector, const int element);
void PopFrontElement(Vector_int * const vector);
void ApplyFunctionToVector(Vector_int * const vector, int func(const int));


#endif