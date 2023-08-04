#include <stddef.h>
#include "main.h"
/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: Pointer to the larger string to be searched.
 * @needle: Pointer to the substring to be found.
 *
 * Return: Pointer to the first occurrence of the substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (NULL);
}
