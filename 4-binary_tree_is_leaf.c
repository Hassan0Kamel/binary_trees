#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if ay tree.
 * @node: A pointer to
 * Return: If the node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
