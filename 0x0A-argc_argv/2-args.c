#include <stdio.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments (unused).
 * @argv: An array containing the command-line arguments.
 * Return: Always 0 (success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int i;
/* Print all arguments */
for (i = 0; argv[i] != NULL; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
