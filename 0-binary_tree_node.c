#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: Parent node for the newly created node
 * @value: new_node's value
 *
 * Return: On success a pointer to the new_node, NULL on faliure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
