#include "lists.h"

/**
* print_dlistint - Function that prints all the elements of a dlistint_t list.
* @h: head of the list
*Return: The number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
