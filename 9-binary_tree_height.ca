#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height
 * @tree: A pointer to the
 * Return: If tree is NULL,
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lol = 0, rol = 0;

		lol = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rol = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lol > rol) ? lol : rol);
	}
	return (0);
}
