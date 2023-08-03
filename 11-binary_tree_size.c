#include "binary_trees.h"

/**
 * binary_tree_size - Measures the.
 * @tree: A pointer to the
 * Return: The
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizee = 0;

	if (tree)
	{
		sizee += 1;
		sizee += binary_tree_size(tree->left);
		sizee += binary_tree_size(tree->right);
	}
	return (sizee);
}
