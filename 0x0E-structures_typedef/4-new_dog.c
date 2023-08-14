#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog with given information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * Return: Pointer to the new dog_t structure,
 * or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
/* Allocate memory for the new dog_t structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* Allocate memory and make copies of name and owner */
name_copy = strdup(name);
owner_copy = strdup(owner);
if (name_copy == NULL || owner_copy == NULL)
{
free(new_dog);
free(name_copy);
free(owner_copy);
return (NULL);
}
/* Initialize the new dog_t structure */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
