#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, otherwise return 0.
 */
int is_prime_number(int n)
{
/* Base case: Negative numbers, 0, and 1 are not prime */
if (n <= 1)
return (0);
/* Declare the variable i here before using it in the loop */
int i;
/* Check for divisibility up to the square root of n */
for (i = 2; i * i <= n; i++)
{
if (n % i == 0)
return (0); /* Not prime if divisible */
}
return (1); /* Prime if not divisible up to sqrt(n) */
}
