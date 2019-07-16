#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *_strdup - duplicaate a strning with new memory
*@str: string received
*Return: Null otherwise the duplicated string
*/
char *_strdup(char *str)
{
	char *cp;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}

	i++;
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
