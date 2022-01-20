#include "NaiveMapTests.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>


typedef struct NaiveMapKeyValuePair
{
	char * key;
	void * value;
} NaiveMapKeyValuePair;

struct NaiveMap
{
	NaiveMapKeyValuePair * mapEntries;
	size_t size;
};



bool TESTKeyPredicate(const char * reference, const char * mapKey)
{
	return strlen(reference) == strlen(mapKey);
}

bool TESTPredicate(const char * mapKey)
{
	while (mapKey)
	{
		if (*mapKey == 'a')
		{
			return true;
		}
		++mapKey;
	}
	return false;
}



void _TEST_CreateMap()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	assert(map);
	assert(!map->mapEntries);
	assert(map->size == 0);
	free(map);

	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_DeleteMap()
{
	printf("%s started...\n", __func__);

	// Difficult to test, use valgrind

	printf("%s passed successfully.\n\n", __func__);
}
void _TEST_Map_IsEmpty()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = malloc(sizeof(*map));
	map->size = 0;
	assert(Map_IsEmpty(NULL));
	assert(Map_IsEmpty(map));
	free(map);

	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_Map_Insert()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	int value1 = 5;
	double value2 = 3.1415;
	char value3 = 'g';
	Map_Insert(map, "Banana", &value1, false);
	Map_Insert(map, "pi", &value2, false);
	Map_Insert(map, "constant", &value3, false);
	assert(strcmp(map->mapEntries[0].key, "Banana") == 0);
	assert(strcmp(map->mapEntries[1].key, "pi") == 0);
	assert(strcmp(map->mapEntries[2].key, "constant") == 0);
	assert(map->mapEntries[0].value == &value1);
	assert(map->mapEntries[1].value == &value2);
	assert(map->mapEntries[2].value == &value3);
	assert(map->size == 3);
	float value4 = 2.71828f;
	Map_Insert(map, "constant", &value4, false);
	assert(map->mapEntries[2].value == &value3);
	assert(map->size == 3);
	Map_Insert(map, "constant", &value4, true);
	assert(map->mapEntries[2].value == &value4);
	assert(map->size == 3);
	DeleteMap(map);

	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_Map_GetValue()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	int value1 = 5;
	double value2 = 3.1415;
	char value3 = 'g';
	Map_Insert(map, "Banana", &value1, false);
	Map_Insert(map, "pi", &value2, false);
	Map_Insert(map, "constant", &value3, false);
	assert(Map_GetValue(map, "Banana") == &value1);
	assert(Map_GetValue(map, "pi") == &value2);
	assert(Map_GetValue(map, "constant") == &value3);
	float value4 = 2.71828f;
	Map_Insert(map, "constant", &value4, false);
	assert(Map_GetValue(map, "constant") == &value3);
	Map_Insert(map, "constant", &value4, true);
	assert(Map_GetValue(map, "constant") == &value4);
	DeleteMap(map);

	printf("%s passed successfully.\n\n", __func__);
}

void _TEST_Map_RemoveByKey()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	int value1 = 5;
	double value2 = 3.1415;
	char value3 = 'g';
	Map_Insert(map, "Banana", &value1, false);
	Map_Insert(map, "pi", &value2, false);
	Map_Insert(map, "constant", &value3, false);
	Map_RemoveByKey(map, "pi");
	assert(map->mapEntries[0].value == &value1);
	assert(map->mapEntries[1].value == &value3);
	assert(map->size == 2);
	DeleteMap(map);

	printf("%s passed successfully.\n\n", __func__);
}
void _TEST_Map_RemoveByValue()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	int value1 = 5;
	double value2 = 3.1415;
	char value3 = 'g';
	Map_Insert(map, "Banana", &value1, false);
	Map_Insert(map, "pi", &value2, false);
	Map_Insert(map, "constant", &value3, false);
	Map_RemoveByValue(map, &value2);
	assert(map->mapEntries[0].value == &value1);
	assert(map->mapEntries[1].value == &value3);
	assert(map->size == 2);
	DeleteMap(map);

	printf("%s passed successfully.\n\n", __func__);
}
void _TEST_Map_MatchRemoveByKeyPredicate()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	int value1 = 5;
	double value2 = 3.1415;
	char value3 = 'g';
	Map_Insert(map, "Banana", &value1, false);
	Map_Insert(map, "pi", &value2, false);
	Map_Insert(map, "constant", &value3, false);
	Map_MatchRemoveByKeyPredicate(map, "aa", TESTKeyPredicate);
	assert(map->mapEntries[0].value == &value1);
	assert(map->mapEntries[1].value == &value3);
	assert(map->size == 2);
	DeleteMap(map);

	printf("%s passed successfully.\n\n", __func__);
}
void _TEST_Map_MatchRemoveByPredicate()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	int value1 = 5;
	double value2 = 3.1415;
	char value3 = 'g';
	Map_Insert(map, "Banana", &value1, false);
	Map_Insert(map, "pi", &value2, false);
	Map_Insert(map, "constant", &value3, false);
	Map_MatchRemoveByPredicate(map, TESTPredicate);
	assert(map->mapEntries[0].value == &value2);
	assert(map->size == 1);
	DeleteMap(map);

	printf("%s passed successfully.\n\n", __func__);
}
void _TEST_Map_ContainsKey()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	int value1 = 5;
	double value2 = 3.1415;
	char value3 = 'g';
	Map_Insert(map, "Banana", &value1, false);
	Map_Insert(map, "pi", &value2, false);
	Map_Insert(map, "constant", &value3, false);
	assert(Map_ContainsKey(map, "Banana"));
	assert(Map_ContainsKey(map, "pi"));
	assert(Map_ContainsKey(map, "constant"));
	DeleteMap(map);

	printf("%s passed successfully.\n\n", __func__);
}
void _TEST_Map_ContainsValue()
{
	printf("%s started...\n", __func__);

	NaiveMap * map = CreateMap();
	int value1 = 5;
	double value2 = 3.1415;
	char value3 = 'g';
	Map_Insert(map, "Banana", &value1, false);
	Map_Insert(map, "pi", &value2, false);
	Map_Insert(map, "constant", &value3, false);
	assert(Map_ContainsValue(map, &value1));
	assert(Map_ContainsValue(map, &value2));
	assert(Map_ContainsValue(map, &value3));
	DeleteMap(map);

	printf("%s passed successfully.\n\n", __func__);
}