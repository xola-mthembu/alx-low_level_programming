#include "main.h"
#include <string.h>
/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = strlen(str);
int start;
if (length % 2 == 0)
start = length / 2;
else
start = (length + 1) / 2;
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}
_putchar('\n');
}
