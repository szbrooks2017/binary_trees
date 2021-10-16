#include "binary_trees.h"

/**
 * binary_tree_size - calculates the amount of nodes
 * @tree: is the pointer to the root of the tree
 * Return: returns the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_size(tree->left);
	right_height = binary_tree_size(tree->right);

	return ((left_height + right_height) + 1);
}
