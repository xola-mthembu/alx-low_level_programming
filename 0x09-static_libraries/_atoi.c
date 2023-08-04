/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
/* Handle the sign (+/-) */
if (s[0] == '-')
{
sign = -1;
i++;
}
else if (s[0] == '+')
{
i++;
}
/* Convert the string to integer */
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else
{
/* Stop converting when a non-digit character is encountered */
break;
}
i++;
}
return (result *sign);
}
