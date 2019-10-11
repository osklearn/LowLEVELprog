#include "hash_tables.h"

/**
 * hash_table_get - Function that retreieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to search
 * Return: the value associated with the element, otherwise NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) != 0)
			head = head->next;
		return (head->value);
	}
	return (NULL);
}
