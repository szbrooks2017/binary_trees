#include "binary_trees.h"

/**
 * binary_tree_depth - finds the distance from the root to that node
 * @tree: is a pointer to the root of the tree
 * Return: returns the distance
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	size_t depth;

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);

}
