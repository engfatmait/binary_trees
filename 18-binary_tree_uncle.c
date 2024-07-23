#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: node to check
 * Return: The uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}
