#include <stdio.h>
/**
* main - Print all single digit numbers base 10
*Return: 0 (success)
*/
int main(void)
{
	int num;
	char l;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num + '0');
	}
	for (l = 'a' ; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}

