#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that insers a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: the pointer of the created node, if it fails return NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
	}

	return (new);
}
