#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to be duplicated
 * Return: Pointer to the duplicated string or NULL if error
 */
char *_strdup(char *str)
{
size_t len;
char *dup;
if (!str)
return (NULL);
len = strlen(str);
dup = malloc(len + 1);
if (!dup)
return (NULL);
strcpy(dup, str);
return (dup);
}
/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo = malloc(sizeof(dog_t));
if (!doggo)
return (NULL);
doggo->name = _strdup(name);
if (!doggo->name)
{
free(doggo);
return (NULL);
}
doggo->owner = _strdup(owner);
if (!doggo->owner)
{
free(doggo->name);
free(doggo);
return (NULL);
}
doggo->age = age;
return (doggo);
}
