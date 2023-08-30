#include "binary_trees.h"
/**
 * binary_tree_size - Measures the tree's size
 *
 * @tree: the root node
 *
 * Return: the size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int total_nodes = 0;

	if (!tree)
		return (0);

	++total_nodes;

	if (tree->left && tree->right)
	{
		total_nodes += binary_tree_size(tree->right) +
			binary_tree_size(tree->left);
	}
	else if (tree->right)
	{
		total_nodes += binary_tree_size(tree->right);
	}
	else if (tree->left)
	{
		total_nodes += binary_tree_size(tree->left);
	}

	return (total_nodes);
}
