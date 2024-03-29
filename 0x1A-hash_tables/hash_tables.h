#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h> /* For dynamic memory allocation */
#include <stdio.h>  /* For input and output functions */
#include <string.h> /* For string manipulation functions */

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 *       The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 *         because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Prototype for creating a new hash table */
hash_table_t *hash_table_create(unsigned long int size);

/* Prototype for the djb2 hash function */
unsigned long int hash_djb2(const unsigned char *str);

/* Prototype for calculating the index of a key */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/* Prototype for adding or updating an element in the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* Prototype for adding or updating an element in the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/* Prototype for retrieving a value associated with a key */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* Prototype for retrieving a value associated with a key */
char *hash_table_get(const hash_table_t *ht, const char *key);

/* Prototype for printing a hash table */
void hash_table_print(const hash_table_t *ht);

/* Prototype for printing a hash table */
void hash_table_print(const hash_table_t *ht);

/* Prototype for deleting a hash table */
void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLES_H */
