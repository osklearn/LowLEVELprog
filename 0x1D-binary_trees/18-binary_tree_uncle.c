#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the sibling of a node
 * @node: pointer to the node to find the uncle
 * Return: NULL if the node or if the node doesn't have uncle,
 * otherwise the pointer to the uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->right != NULL &&
		node->parent->parent->left != NULL)
	{
		if (node->parent->parent->right != node)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
