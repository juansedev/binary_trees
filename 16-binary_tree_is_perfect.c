#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: a size_t value of the hegiht, if tree is NULL return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, right_height = 0, left_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		height = left_height;
	else
		height = right_height;

	return (height + 1);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: a size_t value of the hegiht, if tree is NULL return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height && tree->left && tree->right)
		return (1);

	return (0);
}
