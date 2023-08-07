#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and init's with c.
 *
 * @size: Size of array to create.
 * @c: Char to init array with.
 *
 * Return: If size is 0 or malloc fails, returns NULL.
 * Otherwise, returns ptr to newly allocated array.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
