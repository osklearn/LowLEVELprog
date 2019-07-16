#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - returns the lenght of a string
*@s: poiter of character
*Return: the length of a string
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
* *str_concat - concatenates two strings
*@s1: first string to concatenate
*@s2: second string to concatenate
*Return: the ponter to string concatenate or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int l1, l2;
	int i, j;
	char *empty, *concat;

	/**lets make empty strings*/
	empty = "";

	/**comparing the enter strings*/
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;

	/**Calculating the length of the strings*/
	l1 = _strlen(s1);
	l2 = _strlen(s2);

	/**assign memory*/
	/**increments l2 for the null character*/
	l2++;
	concat = malloc((l1 + l2) * sizeof(*concat));

	/**verify if memory fails*/
	if (concat == NULL)
		return (NULL);

	/**concatenate the strings*/
	for (i = 0; i < l1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < l2; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	i++;
	concat[i] = '\0';
	return (concat);
}
