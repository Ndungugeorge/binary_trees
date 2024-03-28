#include "binary_trees.h"

/**
 * binary_tree_size - func measures size of binary_tree
 *
 * @tree: pointer to root node
 *
 * Return: reurn 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_subtree_size = binary_tree_size(tree->left);
	size_t right_subtree_size = binary_tree_size(tree->right);

	return (left_subtree_size + right_subtree_size);
}
