#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t node_count = 0;
listint_t *current;
if (h == NULL || *h == NULL)
return (0);
current = *h;
while (current != NULL)
{
node_count++;
if (current <= current->next)
{
*h = NULL;
return (node_count);
}
current = current->next;
free(*h);
*h = current;
}
*h = NULL;
return (node_count);
}
