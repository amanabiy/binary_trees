#include "binary_trees.h"
/**
 * find_the_root - finds the root of a binary tree
 * @node: a pointer to the node
 * Return: pointer to the root
 */
binary_tree_t *find_the_root(const binary_tree_t *node)
{
	binary_tree_t *new_node = (binary_tree_t *)node;
	if (node->parent == NULL)
		return (new_node);
	return (node->parent);
}
/**
 * bt_ancestor - finds the lca
 * @root: pointer to the root
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: the lca, otherwise 0
 */
binary_tree_t *bt_ancestor(binary_tree_t *root,
			   const binary_tree_t *first,
			   const binary_tree_t *second)
{
	binary_tree_t *left, *right;

	if (root == NULL)
		return (NULL);
	if (root->n == first->n || root->n == second->n)
		return (root);
	left = bt_ancestor(root->left, first, second);
	right = bt_ancestor(root->right, first, second);
	if (left == NULL)
		return (right);
	if (right == NULL)
		return (left);
	return (root);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lca
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *lca;

	/*if (!first || !second)
		return (NULL);*/

	if (find_the_root(first) != find_the_root(second))
		return (NULL);

	lca = bt_ancestor(find_the_root(first), first, second);
	return lca;
}
