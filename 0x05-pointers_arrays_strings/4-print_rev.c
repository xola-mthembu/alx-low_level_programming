#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;
char *end = s;
while (*end != '\0')
{
length++;
end++;
}
end--;
while (length > 0)
{
_putchar(*end);
end--;
length--;
}
_putchar('\n');
}
