#include "binary_trees.h"

/**
 * binary_tree_nodes - Counin a binary tree.
 * @tree: A pointer to the
 * Return: If tree is NULL,
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodess = 0;

	if (tree)
	{
		nodess += (tree->left || tree->right) ? 1 : 0;
		nodess += binary_tree_nodes(tree->left);
		nodess += binary_tree_nodes(tree->right);
	}
	return (nodess);
}
