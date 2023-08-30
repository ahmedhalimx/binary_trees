#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: the root node
 *
 * Return: the balance factor of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left_subtree_height = -1, right_subtree_height = -1;

	if (tree->left)
		left_subtree_height = binary_tree_height(tree->left);

	if (tree->right)
		right_subtree_height = binary_tree_height(tree->right);

	return (left_subtree_height - right_subtree_height);
}
