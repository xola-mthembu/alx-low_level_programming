#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: The key to find the index for.
 * @size: The size of the array of the hash table.
 *
 * Description: This function uses the hash_djb2 function to generate a hash
 * from the key and then uses the modulus of the hash table size to get an
 * index within the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored in the array
 * of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
