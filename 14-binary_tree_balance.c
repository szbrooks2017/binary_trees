#include "binary_trees.h"

/**
 * binary_tree_height - finds the distance from root to farthest leaf
 * @tree: pointer to the root node of the tree
 * Return: the number of generation or 0 if null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}

/**
 * binary_tree_balance - finds the balance factor of a binary tree
 * @tree: is the pointer to the root of the tree
 * Return: returns the factorial
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
