#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if the tree is NULL, otherwise the size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, s_left, s_right;

	if (tree == NULL)
		return (0);

	s_left = binary_tree_size(tree->left);
	s_right = binary_tree_size(tree->right);

	size = s_left + s_right + 1;
	return (size);
}
