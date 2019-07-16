#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *create_array - creates an array of chars
*and initializes it with a specific char.
*@size: size of the array
*@c: character to initialized
*Return: 0 if size is zero, otherwhise a ponter to the array or null if fails
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size != 0)
	{
		a = malloc(size * sizeof(c));
	}
	else
	{
		return (NULL);
	}

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);

}
