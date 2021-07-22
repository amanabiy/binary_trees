#include "binary_trees.h"
/**
 * bst_insert - inserts a node into a BST
 * @tree: a pointer to the root
 * @value: the value to be inserted
 * Return: a pointer to the inserted node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
	{
	    *tree = malloc(sizeof(bst_t *));
	    *tree->n = value;
	    *tree.parent = NULL;
	    *tree->left = *tree->right = NULL;
	    return (*tree);
	}
	if (value < *tree->n)
		*tree->left = bst_insert(*tree->left, value);
	if (value > *tree->n)
		*tree->right = bst_insert(*tree->right, value);
	return (*tree);
}
