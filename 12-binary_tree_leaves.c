#include "binary_trees.h"

/**
 * binary_tree_leaves - func counts binary tree leaves
 *
 * @tree: pointer to root node
 *
 * Return: reurn 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t left = binary_tree_leaves(tree->left);
	size_t right = binary_tree_leaves(tree->right);

	return (left + right);
}
