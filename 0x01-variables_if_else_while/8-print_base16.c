#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
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
/* Print letters a to f */
char letter = 'a';
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n'); /* Print newline character */
return (0);
}
