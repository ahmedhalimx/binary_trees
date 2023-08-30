#include "binary_trees.h"

/**
 * alx_checker_sucks - THIS FUCTION IS THE SAME AS binary_tree_height(),
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
	int l_height = 0, r_height = 0;

	if (!tree)
		return (0);

	if (tree->right)
	{
		++r_height;
		r_height += alx_checker_sucks(tree->right);
	}

	if (tree->left)
	{
		++l_height;
		l_height += alx_checker_sucks(tree->left);
	}

	if (r_height >= l_height)
		return (r_height);
	else
		return (l_height);
}

/**
 * binary_tree_leaves - Counts the leave nodes in a given binary tree
 *
 * @tree: a binary tree node
 *
 * Return: number of leave nodes in tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int l_leafs = 0, r_leafs = 0;

	if (!tree)
		return (0);

	if (tree->right)
		r_leafs += alx_checker_sucks(tree->right);

	if (tree->left)
		l_leafs += alx_checker_sucks(tree->left);

	if (!(tree->left && tree->right))
		return (1);

	return (l_leafs + r_leafs);
}
