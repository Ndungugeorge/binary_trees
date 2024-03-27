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
	binary_tree_t *newnw;

	if (parent == NULL)
		return (NULL);

	newnw = binary_tree_node(parent, value);
	if (newnw)
	{
		if (parent->left)
		{
			newnw->left = parent->left;
			parent->left->parent = newnw;
		}
		parent->left = newnw;
	}
	return (newnw);
}
