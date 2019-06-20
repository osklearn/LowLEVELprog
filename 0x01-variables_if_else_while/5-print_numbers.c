#include <stdio.h>
/*
* main - Print all single digit numbers base 10
*Return: 0 (success)
*/
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}

