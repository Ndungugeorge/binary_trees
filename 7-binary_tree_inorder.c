#include "binary_trees.h"

/**
 * binary_tree_inorder - funct that traverse the node using in-order traversal
 *
 * @tree: pointer to root node
 * @func: pointer to function to call
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return (0);
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
