#include <stdlib.h>
#include <stdarg.h>
/**
* sum_them_all - Sum of all its parameters
*@n: number of parameters to pass
*Return: sum of the parameters or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum = 0;
	unsigned int i;

	/**Verify the number of arguments*/
	if (n == 0)
		return (0);

	/**Initializing arguments to store all values after n*/
	va_start(numbers, n);

	/**Sum all the arguments*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	/**clean the list*/
	va_end(numbers);

	return (sum);
}
