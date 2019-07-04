#include "holberton.h"
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
* *_strncat - concatenates two strings
*@dest: string to print
*@src: string origin
*@n: number of bytes
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = _strlen(dest);
	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
