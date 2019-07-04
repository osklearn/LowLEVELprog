#include "holberton.h"
/**
* *_strncpy - copies a string
*@dest: string dest
*@src: origin to copy
*@n: number of bytes
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, l = 0;

	for (i = 0; (i != n && src[i] != '\0'); i++)
	{
		dest[l] = src[i];
		l++;
	}
	while (l != n)
		dest[l++] = '\0';
	return (dest);
}
