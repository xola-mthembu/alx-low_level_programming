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
char *p = str;
char *from = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *to = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; str[i]; i++)
{
for (j = 0; from[j]; j++)
{
if (str[i] == from[j])
{
str[i] = to[j];
break;
}
}
}
return (p);
}
