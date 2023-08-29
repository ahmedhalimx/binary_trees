#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int l_leafs = 0, r_leafs = 0;

	if (tree->right)
		r_leafs += binary_tree_height(tree->right);
	
	if (tree->left)
		l_leafs += binary_tree_height(tree->left);
	
	if (!(tree->left && tree->right))
		return (1);

	return (l_leafs + r_leafs);
}
