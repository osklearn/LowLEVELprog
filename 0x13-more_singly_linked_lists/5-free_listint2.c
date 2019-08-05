#include "lists.h"
/**
* free_listint2 - Function that frees a list
*@head: head of the list
*Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *go;

	if (head == NULL || *head == NULL)
		return;

	go = *head;

	while (head != NULL && go != NULL)
	{
		temp = go;
		go = go->next;
		free(temp);
	}

	*head = NULL;
}
