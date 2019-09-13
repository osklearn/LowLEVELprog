#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - Function that adds a new node at the beginning of linked list
* @head: head of the list
* @n: node to add
* Return: the address of the new element, if it fails NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

	return (new);
}
