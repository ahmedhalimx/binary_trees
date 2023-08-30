#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new_node,
 * as the right child of another new_node
 *
 * @parent: Parent new_node to which the new_node will be inserted right to
 * @value: new_node's value
 *
 * Return: Poniter to the new_node on success, NULL otherwise
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	if (!parent->right)
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->left = new_node->right = NULL;
		new_node->n = value;
		return (new_node);
	}

	new_node->right = parent->right;
	parent->right->parent = new_node;
	parent->right = new_node;
	new_node->parent = parent;
	new_node->n = value;

	return (new_node);
}
