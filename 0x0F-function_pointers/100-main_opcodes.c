#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes of a function
 * @ptr: Pointer to the function
 * @n: Number of bytes to print
 *
 * Return: Nothing
 */
void print_opcodes(char *ptr, int n);
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 if incorrect arguments, 2 if negative bytes
 */
int main(int argc, char *argv[])
{
int num_bytes;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
 /* Print the opcodes of the main function */
print_opcodes((char *)main, num_bytes);
return (0);
}
/**
 * print_opcodes - Prints the opcodes of a function
 * @ptr: Pointer to the function
 * @n: Number of bytes to print
 *
 * Return: Nothing
 */
void print_opcodes(char *ptr, int n)
{
int i;
for (i = 0; i < n - 1; i++)
printf("%02hhx ", ptr[i]);
printf("%02hhx\n", ptr[i]);
}
