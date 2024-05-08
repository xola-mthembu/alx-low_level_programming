#include "../search_algos.h"
#include <stdlib.h>

/**
 * free_skiplist - Frees a skip list
 * @list: Pointer to the head of the skip list
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *temp;

	while (list != NULL)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
