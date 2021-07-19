#include "binary_trees.h"
/**
 * binary_tree_node- creates a binary tree node
 * @parent: is a pointer to the parent node of the node to creae
 * @value: is the value to put in the new node
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return;
	if (value == NULL)
		return;

	binary_tree_t *new_node;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if(parent->data > value)
		parent->left = new_node;
	else
		parent->left = new_node;
	return new_node;
}
