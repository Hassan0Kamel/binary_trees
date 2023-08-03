#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the
 * @tree: A pointer to the root node
 * Return: The nu
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavese = 0;

	if (tree)
	{
		leavese += (!tree->left && !tree->right) ? 1 : 0;
		leavese += binary_tree_leaves(tree->left);
		leavese += binary_tree_leaves(tree->right);
	}
	return (leavese);
}
