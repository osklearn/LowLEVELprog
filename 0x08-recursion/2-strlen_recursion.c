#include "holberton.h"
/**
* _strlen_recursion - Calculates the length of a string
*@s: string to calculate the length
*Return: length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
