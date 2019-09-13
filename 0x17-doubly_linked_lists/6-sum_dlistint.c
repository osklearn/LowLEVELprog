#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - Function that returns the sum of all the data (n)
* of a dlistint_t list.
* @head: head of the list
* Return: the sum of all the data, if the list is empty 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
