#include "main.h"
/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 *
 * Description: This function prints an integer to the standard output.
 * If the integer is negative, it prints a minus sign before the number.
 * It does not use arrays or pointers.
 * It uses the _putchar function to print the characters.
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
print_number(num / 10);
_putchar((num % 10) + '0');
}
