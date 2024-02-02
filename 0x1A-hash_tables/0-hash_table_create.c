#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array of the hash table
 * Return: A pointer to the newly created hash table
 *         If something went wrong, returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t)); /* Allocate memory for the table */
	if (ht == NULL)
		return (NULL);

	ht->size = size; /* Initialize size */
	ht->array = malloc(sizeof(hash_node_t *) * size); /* Allocate array */
	if (ht->array == NULL)
	{
		free(ht); /* Clean up if array allocation fails */
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL; /* Initialize pointers to NULL */

	return (ht);
}
