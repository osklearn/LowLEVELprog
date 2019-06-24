#include "holberton.h"
/**
 * print_alphabet_x10 - function to print the alphabet 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char l;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
		i++;
	}
}
