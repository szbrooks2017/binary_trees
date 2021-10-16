#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree with the inorder method
 * @tree: is the pointer to the root node of the tree
 * @func: is a function pointer to call for each node
 * the value in the node must be passed as a parameter to this funciton
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
