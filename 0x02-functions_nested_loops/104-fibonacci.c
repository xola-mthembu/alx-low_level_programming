#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, n1 = 1, n2 = 2, next;
printf("1, 2, ");
for (i = 3; i <= 98; i++)
{
next = n1 + n2;
printf("%d, ", next);
n1 = n2;
n2 = next;
}
printf("\n");
return (0);
}
