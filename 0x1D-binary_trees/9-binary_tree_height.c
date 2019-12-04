#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if the tree is NULL, otherwise the height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree == NULL || (binary_tree_is_leaf(tree) && binary_tree_is_leaf(tree)))
		return (0);

	r_height = binary_tree_height(tree->right);
	l_height = binary_tree_height(tree->left);
	if (l_height > r_height)
		return (l_height + 1);
	return (r_height + 1);

}

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
