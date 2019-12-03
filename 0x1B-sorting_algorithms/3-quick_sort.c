#include "sort.h"

/**
 * swap - Swaps two elements
 * @i: i
 * @j: j
 */

void swap(int *i, int *j)
{
	int temp = 0;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * partition - Partition
 *
 * @array: Given array.
 * @size: Size of given array.
 * @start: start
 * @pivot: pivot
 *
 * Return: pivot
 */

int partition(int *array, size_t size, size_t start, size_t pivot)
{
	size_t i;

	for (i = start; i < pivot; i++)
	{
		if (array[i] < array[pivot])
		{
			if (i != start)
			{
				swap(&array[start], &array[i]);
				print_array(array, size);
			}
			start++;
		}
	}
	if (array[start] > array[pivot])
	{
		swap(&array[start], &array[pivot]);
		pivot = start;
		print_array(array, size);
	}
	return (pivot);
}

/**
 * lquick - lquick
 *
 * @array: Given array.
 * @size: Size of given array.
 * @start: Start
 * @end: End
 *
 */

void lquick(int *array, size_t size, size_t start, size_t end)
{
	size_t split;


	if (end == 0 || end <= start)
	{
		return;
	}
	split = partition(array, size, start, end);
	if (split != 0 && split >= start)
	{
		lquick(array, size, start, split - 1);
	}
	if (split < size - 1)
	{
		lquick(array, size, split + 1, end);
	}

}

/**
 * quick_sort - Sorts using the quick sort algorithm
 *
 * @array: Given array.
 * @size: Size of given array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lquick(array, size, 0, size - 1);
}
