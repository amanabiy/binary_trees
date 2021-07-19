#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node
 * or NULL on failure or if the parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *new_left_child = malloc(sizeof(binary_tree_t));

	if (new_left_child == NULL)
		return (NULL);

	new_left_child->parent = parent;
	new_left_child->n = value;
	new_left_child->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_left_child;
		new_left_child->left = NULL;
	}
	else
	{
		new_left_child->left = parent->left;
		parent->left = new_left_child;
		new_left_child->left->parent = new_left_child;
	}

	return (new_left_child);
}
