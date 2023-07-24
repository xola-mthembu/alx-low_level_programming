#include "main.h"
#include <limits.h>
/**
 * _atoi - Convert a string to an integer.
 * @str: The string to be converted.
 *
 * Return: The converted integer, or 0 if no conversion could be performed.
 */
int _atoi(char *str)
{
unsigned int number = 0;
int sign = 1;
while (*str)
{
if (*str == '-')
sign *= -1;
else if (*str >= '0' && *str <= '9')
{
while (*str >= '0' && *str <= '9')
{
if (number > (unsigned int)INT_MAX / 10 ||
(number == (unsigned int)INT_MAX / 10 && (*str - '0') > INT_MAX % 10))
{
if (sign > 0)
return (INT_MAX);
else
return (INT_MIN);
}
number = number * 10 + (*str - '0');
str++;
}
break;
}
str++;
}
return (sign *number);
}
