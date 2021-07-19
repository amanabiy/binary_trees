#include "binary_trees.h"
/**
 * is_leaf - checks if node is a leaf
 * @node: pointer to the node
 * Return: 1 if a leaf, 0 other wise
 */
int is_leaf(const binary_tree_t *node)
{
	if (node != NULL && (node->left == NULL && node->right == NULL))
		return (1);
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root
 * Return: the height or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || is_leaf(tree))
		return (0);

	size_t left_height;
	size_t right_height;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
