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

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: is the pointer to the root of the tree
 * Return: returns the count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	if (binary_tree_is_leaf(tree) == 1)
	{
		return (0);
	}

	left_height = binary_tree_nodes(tree->left);
	right_height = binary_tree_nodes(tree->right);

	return ((left_height + right_height) + 1);
}
