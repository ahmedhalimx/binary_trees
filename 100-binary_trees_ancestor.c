#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: first binary tree node
 * @second: second binary tree node
 *
 * Return: the ancestor node on success, NULL on failure
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first->parent == second)
		return (first->parent);

	if (first == second)
		return (first->parent);

	if (second->parent == first || second->parent == first->parent)
		return (second->parent);

	if (first->parent && second->parent)
		return (binary_trees_ancestor(first->parent, second->parent));
	else if (!first->parent)
		return (binary_trees_ancestor(first, second->parent));
	else
		return (binary_trees_ancestor(first->parent, second));
}
