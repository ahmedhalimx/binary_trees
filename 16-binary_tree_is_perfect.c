#include "binary_trees.h"

/**
 * alx_checker_sucks - a function that is identical to binary_tree_height,
 * but all test cases doesn't compile binary_tree_height.c becaues they are
 * stuipd, so i have to typed it all again, they really suck bad.
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
		r_height += binary_tree_height(tree->right);
	}

	if (tree->left)
	{
		++l_height;
		l_height += binary_tree_height(tree->left);
	}

	if (r_height >= l_height)
		return (r_height);
	else
		return (l_height);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: the root node
 *
 * Return: 1 if tree is a perfect binary tree, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_node = 0, r_node = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		int r_height = binary_tree_height(tree->right);
		int l_height = binary_tree_height(tree->left);

		if (r_height != l_height)
			return (0);

		r_node = binary_tree_is_perfect(tree->right);
		l_node = binary_tree_is_perfect(tree->left);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	if (l_node == 1 || r_node == 1)
		if (l_node == r_node)
			return (1);

	return (0);
}
