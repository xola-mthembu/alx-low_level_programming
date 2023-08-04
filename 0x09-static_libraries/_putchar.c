/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
#include <unistd.h>
#include "main.h"
int _putchar(char c)
{
return (write(1, &c, 1));
}
