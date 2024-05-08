#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *express = NULL;

	if (!list)
		return (NULL);

	express = node->express;
	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       express->index, express->n);
		if (express->n >= value)
			break;
		node = express;
		express = express->express;
	}

	if (express == NULL)
	{
		express = node;
		while (express->next != NULL)
			express = express->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       node->index, express->index);

	while (node != NULL && node->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}
