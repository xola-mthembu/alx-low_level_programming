#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the address of the head node of the list.
 * @idx: Index where the new node should be inserted.
 * @n: Value of the data (n) of the new node.
 *
 * Return: Pointer to the address of the new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
listint_t *current = *head;
listint_t *new_node;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while (current != NULL)
{
if (count == idx - 1)
{
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
current = current->next;
count++;
}
free(new_node);
return (NULL);
}
