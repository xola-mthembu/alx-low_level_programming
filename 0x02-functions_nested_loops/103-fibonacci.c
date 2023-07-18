#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int prev, current, next, sum;
prev = 1;   /* First Fibonacci number */
current = 2;    /* Second Fibonacci number */
sum = 2;    /* Initialize the sum with the second Fibonacci number */
while (current <= 4000000)
{
next = prev + current; /* Calculate the next Fibonacci number */
if (next % 2 == 0)
sum += next; /* Add the even-valued Fibonacci number to the sum */
prev = current; /* Update the previous Fibonacci number */
current = next; /* Update the current Fibonacci number */
}
printf("%ld\n", sum); /* Print the sum of even-valued terms */
return (0);
}
