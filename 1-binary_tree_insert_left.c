#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left-child another node
 *
 * @parent: points to parent node
 * @value:  new node
 *
 * Return: Return pointer to created node otherwise, NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnd;

	if (parent == NULL)
		return (NULL);

	newnd = binary_tree_node(parent, value);
	if (newnd)
	{
		if (parent->left)
		{
			newnd->left = parent->left;
			parent->left->parent = newnd;
		}
		parent->left = newnd;
	}
	return (newnd);
}
