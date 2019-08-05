#include "lists.h"
/**
* free_listint - Function that frees a list
*@head: head of the list
*Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
