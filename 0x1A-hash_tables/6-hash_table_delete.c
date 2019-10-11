#include "hash_tables.h"

/**
 * hash_table_delete - Function that deketes a hash table
 * @ht: hash table to delete
 * Return: Nothing (void)
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL;
	hash_node_t *temp = NULL;
	unsigned int index = 0;

	for (index = 0; index < ht->size; index++)
	{
		head = ht->array[index];
		while (head != NULL)
		{
			temp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = temp;
		}
	}
	free(ht->array);
	free(ht);
}
