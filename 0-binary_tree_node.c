#include "binary_trees.h"

/**
 * binary_tree_node - func to create binary tree node.
 *
 * @parent: pointer to parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to new node otherwise, NULL or failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnw;

	newnw = malloc(sizeof(binary_tree_t));
	if (newnw)
	{
		newnw->n = value;
		newnw->parent = parent;
		newnw->left = NULL;
		newnw->right = NULL;
	}
	return (newnw);
}
