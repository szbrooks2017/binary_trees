#include "binary_trees.h"

/**
 * binary_tree_is_root - checks to see if the node is a root
 * @node: is the pointer to the node to check
 * Return: returns 1 if node is root else 0, NULL is 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
