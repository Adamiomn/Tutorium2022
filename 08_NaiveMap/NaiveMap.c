#include "NaiveMap.h"
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



/*----------------------------------- Private utility functions -----------------------------------*/

void ReallocateMapMemory(NaiveMap * const map)
{
	map->mapEntries = realloc(map->mapEntries, sizeof(*map->mapEntries) * map->size);
	if (!map->mapEntries)
	{
		fprintf(stderr, "ERROR! Could not allocate memory for key-value pairs.");
		exit(EXIT_FAILURE);
	}
}

void RemoveKeyValuePair(NaiveMap * const map, const size_t index)
{
	free(map->mapEntries[index].key);
	for (size_t j = index; j < map->size - 1; ++j)
	{
		map->mapEntries[j].key = map->mapEntries[j + 1].key;
		map->mapEntries[j].value = map->mapEntries[j + 1].value;
	}
	--map->size;
	ReallocateMapMemory(map);
}


/*----------------------------------- Public functions -----------------------------------*/

NaiveMap * CreateMap()
{
	NaiveMap * map = malloc(sizeof(*map));
	if (!map)
	{
		fprintf(stderr, "ERROR! Could not allocate memory for map.");
		exit(EXIT_FAILURE);
	}

	map->mapEntries = NULL;
	map->size = 0;

	return map;
}

void DeleteMap(NaiveMap * const map)
{
	if (!map)
	{
		return;
	}

	for (size_t i = 0; i < map->size; ++i)
	{
		free(map->mapEntries[i].key);
	}
	free(map->mapEntries);
	free(map);
}

bool Map_IsEmpty(const NaiveMap * const map)
{
	return !map || map->size == 0;
}

bool Map_Insert(NaiveMap * const map, const char * key, void * const value, const bool allowReassignment)
{
	if (!map)
	{
		return false;
	}

	for (size_t i = 0; i < map->size; ++i)
	{
		if (strcmp(key, map->mapEntries[i].key) == 0)
		{
			if (allowReassignment)
			{
				map->mapEntries[i].value = value;
			}
			return allowReassignment;
		}
	}

	++map->size;
	ReallocateMapMemory(map);	// reallocating memory every time we add an element is wasteful but is done here for simplicity, geometric resizing would be preferred

	map->mapEntries[map->size - 1].key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!map->mapEntries[map->size - 1].key)
	{
		fprintf(stderr, "ERROR! Could not allocate memory for key of key-value pair.");
		exit(EXIT_FAILURE);
	}

	strcpy(map->mapEntries[map->size - 1].key, key);
	map->mapEntries[map->size - 1].value = value;

	return true;
}

void * Map_GetValue(NaiveMap * const map, const char * key)
{
	if (!map)
	{
		return NULL;
	}

	for (size_t i = 0; i < map->size; ++i)
	{
		if (strcmp(key, map->mapEntries[i].key) == 0)
		{
			return map->mapEntries[i].value;
		}
	}
	return NULL;
}

bool Map_RemoveByKey(NaiveMap * const map, const char * key)
{
	if (!map)
	{
		return false;
	}

	for (size_t i = 0; i < map->size; ++i)
	{
		if (strcmp(key, map->mapEntries[i].key) == 0)
		{
			RemoveKeyValuePair(map, i);
			return true;
		}
	}
	return false;
}
size_t Map_RemoveByValue(NaiveMap * const map, const void * value)
{
	if (!map)
	{
		return false;
	}

	size_t removedItemCount = 0;
	for (size_t i = 0; i < map->size; ++i)
	{
		if (value == map->mapEntries[i].value)
		{
			RemoveKeyValuePair(map, i);
			++removedItemCount;
		}
	}
	return removedItemCount;
}
size_t Map_MatchRemoveByKeyPredicate(NaiveMap * const map, const char * key, bool (*predicate)(const char *, const char *))
{
	if (!map)
	{
		return 0;
	}

	size_t removedItemCount = 0;
	for (size_t i = 0; i < map->size; ++i)
	{
		if (predicate(key, map->mapEntries[i].key))
		{
			RemoveKeyValuePair(map, i);
			++removedItemCount;
		}
	}
	return removedItemCount;
}
size_t Map_MatchRemoveByPredicate(NaiveMap * const map, bool (*predicate)(const char *))
{
	if (!map)
	{
		return 0;
	}

	size_t removedItemCount = 0;
	for (size_t i = 0; i < map->size; ++i)
	{
		if (predicate(map->mapEntries[i].key))
		{
			RemoveKeyValuePair(map, i);
			++removedItemCount;
		}
	}
	return removedItemCount;
}
bool Map_ContainsKey(const NaiveMap * const map, const char * key)
{
	if (!map)
	{
		return false;
	}

	for (size_t i = 0; i < map->size; ++i)
	{
		if (strcmp(key, map->mapEntries[i].key) == 0)
		{
			return true;
		}
	}
	return false;
}
bool Map_ContainsValue(const NaiveMap * const map, void * const value)
{
	if (!map)
	{
		return false;
	}

	for (size_t i = 0; i < map->size; ++i)
	{
		if (value == map->mapEntries[i].value)
		{
			return true;
		}
	}
	return false;
}