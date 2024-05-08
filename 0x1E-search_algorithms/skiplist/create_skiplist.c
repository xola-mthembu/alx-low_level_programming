#include "../search_algos.h"
#include <stdlib.h>
#include <math.h>

/**
 * create_skiplist_node - Creates a new skip list node
 * @value: The value to store in the new node
 * @index: Index of the node in the skip list
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
skiplist_t *create_skiplist_node(int value, size_t index)
{
	skiplist_t *node = malloc(sizeof(skiplist_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->index = index;
	node->next = NULL;
	node->express = NULL;

	return (node);
}

/**
 * setup_express_lanes - Sets up express lanes in the skip list
 * @head: Pointer to the head of the skip list
 * @step: Step size between express lanes
 */
void setup_express_lanes(skiplist_t *head, size_t step)
{
	size_t i = 0;
	skiplist_t *node = head, *express = head;

	while (node != NULL)
	{
		if (i % step == 0)
		{
			express->express = node;
			express = node;
		}
		i++;
		node = node->next;
	}
}

/**
 * create_skiplist - Creates a sorted skip list from an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 *
 * Return: Pointer to the head of the skip list
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *head = NULL, *node = NULL, *prev = NULL;
	size_t i, step;

	if (array == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	head = create_skiplist_node(array[0], 0);
	if (head == NULL)
		return (NULL);

	prev = head;
	for (i = 1; i < size; i++)
	{
		node = create_skiplist_node(array[i], i);
		if (node == NULL)
		{
			free_skiplist(head);
			return (NULL);
		}
		prev->next = node;
		prev = node;
	}

	setup_express_lanes(head, step);

	return (head);
}
