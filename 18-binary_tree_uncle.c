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
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

