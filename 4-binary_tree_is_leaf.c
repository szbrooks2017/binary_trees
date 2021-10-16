#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks to see if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: returns 1 if node else 0, NULL is 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
