#include "../search_algos.h"
#include <stdio.h>

/**
 * print_skiplist - Prints all the elements of a skip list
 * @list: Pointer to the head of the skip list
 */
void print_skiplist(const skiplist_t *list)
{
	printf("List :\n");
	while (list != NULL)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}

/**
 * print_skiplist_express - Prints all the elements of the express lane
 * @list: Pointer to the head of the skip list
 */
void print_skiplist_express(const skiplist_t *list)
{
	const skiplist_t *express = list;

	printf("Express lane :\n");
	while (express != NULL)
	{
		printf("Index[%lu] = [%d]\n", express->index, express->n);
		express = express->express;
	}
	printf("\n");
}
