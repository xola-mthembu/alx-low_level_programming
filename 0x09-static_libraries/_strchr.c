#include <stddef.h>
#include "main.h"
/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to be found.
 *
 * Return: Pointer to the first occurrence of the character in the string, or
 * NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s); /* Found the character, return the pointer to it */
}
s++;
}
/* If the character is not found, return NULL */
if (*s == c)
{
return (s);
}
return (NULL);
}
