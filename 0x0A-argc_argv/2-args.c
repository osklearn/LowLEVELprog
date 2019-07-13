#include <stdio.h>
/**
* main - print the arguments received
*@argc: argument count
*@argv: string of arguments
*Return: 0 (success)
*/
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
