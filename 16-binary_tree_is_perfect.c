#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: the root node
 *
 * Return: 1 if tree is a perfect binary tree, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int l_node = 0, r_node = 0;

	if (tree->left && tree->right)
	{
		int r_height = binary_tree_height(tree->right);
		int l_height = binary_tree_height(tree->left);

		if (r_height != l_height)
			return (0);

		r_node = binary_tree_is_perfect(tree->right);
		l_node = binary_tree_is_perfect(tree->left);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	if (l_node == 1 || r_node == 1)
		if (l_node == r_node)
			return (1);

	return (0);
}
