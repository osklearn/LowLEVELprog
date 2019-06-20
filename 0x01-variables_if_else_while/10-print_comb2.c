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
		for (j = 48; j < 58 ; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

