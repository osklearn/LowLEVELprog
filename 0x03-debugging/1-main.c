#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*while (i < 10) i never increments so it always be less than 10 and always print 0
	{
		putchar(i);
	}*/

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
