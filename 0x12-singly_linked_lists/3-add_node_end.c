#include "lists.h"

/**
* _strlen - returns the lenght of a string
*@s: poiter of character
*Return: the length of a string
*/
int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
* *_strdup - duplicaate a strning with new memory
*@str: string received
*Return: Null otherwise the duplicated string
*/
char *_strdup(const char *str)
{
	char *cp;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = _strlen(str);
	cp = malloc(i * sizeof(char));

	if (cp == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		cp[j] = str[j];
	}

	return (cp);
}

/**
* new_node - create a new node
*@s: string to put in the node
*Return: ponter to new node
*/

list_t *new_node(const char *s)
{
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = _strdup(s);
	add->len = _strlen(s);
	add->next = NULL;
	return (add);
}

/**
* add_node_end - function that adds a new node at the end of a list_t list
*@head: head of the list
*@str: string to add
*Return: the addres of the new element or null if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp = *head;

	if (head == NULL)
		return (NULL);

	end = new_node(str);
	if (end == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = end;

	return (*head);
}
