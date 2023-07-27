#include <stdio.h>
#include <stdlib.h>
/**
 * infinite_add - Adds two numbers
 * @n1: First number as a string
 * @n2: Second number as a string
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, i, sum;
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);
r[size_r - 1] = '\0';
i = size_r - 2;
while (len1 > 0 || len2 > 0)
{
sum = carry;
if (len1 > 0)
sum += n1[--len1] - '0';
if (len2 > 0)
sum += n2[--len2] - '0';
carry = sum / 10;
r[i--] = sum % 10 + '0';
}
if (carry)
{
if (i < 0)
return (0);
r[i] = carry + '0';
}
return (r + i + 1);
}
