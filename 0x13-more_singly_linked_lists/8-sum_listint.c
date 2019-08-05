#include "lists.h"
/**
* sum_listint - Function that returns the sum of all the data (n)
* of a listint_t linked list
*@head: head of the list
*Return: the sum of the data or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	listint_t *go;
	unsigned int sum;

	if (head == NULL)
		return (0);

	sum = 0;

	go = head;

	while (go != NULL)
	{
		sum += go->n;
		go = go->next;
	}

	return (sum);
}
