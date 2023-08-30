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
 * binary_tree_size - Measures the tree's size
 *
 * @tree: the root node
 *
 * Return: the size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int l_nodes = 0, r_nodes = 0;

	if (!tree)
		return (0);

	if (tree->right)
	{
		++r_nodes;
		r_nodes += alx_checker_sucks(tree->right);
	}

	if (tree->left)
	{
		++l_nodes;
		l_nodes += alx_checker_sucks(tree->left);
	}

	return (l_nodes + r_nodes + 1);
}
