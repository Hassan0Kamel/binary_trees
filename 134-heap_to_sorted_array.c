#include "binary_trees.h"
#include<stdlib.h>
/**
 * heap_to_sorted_array - converts a B
 * @heap: pointer tort
 * @size: address ay
 * Return: so
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *arraye;
	int extracte, ie = 0;
	size_t heap_sizee;

	if (!heap)
		return (NULL);
	heap_sizee = binary_tree_size(heap);
	*size = heap_sizee;
	arraye = malloc(heap_sizee * sizeof(int));
	if (!arraye)
		return (NULL);
	while (heap)
	{
		extracte = heap_extracte(&heap);
		array[ie] = extracte;
		ie++;
	}
	return (arraye);
}
