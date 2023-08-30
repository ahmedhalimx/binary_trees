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
	int l_nodes = 0, r_nodes = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		++r_nodes;
		r_nodes += binary_tree_height(tree->right);
		l_nodes += binary_tree_height(tree->left);
	}
	else if (tree->right)
	{
		++r_nodes;
		r_nodes += binary_tree_height(tree->right);
	}
	else if (tree->left)
	{
		++l_nodes;
		l_nodes += binary_tree_height(tree->left);
	}

	return (l_nodes + r_nodes);
}
