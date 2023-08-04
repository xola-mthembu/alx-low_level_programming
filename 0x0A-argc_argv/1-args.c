#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments (unused).
 * Return: Always 0 (success).
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
int count = argc - 1;
/* Print the number of arguments */
printf("%d\n", count);
return (0);
}
