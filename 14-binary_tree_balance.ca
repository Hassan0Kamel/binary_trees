#include "binary_trees.h"

/**
 * binary_tree_balance - Measuresee.
 * @tree: A pointer to the r
 * Return: If tree is NUr.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measuree.
 * @tree: A pointer to the root node
 * Return: If tree is NUight.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lol = 0, rol = 0;

		ol = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rol = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lol > rol) ? lol : rol);
	}
	return (0);
}
