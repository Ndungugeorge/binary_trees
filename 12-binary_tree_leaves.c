#include "binary_trees.h"

/**
 * binary_tree_leaves - func counts binary tree leaves
 *
 * @tree: pointer to a root
 *
 * Return: return 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t bt_leaves = 0;

	if (tree)
	{
		bt_leaves += !tree->left && !tree->right ? 1 : 0;
		bt_leaves += binary_tree_leaves(tree->left);
		bt_leaves += binary_tree_leaves(tree->right);
	}

	return (bt_leaves);
}
