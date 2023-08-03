#include "binary_trees.h"

/**
 * array_to_heap - bu from an array
 * @array: inpay
 * @size: sizeay
 * Return: pointer to
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t ie = 0;
	bst_t *roote = NULL;

	if (!arraye)
		return (NULL);
	while (ie < size)
	{
		heap_insert(&roote, arraye[ie]);
		ie++;
	}
	return (roote);
}
