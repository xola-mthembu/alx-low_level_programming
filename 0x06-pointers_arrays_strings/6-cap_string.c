#include "main.h"
#include <stdio.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
int i;
char prev_char = '\0';
for (i = 0; str[i] != '\0'; i++)
{
if ((prev_char == ' ' || prev_char == '\t' || prev_char == '\n' ||
prev_char == ',' || prev_char == ';' || prev_char == '.' ||
prev_char == '!' || prev_char == '?' || prev_char == '"' ||
prev_char == '(' || prev_char == ')' || prev_char == '{' ||
prev_char == '}' || prev_char == '\0') &&
(str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
}
prev_char = str[i];
}
return (str);
}
