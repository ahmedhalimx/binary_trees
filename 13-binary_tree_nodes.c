#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the number of nodes in a binary tree
 *
 * @tree: the root node
 *
 * Return: number of nodes in a tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int total_nodes = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		++total_nodes;
		total_nodes += binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left);
	}
	else if (tree->right)
	{
		++total_nodes;
		total_nodes += binary_tree_nodes(tree->right);
	}
	else if (tree->left)
	{
		++total_nodes;
		total_nodes += binary_tree_nodes(tree->left);
	}

	return (total_nodes);
}
