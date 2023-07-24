#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign = sign * -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > (result * 10 + (s[i] - '0')))
return (0);
result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign);
}
