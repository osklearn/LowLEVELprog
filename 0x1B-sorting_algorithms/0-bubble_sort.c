#include "sort.h"
/**
 * bubble_sort - Sorts an array of ints in ascending order using Bubble sort.
 * @array: given array.
 * @size: size of given array.
 * Return: Void function.
 */

void bubble_sort(int *array, size_t size)
{
	size_t tmp, trav, each_ele;

	if (array == NULL || size < 2)
	{
		return;
	}
	/** loop to traverse the array */
	for (trav = 1; trav < size; trav++)
	{
		/** loop to index each element */
		for (each_ele = 0; each_ele < size - 1; each_ele++)
		{
			/** Condition for the greater element */
			if (array[each_ele] > array[each_ele + 1])
			{
				/** Swap the elements */
				tmp = array[each_ele];
				array[each_ele] = array[each_ele + 1];
				array[each_ele + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
