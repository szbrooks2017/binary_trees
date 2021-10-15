#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left
 * @parent: is a pointer to the node to the left child in
 * @value: is the value of the node to the left child in
 * Return: returns a pointer or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* create a new node */
	binary_tree_t *left_node = NULL;

	/* parent check */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* call function that creates new node */
	left_node = binary_tree_node(parent, value);

	/* malloc return */
	if (left_node == NULL)
	{
		return (NULL);
	}

	/* link child to left parent */
	left_node->left = parent->left;

	/* check if exists */
	if (left_node->left != NULL)
	{
		left_node->left->parent = left_node;
	}

	parent->left = left_node;

	return (left_node);
}
