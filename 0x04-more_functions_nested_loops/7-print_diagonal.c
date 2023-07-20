#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed
 *
 * The diagonal should end with a \n.
 * If n is 0 or less, the function should only print a \n.
 */
void print_diagonal(int n)
{
int spaces, i;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
for (spaces = 0; spaces < i; spaces++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
