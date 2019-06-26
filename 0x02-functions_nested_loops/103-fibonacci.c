#include <stdio.h>
/**
* main - print sum of even value fibonacci numbers up to 4000000
*Return: 0 (success)
*/
int main(void)
{
	long i, j, e_sum, a_sum, max;

	i = 1;
	j = 2;
	max = 4000000;
	e_sum = 0;
	a_sum = 0;
	while (i < max && j < max)
	{
		if ((j % 2) == 0)
			e_sum += j;
		a_sum = i + j;
		i = j;
		j = a_sum;
	}
	printf("%ld\n", e_sum);
	return (0);
}
