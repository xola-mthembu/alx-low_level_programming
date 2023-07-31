#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c) /* Check the null terminator */
return (s);
return (NULL);
}
