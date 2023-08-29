#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int l_nodes = 0, r_nodes = 0;

	if (tree->right)
	{
		++r_nodes;
		r_nodes += binary_tree_height(tree->right);
	}
	
	if (tree->left)
	{
		++l_nodes;
		l_nodes += binary_tree_height(tree->left);
	}

	return (l_nodes + r_nodes + 1);
}
