#include "holberton.h"
/**
* print_most_numbers - print the numbers from 0 to 9 without 2 & 4
*
*Return: Nothing
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
