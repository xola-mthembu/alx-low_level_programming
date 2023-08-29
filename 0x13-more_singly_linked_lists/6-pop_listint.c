#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the address of the head node of the list.
 *
 * Return: The data (n) stored in the deleted head node, or 0 if empty.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (*head == NULL)
return (0);
temp = *head;
*head = (*head)->next;
data = temp->n;
free(temp);
return (data);
}
