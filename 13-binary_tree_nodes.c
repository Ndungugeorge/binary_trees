#include "binary_trees.h"
/**
 * binary_tree_nodes - counts binary tree  nodes with at least one child
 * @tree: pointer to the root of the tree
 * Return: number of node else 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			node++;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}
