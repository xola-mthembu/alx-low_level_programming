#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list using
 *             Jump search algorithm
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t index = 0;
	listint_t *node = list;
	listint_t *prev = NULL;

	if (!list)
		return (NULL);

	while (node && node->index < size && node->n < value)
	{
		prev = node;
		index = node->index;
		while (node->next && node->index < index + step)
			node = node->next;
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, node->index);

	while (prev && prev->index <= node->index && prev->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
