#include "holberton.h"
/**
* puts_half - Prints half of a string
*@str: string to print
*Return: 0 (success)
*/
void puts_half(char *str)
{
	int i, len, l;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	
	l = len;
	if (len % 2 != 0)
	{
		len = (len - 1) / 2;
	}
	else
	{
		len = len / 2;
	}
	for (i = 0; i < l; i++)
	{
		if (i >= len)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
