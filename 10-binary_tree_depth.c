#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int depth = 0;

	if (tree->parent)
	{
		++depth;
		depth += binary_tree_depth(tree->parent);
	}

	return (depth);
}
