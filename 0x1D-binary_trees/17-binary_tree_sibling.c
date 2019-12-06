#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: NULL if the node or the parent is null or if the node doesn't have
 * sibling, otherwise the pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->right != NULL && node->parent->left != NULL)
	{
		if (node->parent->right != node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
