#include "holberton.h"
/**
* print_times_table - print n times the tables
* @n: where start table
*
*Return: nothing
*/
void print_times_table(int n)
{
	int r, c;
	int h, d, u, mult;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <=n; c++)
			{
				mul = r * c;
				h = mul / 100;
				d = mul / 10;
				u = mul % 10;
				if ( h == 0 && c != 0)
				{
					_putchar(' ');
					if (d == 0)
						_putchar(' ');
					else
						_putchar(d + '0');
					_putchar(u + '0');
				}
				else if (h != 0)
				{
					_putchar(h + '0');
					_putchar(d + '0');
					_putchar(u + '0');
				}
				if (c == 0)
					_putchar('0');
				if (c != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			c = 0;
		}
	}
}
