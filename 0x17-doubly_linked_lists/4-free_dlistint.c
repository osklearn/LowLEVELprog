#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - Funtion that free a dlistint_t list.
* @head: head of the list
*Return: Nothing (void)
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
