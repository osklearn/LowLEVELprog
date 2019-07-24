#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* main - program that calculates 2 numbers
*@argc: argument counter
*@argv: argument vector that brings the values
*Return: 0, 98 argc error, 99 on illegal operator, 100 div/mod by zero
*/
int main(int argc, char *argv[])
{
	int result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == '0')
	{
		printf("Error\n");
		exit(100);
	}

	result = op(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
	return (0);
}
