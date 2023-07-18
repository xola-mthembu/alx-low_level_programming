#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int fib1, fib2, fib3;
fib1 = 1; /* First Fibonacci number */
fib2 = 2; /* Second Fibonacci number */
printf("%lu, %lu", fib1, fib2); /* Print the first two Fibonacci numbers */
for (i = 3; i <= 98; i++)
{
fib3 = fib1 + fib2; /* Calculate the next Fibonacci number */
printf(", %lu", fib3); /* Print the Fibonacci number */
fib1 = fib2; /* Update the previous Fibonacci number */
fib2 = fib3; /* Update the current Fibonacci number */
}
printf("\n");
return (0);
}
