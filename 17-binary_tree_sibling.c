#include "binary_trees.h"

/**
 * binary_tree_sibling - checks to see if the node has a sibling
 * @node: is the node to check
 * Return: the value of the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
