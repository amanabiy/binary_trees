#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	binary_tree_t *parent = node->parent;

	if (parent->left != node)
	{
		if (!parent->left)
			return (NULL);
		return (parent->left);
	}
	else
	{
		if (!parent->right)
			return (NULL);
		return (parent->right);
	}
}
