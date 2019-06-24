#include "holberton.h"
/**
* print_sign - check the number inserted
* @n: number recieved
*
*Return: 1 greater zero  0 is zero -1 less zero
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
