#include "binary_trees.h"

/**
 * binary_tree_uncle - is the sibling of the parent node
 * @node: is the node's whom uncle to find
 * Return: the value of the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL ||
		node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}
