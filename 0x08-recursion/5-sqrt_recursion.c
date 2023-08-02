#include "main.h"
#include <stdio.h>
/**
 * sqrt_helper - Finds the square root of a number using recursion.
 * @n: The number to find the square root of.
 * @i: The iterator to check for the square root.
 *
 * Return: The square root of n, or -1
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (sqrt_helper(n, 0));
}
