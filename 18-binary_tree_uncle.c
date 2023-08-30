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

	binary_tree_t *parent = node->parent;

	if (!parent || !parent->parent
			|| !parent->parent->right || !parent->parent->left)
		return (NULL);

	if (parent->parent->right == parent)
		return (parent->parent->left);
	else
		return (parent->parent->right);
}

