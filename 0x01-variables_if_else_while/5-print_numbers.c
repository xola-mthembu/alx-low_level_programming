#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 0;
/* Print numbers from 0 to 9 */
while (number <= 9)
{
putchar(number + '0'); /* Convert number to character and print */
number++;
}
putchar('\n'); /* Print newline character */
return (0);
}
