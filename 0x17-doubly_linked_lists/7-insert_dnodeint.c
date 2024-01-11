#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the doubly linked list
 * @idx: index where the new node should be added, starting at 0
 * @n: integer value for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (temp != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->prev = temp->prev;
		new_node->next = temp;
		if (temp->prev != NULL)
			temp->prev->next = new_node;
		temp->prev = new_node;

		if (idx == 0)
			*h = new_node;
		return (new_node);
	}
	return (NULL);
}
