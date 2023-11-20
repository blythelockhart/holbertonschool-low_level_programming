#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair should be stored
 * in the array of the hash table.
 * @key: The key
 * @size: The size of the array of the hash table
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Get the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Return the index within the size of the array */
	return (hash_value % size);
}
