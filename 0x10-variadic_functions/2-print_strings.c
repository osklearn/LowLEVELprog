#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Function that prints strings followed by new line
*@separator: is the string to be printed between the strings
*@n: number of strings passed to the function
*Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i == (n - 1) || separator == '\0')
			continue;
		else
			printf("%s", separator);
	}

	va_end(strings);
	printf("\n");
}
