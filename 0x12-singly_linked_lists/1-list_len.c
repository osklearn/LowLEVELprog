#include "lists.h"
/**
* list_len - Function that returns the number of elements
*in a linked list_t list
*@h:head of the list
*Return: counter of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
