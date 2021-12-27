#include <stdlib.h>

#include "VectorTests.h"


int main()
{
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
	_TEST_CountElements();
	_TEST_ContainsElement();
	_TEST_PushBackElement();
	_TEST_PopBackElement();
	_TEST_PushFrontElement();
	_TEST_PopFrontElement();
	_TEST_ApplyFunctionToVector();

	return EXIT_SUCCESS;
}