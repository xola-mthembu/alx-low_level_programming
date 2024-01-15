#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @s: The string to print
 *
 * Return: Nothing.
 */
void _puts(char *s)
{
	int index = 0;

	while (s[index])
	{
		_putchar(s[index]);
		index++;
	}
	_putchar('\n');
}
