#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concats s1 and s2.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: If concat fails or s1 or s2 is NULL, returns NULL.
 *         Otherwise, returns ptr to new concat string.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *concatenated;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (j = 0; j < len2; j++)
concatenated[i + j] = s2[j];
concatenated[i + j] = '\0';
return (concatenated);
}
