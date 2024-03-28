#include "binary_trees.h"

/**
 * binary_tree_size - func measures binary tree size
 *
 * @tree: pointer to root node
 *
 * Return: return 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_bt = 0;

	if (tree)
	{
		size_bt++;
		size_bt += binary_tree_size(tree->left);
		size_bt += binary_tree_size(tree->right);
	}

	return (size_bt);
}
