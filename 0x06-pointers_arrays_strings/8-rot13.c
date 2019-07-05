#include "holberton.h"
/**
* *rot13 - encodes a string using rot13
*@c: string to convert
*Return: encoded string
*/
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M'))
		{
			c[i] = c[i] + 13;
		}
		else
		{
			while ((c[i] >= 'n' && c[i] <= 'z')
				|| (c[i] >= 'N' && c[i] <= 'Z'))
			{
				c[i] = c[i] - 13;
			}
		}
	}
	return (c);
}
