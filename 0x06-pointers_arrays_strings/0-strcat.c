#include "holberton.h"
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
* *_strcat - concatenates two strings
*@dest: string to dest
*@src: string origin
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, lendest, lensrc;

	lendest = _strlen(dest);
	lensrc = _strlen(src);
	for (i = 0; i < lensrc; i++)
	{
		dest[lendest + i] = src[i];
	}
	return (dest);
}
