#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int n;
int a[5];
a[2] = 1024;
*(a + 5) = 98; /* Add this line */
n = *(a + 5);
printf("a[2] = %d\n", n);
return (0);
}
