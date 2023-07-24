#include "main.h"
/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the string to be printed.
 *
 * Return: void
 */
void puts2(char *str)
{
int index = 0;
while (str[index] != '\0')
{
_putchar(str[index]); /* Print the character at the current index */
index++;
if (str[index] != '\0')
index++;
}
_putchar('\n');
}
