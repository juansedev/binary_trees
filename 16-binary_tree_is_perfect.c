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
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to root of the tree.
 *
 * Return: 1 if is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
	}
	if (l == r && l == 1)
		return (1);
	return (0);
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
	printf("left %d\n right %d\n", left_height, right_height);

	if (left_height == right_height && tree->left && tree->right)
	{
		if (binary_tree_is_full(tree))
			return (1);
	}

	return (0);
}
