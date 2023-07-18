#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, n;
long int prev, current, next;
prev = 1;   /* First Fibonacci number */
current = 2;    /* Second Fibonacci number */
printf("%ld, %ld", prev, current); /* Print the first two Fibonacci numbers */
for (i = 3; i <= 50; i++)
{
next = prev + current; /* Calculate the next Fibonacci number */
printf(", %ld", next); /* Print the next Fibonacci number */
prev = current; /* Update the previous Fibonacci number */
current = next; /* Update the current Fibonacci number */
}
printf("\n"); /* Print a new line */
return (0);
}
