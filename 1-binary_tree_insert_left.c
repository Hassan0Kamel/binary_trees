#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node
 * @parent: A point in.
 * @value: The value to
 * Return: If paren
 * Description: If pare
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);

	newn = binary_tree_node(parent, value);
	if (newn == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newn->left = parent->left;
		parent->left->parent = newn;
	}
	parent->left = newn;

	return (newn);
}
