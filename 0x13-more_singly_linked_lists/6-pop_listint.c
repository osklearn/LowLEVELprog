#include "lists.h"
/**
* pop_listint - Function that deletes the head node od a linked list and
* returns the head node's data(n)
*@head: head of the list
*Return: head node's list, if list is empty 0
*/
int pop_listint(listint_t **head)
{
	listint_t *now;
	int retval;

	if (*head == NULL)
		return (0);

	now = *head;
	retval = now->n;
	*head = now->next;
	free(now);

	return (retval);
}
