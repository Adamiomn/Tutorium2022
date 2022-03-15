#ifndef NAIVEMAP_H
#define NAIVEMAP_H

#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief Map structure. Should contain at least all the key-value pairs.
 */
typedef struct NaiveMap NaiveMap;


/**
 * @brief Creates a map.
 * 
 * @return NaiveMap* pointer to the created map
 */
NaiveMap * CreateMap();

/**
 * @brief Deletes a map and all its key-value pairs. Does not delete any values.
 * 
 * @param map map to delete
 */
void DeleteMap(NaiveMap * const map);

/**
 * @brief Checks if the map is empty.
 * 
 * @param map map to check
 * @return true if the map is empty
 * @return false if the map is not empty
 */
bool Map_IsEmpty(const NaiveMap * const map);

/**
 * @brief Inserts an element into the map and returns whether the element was inserted.
 * 
 * @param map map to insert element into
 * @param key key of key-value pair
 * @param value value to insert into the map
 * @param allowReassignment whether to allow reassigning the value of a key-value pair with the new value
 * @return true if the element was inserted; this is true for both new key-value pairs and reassigning of the value of a key-value pair
 * @return false if the element was not inserted; this means there already exists the key
 */
bool Map_Insert(NaiveMap * const map, const char * key, void * const value, const bool allowReassignment);


/**
 * @brief Retrieves a value from the map.
 * 
 * @param map map to look in
 * @param key key to look for
 * @return void* value of key-value pair
 */
void * Map_GetValue(NaiveMap * const map, const char * key);

/**
 * @brief Removes a key-value pair by key, i.e. looks for the key and removes the key-value pair if it matches. Returns whether an element was removed.
 * 
 * @param map map to remove key-value pair from
 * @param key key to match
 * @return true if a key-value pair was removed
 * @return false if no key-value pair was removed
 */
bool Map_RemoveByKey(NaiveMap * const map, const char * key);

/**
 * @brief Removes a key-value pairs by value, i.e. looks for a value and removes a key-value pair if it matches. Returns the number of elements removed.
 * 
 * @param map map to remove key-value pair from
 * @param value value to match
 * @return size_t number of elements removed
 */
size_t Map_RemoveByValue(NaiveMap * const map, const void * value);

/**
 * @brief Removes all key-value pairs by predicate function, i.e. removes all the key-value pairs, where the predicate returns true when given the key and a map's key. Returns the number of elements removed.
 * 
 * @param map map to remove key-value pairs from
 * @param key key to use
 * @param predicate predicate to use
 * @return size_t number of elements removed
 */
size_t Map_MatchRemoveByKeyPredicate(NaiveMap * const map, const char * key, bool (*predicate)(const char *, const char *));

/**
 * @brief Removes all key-value pairs by predicate function, i.e. removes all key-value pairs, where the predicate returns true for the given key.
 * 
 * @param map map to remove key-value pairs from
 * @param predicate predicate to use
 * @return size_t number of elements removed
 */
size_t Map_MatchRemoveByPredicate(NaiveMap * const map, bool (*predicate)(const char *));

/**
 * @brief Checks if the map contains the given key.
 * 
 * @param map map to check
 * @param key key to match
 * @return true if the map contains the key
 * @return false if the map does not contain the key
 */
bool Map_ContainsKey(const NaiveMap * const map, const char * key);

/**
 * @brief Checks if the map contains the given value.
 * 
 * @param map map to check
 * @param value value to match
 * @return true if the map contains the value
 * @return false if the map does not contain the value
 */
bool Map_ContainsValue(const NaiveMap * const map, void * const value);



#endif