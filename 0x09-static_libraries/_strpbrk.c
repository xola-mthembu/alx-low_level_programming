#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of characters.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: Pointer to the first occurrence of any character from accept
 * in the string s, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i); /* Return the pointer to the first match in s */
}
}
}
return (NULL); /* Return NULL if no match is found */
}
