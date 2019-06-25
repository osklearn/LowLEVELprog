#include "holberton.h"
#include <stdlib.h>
/**
* print_last_digit - takes the last digit of a number
* @n: number recieved
*
*Return: 1 a letter 0 otherwise
*/
int print_last_digit(int r)
{
	int last;

	last = abs(r % 10);
	_putchar(last + '0');
	return (last);
}
