#include "main.h"
/**
 * is_prime_helper - Helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The iterator to check for divisibility.
 *
 * Return: 1 if the number is prime, otherwise return 0.
 */
int is_prime_helper(int n, int i)
{
/* Base case: Negative numbers, 0, and 1 are not prime */
if (n <= 1)
return (0);
/* If i reaches the square root of n, the number is prime */
if (i * i > n)
return (1);
/* If n is divisible by i, it's not prime */
if (n % i == 0)
return (0);
/* Recursively check for divisibility with the next iterator */
return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, otherwise return 0.
 */
int is_prime_number(int n)
{
/* Call the helper function starting with i = 2 */
return (is_prime_helper(n, 2));
}
