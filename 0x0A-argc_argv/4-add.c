#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * is_positive_number - Check if a string is a positive number.
 * @str: The string to check.
 * Return: true if the string is a positive number, false otherwise.
 */
bool is_positive_number(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
return (false);
}
return (true);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
/* Check if the program receives numbers to add */
if (argc < 2)
{
printf("0\n");
return (0);
}
/* Add the positive numbers */
for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
/* Print the sum of positive numbers */
printf("%d\n", sum);
return (0);
}
