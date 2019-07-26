#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - function that prints anything
*@format: list of types of arguments passed to function
*Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list anything;
	int i = 0;
	char *string;

	va_start(anything, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(anything, int));
				break;
			case 'i':
				printf("%d", va_arg(anything, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(anything, double));
				break;
			case 's':
				string = va_arg(anything, char *);
				if (string != NULL)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 's' || format[i] == 'i'
			|| format[i] == 'f') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	va_end(anything);
	printf("\n");
}
