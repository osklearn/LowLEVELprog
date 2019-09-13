#include "lists.h"

/**
* dlistint_len - Function that returns the number of elements in a linked list.
* @h: head of the list
* Return: the number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
