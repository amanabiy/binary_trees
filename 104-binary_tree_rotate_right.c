#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: a pointer to the root
 * Return: a pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	if (tree->left)
	{
		tree->left->parent = tree->parent;
		tree->parent = tree->left;
		if (tree->parent->right)
			tree->left = tree->parent->right;
		tree->parent->right = tree;
	}
	return (tree->parent);
}
