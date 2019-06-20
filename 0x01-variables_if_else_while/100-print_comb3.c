#include <stdio.h>
/**
* main - Print numbers from 00-99 with ,
*Return: 0 (success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

