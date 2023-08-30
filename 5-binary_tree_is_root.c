#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root node
 *
 * @node: a binary_tree node to be checked
 *
 * Return: 1 on Success, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);
	else
		return (0);
}
