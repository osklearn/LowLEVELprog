#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key
 * @key: key to be hashed out into index
 * @size: size of the array of the hash table
 * Return: index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (!key || !size || size < 1)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);
}
