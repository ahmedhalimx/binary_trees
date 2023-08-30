#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node
 *
 * @node: a binary tree node
 *
 * Return: the sibling node on success, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->right || !node->parent->left)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
