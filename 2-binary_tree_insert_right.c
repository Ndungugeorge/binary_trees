#include "binary_trees.h"

/**
 * binary_tree_insert_right - func inserts node as right-child of another node
 *
 * @parent: pointer to parent node
 * @value: value new node
 *
 * Return: pointer to created node else Null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnd;

	if (parent == NULL)
		return (NULL);

	newnd = binary_tree_node(parent, value);
	if (newnd)
	{
		if (parent->right)
		{
			newnd->right = parent->right;
			parent->right->parent = newnd;
		}
		parent->right = newnd;
	}
	return (newnd);
}
