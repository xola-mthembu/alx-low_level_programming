#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: The pointer to the dog_t structure to be freed
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
