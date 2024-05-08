
#include "../search_algos.h"
#include <stdlib.h>

/**
 * free_list - Frees a singly linked list
 * @list: Pointer to the head of the list
 */
void free_list(listint_t *list)
{
	listint_t *temp;

	while (list != NULL)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
