#include "sort.h"
/**
 * selection_sort - Sorts travn array using Selection sort algorithm.
 *
 * @size: Size of travrray.
 * @array: Given array.
 */

void selection_sort(int *array, size_t size)
{
	size_t trav, min, each_el, tmp;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (trav = 0; trav < size - 1; trav++)
	{
		min = trav;
		for (each_el = trav + 1; each_el < size; each_el++)
		{
			if (array[each_el] < array[min])
			{
				min = each_el;
			}
		}
		if (trav != min)
		{
			tmp = array[trav];
			array[trav] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
