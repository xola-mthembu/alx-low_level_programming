#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
char *ptr = str;
char *rot13_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_replacements = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; rot13_chars[j] != '\0'; j++)
{
if (str[i] == rot13_chars[j])
{
str[i] = rot13_replacements[j];
break;
}
}
}
return (ptr);
}
