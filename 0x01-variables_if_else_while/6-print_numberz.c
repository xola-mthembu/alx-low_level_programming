#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;
while (number <= 9)
{
putchar(number++ + '0');
}
putchar('\n');
return (0);
}
