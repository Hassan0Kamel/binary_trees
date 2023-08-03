#include "binary_trees.h"

/**
 * binary_tree_node - Createode.
 * @parent: A pointeeate.
 * @value: The value to pu
 * Return: If an error
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	newn = malloc(sizeof(binary_tree_t));
	if (newn == NULL)
		return (NULL);

	newn->n = value;
	newn->parent = parent;
	newn->left = NULL;
	newn->right = NULL;

	return (newn);
}
