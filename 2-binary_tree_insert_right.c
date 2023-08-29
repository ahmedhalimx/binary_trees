#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	if (!parent->right)
	{
		parent->right = node;
		node->parent = parent;
		node->left = node->right = NULL;
		node->n = value;
		return (node);
	}

	node->right = parent->right;
	parent->right->parent = node;
	parent->right = node;
	node->parent = parent;
	node->n = value;

	return (node);
}
