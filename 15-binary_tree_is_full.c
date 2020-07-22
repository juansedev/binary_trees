#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to root of the tree.
 *
 * Return: 1 if is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r = 0, l= 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left && tree->right)
		l = binary_tree_is_full(tree->left);
	else
		return (0);
	if (tree->left && tree->right)
		r = binary_tree_is_full(tree->right);
	else
		return (0);
	if (l == r)
		return (1);
	return (0);
}
