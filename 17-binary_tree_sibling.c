#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node || !node->parent)
		return (NULL);

	if (parent->right != node)
		return (parent->right);
	else if (parent->left != node)
		return (parent->left);
	return (NULL);
}
