#include "holberton.h"
#define BUFFSIZE 1024

/**
* main - Program that copies the content of a file to another file
*@argc: argument counter
*@argv: argument vector (names of the files)
*Return: the following errors:
* 97 for syntax error
* 98 for read error
* 99 for write error
* 100 for close error
*/

int main(int argc, char **argv)
{
	int file_from, file_to, retvalue, readvalue;
	char buff[BUFFSIZE];

	retvalue = 1;
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	readvalue = read(file_from, buff, 1024);
	if (readvalue == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	while (readvalue != 0)
	{
		retvalue = write(file_to, buff, 1024);
		if (retvalue == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		readvalue = read(file_from, buff, 1024);
			if (readvalue == -1)
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}

	retvalue = close(file_from);
	if (retvalue == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);
	retvalue = close(file_to);
	if (retvalue == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]), exit(100);
	return (0);
}
