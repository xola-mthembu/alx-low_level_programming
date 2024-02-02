#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 algorithm.
 * @str: The string to hash.
 *
 * Description: Applies the djb2 algorithm on a string to produce a hash.
 * The algorithm is known for its good distribution and speed.
 * It iteratively hashes each character in the string.
 *
 * Return: The calculated hash as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
