#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: the number of leaves, otherwise 0
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, l_leaves, r_leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	l_leaves = binary_tree_leaves(tree->left);
	r_leaves = binary_tree_leaves(tree->right);

	leaves = l_leaves + r_leaves;
	return (leaves);
}
