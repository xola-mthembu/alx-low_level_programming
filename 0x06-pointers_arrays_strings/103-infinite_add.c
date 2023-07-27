#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
int tmp, i;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
/**
 * infinite_add - Adds two numbers
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer that will store the result
 * @size_r: The size of the buffer
 *
 * Return: The pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, sum, carry = 0;
int i, j;
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
if (len1 >= size_r || len2 >= size_r)
return (0);
len1--;
len2--;
r[size_r - 1] = '\0';
for (i = size_r - 2; len1 >= 0 || len2 >= 0 || carry; i--)
{
sum = carry;
if (len1 >= 0)
sum += n1[len1--] - '0';
if (len2 >= 0)
sum += n2[len2--] - '0';
carry = sum / 10;
r[i] = (sum % 10) + '0';
}
if (i >= 0)
return (r + i + 1);
return (r);
}
