#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if the tree is NULL, otherwise the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	height = help_height(tree->right, 1);
	if (help_height(tree->left, 1) > height)
		height = help_height(tree->left, 1);
	return (height);

}

/**
 * help_height - Function to help to calculate the height
 * @tree: pointer to the node
 * @height: height calculate
 * Return: height calculated
*/

size_t help_height(const binary_tree_t *tree, size_t height)
{
	size_t r_height, l_height;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (height);

	r_height = help_height(tree->right, height++);
	l_height = help_height(tree->left, height++);

	if (r_height > l_height)
		return (r_height);
	else
		return (l_height);
}
