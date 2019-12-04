#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if the tree is NULL, otherwise the depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (1)
	{
		if (tree->parent != NULL)
		{
			tree = tree->parent;
			depth++;
		}
		else
			break;
	}

	return (depth);
}
