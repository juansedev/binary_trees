#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 *
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp = NULL;

	if (!new || parent == NULL)
	return (NULL);

	new->n = value;
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new;
		new->parent = parent;
		new->left = tmp;
		new->right = NULL;
		tmp->parent = new;
	}
	else
	{
		parent->left = new;
		new->parent =  parent;
		new->left = NULL;
		new->right = NULL;
	}
	return (new);
}

