#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary_tree in a postorder traversal
 *
 * @tree: the root node
 * @func: a function pointer that accepts an integer
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);

		if (tree->right)
			binary_tree_postorder(tree->right, func);

		func(tree->n);
	}
}
