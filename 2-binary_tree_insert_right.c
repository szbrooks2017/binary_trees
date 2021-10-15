#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the right
 * @parent: is a pointer to the node to the right child in
 * @value: is the value of the node to the right child in
 * Return: returns a pointer or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* create a new node */
	binary_tree_t *right_node = NULL;

	/* parent check */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* call function that creates new node */
	right_node = binary_tree_node(parent, value);

	/* malloc return */
	if (right_node == NULL)
	{
		return (NULL);
	}

	/* link child to right parent */
	right_node->right = parent->right;

	/* check if exists */
	if (right_node->right != NULL)
	{
		right_node->right->parent = right_node;
	}

	/* the child becomes a parent */
	parent->right = right_node;

	return (right_node);
}
