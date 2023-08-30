#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary_tree in a preorder traversal
 *
 * @tree: the root node
 * @func: a function pointer that accepts an integer
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		if (tree->left)
			binary_tree_preorder(tree->left, func);

		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
