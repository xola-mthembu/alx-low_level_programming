#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Returns the sum of all data (n) of a listint_t list.
 * @head: Pointer to the head node of the list.
 *
 * Return: Sum of all data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
