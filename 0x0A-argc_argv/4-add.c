#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
* main - Program that adds positive numbers
*@argc: argument count
*@argv: string of pointers
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i, sum, n;

	sum = 0;
	if (argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{

		for (i = 0; argv[argc][i] != '\0'; i++)
		{


			if (!(isdigit(argv[argc][i])))
			{

				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		sum += n;
	}
	printf("%d\n", sum);
	return (sum);
}
