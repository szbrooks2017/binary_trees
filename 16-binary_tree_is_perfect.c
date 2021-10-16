#include "binary_trees.h"

/**
 * find_depth - finds the distance from the tree to that node
 * @tree: is a pointer to the tree of the tree
 * Return: returns the distance
 */

int find_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);

}

/**
 * find_perfect - finds if each parent has two nodes
 * @tree: is the pointer to the tree of the tree
 * @d: is the depth of one of the sides
 * @level: is the generation of the tree
 *
 * Return: returns a boolean int
 */

int find_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (d == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (find_perfect(tree->left, d, level + 1) &&
			find_perfect(tree->right, d, level + 1));

}

/**
 * binary_tree_is_perfect - finds the distance from the tree to that node
 * @tree: is a pointer to the tree of the tree
 * Return: returns the distance
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
	{
		return (0);
	}

	d = find_depth(tree);

	if (find_perfect(tree, d, 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

