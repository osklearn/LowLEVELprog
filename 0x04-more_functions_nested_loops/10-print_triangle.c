#include "holberton.h"
/**
* print_triangle - print a triangle
*@size: the size of the triangle
*Return: Nothing
*/
void print_triangle(int size)
{
	int i, j, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				s = size - i - 1;
				if (j < s)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
