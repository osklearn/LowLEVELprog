#include "lists.h"
#include <stdlib.h>

/**
* get_dnodeint_at_index - Function that returns the nth node of a dlistint_t
* linked list
* @head: head of the linked list
* @index: index of the node
* Return: the index of the node, if it not exist return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	temp = head;

	while (temp != NULL && counter <= index)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}

	return (NULL);
}
