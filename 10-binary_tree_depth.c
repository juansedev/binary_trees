#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: a size_t value of the hegiht, if tree is NULL return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		deep++;
		tree = tree->parent;
	}

	return (deep);
}