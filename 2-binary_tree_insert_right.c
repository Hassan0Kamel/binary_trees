#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a
 * @parent: A point
 * @value: The val
 * Return: If parent is N
 * Description: If parent already has
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);

	newn = binary_tree_node(parent, value);
	if (newn == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newn->right = parent->right;
		parent->right->parent = newn;
	}
	parent->right = newn;

	return (newn);
}
