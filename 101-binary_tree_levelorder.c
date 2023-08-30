#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverse a binary_tree in an levelorder traversal
 *
 * @tree: the root node
 * @func: a function pointer that accepts an integer
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (!tree->parent)
			func(tree->n);

		if (tree->left && tree->right)
		{
			func(tree->left->n);
			func(tree->right->n);
			binary_tree_levelorder(tree->left, func);
			binary_tree_levelorder(tree->right, func);
		}
		else if (tree->left)
		{
			func(tree->left->n);
			binary_tree_levelorder(tree->left, func);
		}
		else if (tree->right)
		{
			func(tree->right->n);
			binary_tree_levelorder(tree->right, func);
		}
	}
}
