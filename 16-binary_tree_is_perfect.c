#include "binary_trees.h"
/**
 * bt_height - finds the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: height of the tree, othwerwise 0
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = bt_height(tree->left);
	right = bt_height(tree->right);
	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
	return (left + right);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root of the tree
 * Return: the balance factor, otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (bt_height(tree->left) - bt_height(tree->right));
}
#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree
 * Return: 1 if it is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
/**
 * binary_tree_is - checks if the binary tree is perfect
 * @tree: a pointer to the root of the tree
 * Return: 1 if perfect, otherwise 0 (NULL)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	return (0);
}
