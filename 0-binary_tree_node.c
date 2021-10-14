#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 * @parent: is the pointer to the parent node
 * @value: is the value to put in the new node
 * Return: returns a pointer to the new node or null if fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* allocate memory for new node */
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	/* assign data to the new node */
	/* initialize left and right children as null */
	if (node != NULL)
	{
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
	}
	/* return new node */
	return (node);
}
