#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * _pow - Function to calculate the power of a number
 * @x: number to power
 * @n: number
 * Return: x to the n
*/

int _pow(int x, int n)
{
	int i, number = 1;

	for (i = 0; i < n; i++)
		number *= x;

	return (number);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, otherwise 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height, perfect;
	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	perfect = _pow(2, (height + 1)) - 1;

	if (size == perfect)
		return (1);
	return (0);
}
