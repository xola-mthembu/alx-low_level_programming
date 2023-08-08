#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int i, word_count = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
word_count++;
}
return (word_count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if fails.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, word_count;
if (str == NULL || str[0] == '\0')
return (NULL);
word_count = count_words(str);
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
while (*str)
{
if (*str != ' ')
{
len = 0;
while (str[len] && str[len] != ' ')
len++;
words[i] = (char *)malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
words[i][k] = *str++;
words[i][k] = '\0';
i++;
}
else
{
str++;
}
}
words[i] = NULL;
return (words);
}
