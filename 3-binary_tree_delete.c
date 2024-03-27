#include "binary_trees.h"

/**
 * binary_tree_delete - func deletes a binary tree
 *
 * @tree: pointer to the root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		//delete the left subtree
		binary_tree_delete(tree->left);
		//delete right subtree
		binary_tree_delete(tree->right);
		free(tree);
	}
}
