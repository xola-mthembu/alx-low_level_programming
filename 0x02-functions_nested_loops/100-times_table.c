#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: Number of times table (0 to 15)
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = i * j;
if (j != 0)
{
printf(",   ");
if (product < 100)
printf(" ");
if (product < 10)
printf(" ");
}
printf("%d", product);
}
printf("\n");
}
}
