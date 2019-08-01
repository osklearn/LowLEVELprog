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
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	cp = malloc(len * sizeof(char));

	if (cp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		cp[i] = str[i];
	}

	return (cp);
}

/**
* add_node - Function that adds a new node at the beginning of a list
*@head: head of the list
*@str: string to add
*Return: the addres of the new element or null if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->len = _strlen(str);
	new->str = _strdup(str);
	*head = new;

	return (*head);
}
