#include <stdlib.h>
/**
* int_index - function that search for an integer
*@array: array of integers
*@size: number of elements in the array
*@cmp: pointer to the function to be used to compare values
*Return: the index of the first elemet for wich the cmp function no return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int (*p)(int);
	int i, value;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	p = cmp;

	for (i = 0; i < size;)
	{
		value = p(array[i]);
		if (value != 0)
			return (i);
		i++;
	}
	return (-1);
}
