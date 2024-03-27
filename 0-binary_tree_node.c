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
	binary_tree_t *newnd;

	newnd = malloc(sizeof(binary_tree_t));
	if (newnd)
	{
		newnd->n = value;
		newnd->parent = parent;
		newnd->left = NULL;
		newnd->right = NULL;
	}
	return (newnd);
}
