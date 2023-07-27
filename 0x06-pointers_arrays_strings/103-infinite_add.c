#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int len1 = 0, len2 = 0;
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
if (len1 >= size_r || len2 >= size_r)
return (0);
len1--;
len2--;
r[size_r] = '\0';
while (len1 >= 0 || len2 >= 0 || carry)
{
if (len1 >= 0)
carry += n1[len1--] - '0';
if (len2 >= 0)
carry += n2[len2--] - '0';
r[--size_r] = (carry % 10) + '0';
carry /= 10;
}
if (size_r > 0)
return (r + size_r);
return (0);
}
