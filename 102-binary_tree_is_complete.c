#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 *
 * @tree: the root node
 *
 * Return: 1 if tree is a full binary tree, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int l_subtree = 0, r_subtree = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		r_subtree = binary_tree_is_complete(tree->right);
		l_subtree = binary_tree_is_complete(tree->left);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else if (tree->parent->left == tree)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	if (l_subtree == 1 || r_subtree == 1)
		if (l_subtree == r_subtree)
			return (1);

	return (0);
}
