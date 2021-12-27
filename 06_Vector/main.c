#include <stdlib.h>

#include "VectorTests.h"
#include <stdio.h>


int main()
{
	printf("\nExecuting tests for Vector_int...\n\n");

	_TEST_CreateVector();
	_TEST_DeleteVector();
	_TEST_IsVectorEmpty();
	_TEST_GetSize();
	_TEST_AccessElement();
	_TEST_AccessFirstElement();
	_TEST_AccessLastElement();
	_TEST_InsertElement();
	_TEST_RemoveElement();
	_TEST_RemoveElements();
	_TEST_GetElementIndex();
	_TEST_CountValues();
	_TEST_ContainsValue();
	_TEST_PushBackElement();
	_TEST_PopBackElement();
	_TEST_PushFrontElement();
	_TEST_PopFrontElement();
	_TEST_ApplyFunctionToVector();

	printf("\nAll tests passed successfully.\n");

	return EXIT_SUCCESS;
}