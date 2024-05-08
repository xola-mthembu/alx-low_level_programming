#include "../search_algos.h"
#include <stdlib.h>

/**
 * create_list - Creates a singly linked list from an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 *
 * Return: Pointer to the head of the list
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *head, *node, *prev;
	size_t i;

	if (array == NULL || size == 0)
		return (NULL);

	head = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);

	head->n = array[0];
	head->index = 0;
	head->next = NULL;
	prev = head;

	for (i = 1; i < size; i++)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
		{
			free_list(head);
			return (NULL);
		}

		node->n = array[i];
		node->index = i;
		node->next = NULL;

		prev->next = node;
		prev = node;
	}

	return (head);
}
