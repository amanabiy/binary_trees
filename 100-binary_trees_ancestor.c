#include "binary_trees.h"
/**
 * find_the_root - finds the root of a binary tree
 * @node: a pointer to the node
 * Return: pointer to the root
 */
binary_tree_t *find_the_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (node);
	return (node->parent);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lca
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (find_the_root(first) != find_the_root(second))
		return (NULL);
	binary_tree_t *root = find_ther_root(first);

	if (first == second)
		return (first);
	binary_tree_t *left, right;
	left = binary_trees_ancestor(root->left, first)
