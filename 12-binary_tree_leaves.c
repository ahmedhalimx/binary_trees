#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leave nodes in a given binary tree
 *
 * @tree: a binary tree node
 *
 * Return: number of leave nodes in tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int total_leafs = 0;

	if (!tree)
		return (0);

	if (tree->right)
		total_leafs += binary_tree_leaves(tree->right);

	if (tree->left)
		total_leafs += binary_tree_leaves(tree->left);

	if (!tree->left && !tree->right)
		return (1);

	return (total_leafs);
}
