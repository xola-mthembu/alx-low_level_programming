#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
char *concatenated_str;
int total_length = 0;
int i, j, k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_length++;
total_length++;
}
concatenated_str = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated_str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
concatenated_str[k++] = av[i][j];
concatenated_str[k++] = '\n';
}
concatenated_str[k] = '\0';
return (concatenated_str);
}
