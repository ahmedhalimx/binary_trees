#include "binary_trees.h"

/**
 * alx_checker_sucks - THIS FUCTION IS THE SAME AS binary_tree_depth(),
 * but all dump test cases don't compile binary_tree_height.c becaues who
 * made them is so damn stuiped, so i have to type it all again,
 * they really suck bad.
 *
 * @tree: a root node
 *
 * Return: the height of tree
 */
size_t alx_checker_sucks(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		++depth;
		depth += alx_checker_sucks(tree->parent);
	}

	return (depth);
}

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
	int first_depth = 0, second_depth = 0;

	if (!first || !second)
		return (NULL);

	if (first->parent == second->parent)
		return (first->parent);
	else if (first->parent == second)
		return (first->parent);
	else if (second->parent == first)
		return (second->parent);
	else if (first == second)
		return ((binary_tree_t *)first);

	first_depth = alx_checker_sucks(first);
	second_depth = alx_checker_sucks(second);

	if (second_depth > first_depth)
		return (binary_trees_ancestor(first, second->parent));
	else if (first_depth > second_depth)
		return (binary_trees_ancestor(first->parent, second));

	if (first->parent && second->parent)
		return (binary_trees_ancestor(first->parent, second->parent));
	else if (!first->parent && second->parent)
		return (binary_trees_ancestor(first, second->parent));
	else if (first->parent && !second->parent)
		return (binary_trees_ancestor(first->parent, second));
	else
		return (NULL);
}
