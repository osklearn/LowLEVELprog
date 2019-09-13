#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Function that adds a new node at the end of alinked list
* @head: head of the list
* @n: node to add
* Return: The address of the new node, if it fails NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
