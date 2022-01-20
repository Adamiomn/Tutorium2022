#ifndef VECTOR_H
#define VECTOR_H


#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief Integer vector struct.
 * Contains...
 *    a) a dynamically allocated data array containing the elements of the vector
 *    b) a size member that indicates the current number of elements in the vector
 *    c) a capacity member that indicates the current maximum number of elements in the vector.
 */
typedef struct Vector_int Vector_int;


/**
 * @brief Prints the contents of the vector.
 * @param vector
 */
void PrintVectorContents(const Vector_int * const vector);

/**
 * @brief Creates a vector with the initial capacity given.
 * The vector is dynamically allocated and must be deleted via DeleteVector(...).
 * @param initialCapacity
 * @return Vector_int* 
 */
Vector_int * CreateVector(const size_t initialCapacity);

/**
 * @brief Deletes a vector. Must delete the struct itself as well as the data array contained in the struct.
 * @param vector
 */
void DeleteVector(Vector_int * const vector);

/**
 * @brief Checks if the vector is empty.
 * @param vector
 * @return true
 * @return false
 */
bool IsVectorEmpty(const Vector_int * const vector);

/**
 * @brief Returns the current size of the vector, i.e. the number of elements stored.
 * @param vector
 * @return size_t
 */
size_t GetSize(const Vector_int * const vector);

/**
 * @brief Accesses the element with index "index" and returns the value.
 * @param vector
 * @param index
 * @return int
 */
int AccessElement(const Vector_int * const vector, const size_t index);

/**
 * @brief Accesses the first element in the vector and returns the value.
 * @param vector
 * @return int
 */
int AccessFirstElement(const Vector_int * const vector);

/**
 * @brief Accesses the last element in the vector and returns the value.
 * @param vector
 * @return int
 */
int AccessLastElement(const Vector_int * const vector);

/**
 * @brief Inserts an element at the specified index.
 * All elements starting from the index must automatically be shifted backwards.
 * The element may not be inserted if the index would create a "hole" in the vector, i.e. if the vector would not be contiguous after the insertion.
 * The vector may need to adjust its own capacity in order to fit the new element.
 * @param vector
 * @param element
 * @param index
 */
void InsertElement(Vector_int * const vector, const int element, const size_t index);

/**
 * @brief Removes the element at the specified index.
 * All elements after the index must automatically be shifted forwards to "fill the hole".
 * The vector may adjust its size to save memory.
 * @param vector
 * @param index
 */
void RemoveElement(Vector_int * const vector, const size_t index);

/**
 * @brief Removes all the elements with the specified value.
 * @param vector
 * @param element
 */
void RemoveElements(Vector_int * const vector, const int element);

/**
 * @brief Gets the index of the first element with the given value.
 * If no element is found it should return -1.
 * @param vector
 * @param value
 * @return long long
 */
long long GetElementIndex(const Vector_int * const vector, const int value);

/**
 * @brief Counts the number of occurences of a value in the vector.
 * @param vector
 * @param value
 * @return size_t
 */
size_t CountValues(const Vector_int * const vector, const int value);

/**
 * @brief Checks if the vector contains the value.
 * @param vector
 * @param value
 * @return true
 * @return false
 */
bool ContainsValue(const Vector_int * const vector, const int value);

/**
 * @brief Inserts an element at the end of the vector. The same rules as InsertElement(...) apply.
 * @param vector
 * @param element
 */
void PushBackElement(Vector_int * const vector, const int element);

/**
 * @brief Removes the last element of the vector. The same rules as RemoveElement(...) apply.
 * @param vector
 */
void PopBackElement(Vector_int * const vector);

/**
 * @brief Inserts an element at the beginning of the vector. The same rules as InsertElement(...) apply.
 * @param vector
 * @param element
 */
void PushFrontElement(Vector_int * const vector, const int element);

/**
 * @brief Removes the first element of the vector. The same rules as RemoveElement(...) apply.
 * @param vector
 */
void PopFrontElement(Vector_int * const vector);

/**
 * @brief Applies a function to all the elements in the vector.
 * @param vector
 * @param func
 */
void ApplyFunctionToVector(Vector_int * const vector, int func(const int));


#endif
