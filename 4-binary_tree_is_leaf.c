#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a given node is a leaf
 *
 * @node: a binary_tree node to be checked
 *
 * Return: 1 on Success, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
