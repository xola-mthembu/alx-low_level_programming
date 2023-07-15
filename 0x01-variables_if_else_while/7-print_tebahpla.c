#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter = 'z';
/* Print alphabet in reverse */
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n'); /* Print newline character */
return (0);
}
