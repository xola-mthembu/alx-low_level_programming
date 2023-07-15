#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;
while (number <= 9)
{
putchar(number + '0');
/* Add comma and space if not the last number */
if (number != 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
number++;
}
putchar('\n'); /* Print newline character */
return (0);
}
