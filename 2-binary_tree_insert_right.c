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
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
