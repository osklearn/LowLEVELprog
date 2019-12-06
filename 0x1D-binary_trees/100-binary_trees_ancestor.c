#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - Function that finds the lowest common
 * ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, return NULL
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);
	if (binary_tree_depth(first) > binary_tree_depth(second))
		first = first->parent;
	else
		second = second->parent;
	return (binary_trees_ancestor(first, second));
}
