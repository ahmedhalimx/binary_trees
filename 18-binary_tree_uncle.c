#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node
 *
 * @node: a binary tree node
 *
 * Return: the uncle node on success, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
