#include <stdio.h>
/**
* main - print out its name
*@argc: argument count
*@argv: string of pointers
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		argv[0] = argv[4];
		printf("%s\n", argv[0]);
	}
	return (0);
}
