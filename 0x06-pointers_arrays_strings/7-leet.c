#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_replacements = "4433007711";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
str[i] = leet_replacements[j];
}
}
return (ptr);
}
