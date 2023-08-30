#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new_node,
 * as the left child of another node
 *
 * @parent: Parent node to which the new_node will be inserted left to
 * @value: new_node's value
 *
 * Return: Poniter to the new_node on success, NULL otherwise
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	if (!parent->left)
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = new_node->right = NULL;
		new_node->n = value;
		return (new_node);
	}

	new_node->left = parent->left;
	parent->left->parent = new_node;
	parent->left = new_node;
	new_node->parent = parent;
	new_node->n = value;

	return (new_node);
}