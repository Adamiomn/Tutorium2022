#include <stdio.h>
#include <stdlib.h>
#include "NaiveMapTests.h"


int main()
{
	printf("\nExecuting tests for NaiveMap...\n\n");

	_TEST_CreateMap();
	_TEST_DeleteMap();
	_TEST_Map_IsEmpty();
	_TEST_Map_Insert();
	_TEST_Map_GetValue();
	_TEST_Map_RemoveByKey();
	_TEST_Map_MatchRemoveByKeyPredicate();
	_TEST_Map_MatchRemoveByPredicate();
	_TEST_Map_ContainsKey();
	_TEST_Map_ContainsValue();

	printf("\nAll tests passed successfully.\n");

	return EXIT_SUCCESS;
}