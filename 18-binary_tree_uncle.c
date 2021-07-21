#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node
 * Return: a pointer to the uncle, Otherwise Null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand = node->parent->parent;
	binary_tree_t *parent = node->parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (grand->left != parent)
	{
		if (!grand->left)
			return (NULL);
		return (grand->left);
	}
	else
	{
		if (!grand->right)
			return (NULL);
		return (grand->right);
	}
}
