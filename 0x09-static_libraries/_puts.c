#include "main.h"
/**
 * _puts - Prints a string to the standard output followed by a newline.
 * @s: Pointer to the string to be printed.
 */
void _puts(char *s)
{
while (*s != '\0')
{
write(1, s, 1);
s++;
}
write(1, "\n", 1);
}
