#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Function that inserts a new node
* at a given position
* @h: header of the list
* @idx: index of the node to insert
* @n: node to add
* Return: The address of the ew node, if it fails NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *new;
	unsigned int counter;

	if (h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*h == NULL)
	{
		if (idx > 0)
			free(new), return (NULL);
		new->next = NULL, *h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h, (*h)->prev = new;
		*h = new;
		return (new);
	}
	for (counter = 0, temp = *h; temp != NULL && counter <= idx;)
	{
		temp2 = temp->next;
		if (counter == idx - 1)
		{
			temp->next = new;
			new->prev = temp;
			if (temp2 == NULL)
				new->next = NULL;
			else
				new->next = temp2, temp2->prev = new;
			return (new);
		}
		temp = temp->next, counter++;
	}
	return (NULL);
}
