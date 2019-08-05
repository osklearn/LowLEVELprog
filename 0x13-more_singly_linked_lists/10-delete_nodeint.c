#include "lists.h"
/**
* delete_nodeint_at_index - Function that deletes the node at index of a
* linked list
*@head: head of the list
*@index: index of the node that shoul be deleted. Index starts in 0
*Return: 1 if it succeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *go, *last;
	unsigned int i, len;

	if (*head == NULL)
		return (-1);

	len = 0;
	go = *head;

	while (go->next != NULL)
	{
		go = go->next;
		len++;
	}

	if (index > len)
		return (-1);

	go = *head;

	if (index == 0 && len != 0)
	{
		*head = go->next;
		free(go);
		return (1);
	}
	else if (index == 0)
	{
		*head = NULL;
		free(go);
		return (1);
	}
	i = 0;
	while (i != index)
	{
		if ((i + 1) == index)
			last = go;
		go = go->next;
		i++;
	}

	last->next = go->next;
	free(go);
	return (1);
}
