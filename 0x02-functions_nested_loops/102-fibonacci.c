#include <stdio.h>
/**
* main - print fibonacci
*Return: 0 (success)
*/
int main(void)
{
	long i, j, sum, c;

	i = 0;
	j = 1;
	for (c = 0; c < 50; c++)
	{
		sum = i + j;
		i = j;
		j = sum;
		if (c != 49)
			printf("%ld, ", sum);
		else
			printf("%ld\n", sum);
	}
	return (0);
}
