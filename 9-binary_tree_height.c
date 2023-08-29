#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (!tree)
		return (0);

	if (tree->right)
	{
		++r_height;
		r_height += binary_tree_height(tree->right);
	}
	
	if (tree->left)
	{
		++l_height;
		l_height += binary_tree_height(tree->left);
	}

	if (r_height >= l_height)
		return (r_height);
	else
		return (l_height);
}
