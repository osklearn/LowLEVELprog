#include "holberton.h"
/**
* *string_toupper - changes all lowercase letters to uppercase
*@c: string to change
*Return: string changed
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
