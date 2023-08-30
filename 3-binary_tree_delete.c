#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a given binary tree
 *
 * @tree: binary tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->right)
			binary_tree_delete(tree->right);

		if (tree->left)
			binary_tree_delete(tree->left);

		free(tree);
	}
}
