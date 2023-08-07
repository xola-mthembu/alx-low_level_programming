#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The input string to be duplicated.
 *
 * Return: If str is NULL or insufficient memory is available, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
unsigned int length = 0;
char *duplicate;
unsigned int i;
if (str == NULL)
return (NULL);
while (str[length])
length++;
duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
