#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t node_count = 0;
while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
node_count++;
if (current <= current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
break;
}
current = current->next;
}
return (node_count);
}
