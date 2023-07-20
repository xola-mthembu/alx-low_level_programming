#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
long int number;
long int max_prime_factor;
long int divisor;
number = 612852475143;
max_prime_factor = -1;
while (number % 2 == 0)
{
max_prime_factor = 2;
number /= 2;
}
for (divisor = 3; divisor <= sqrt(number); divisor = divisor + 2)
{
while (number % divisor == 0)
{
max_prime_factor = divisor;
number = number / divisor;
}
}
if (number > 2)
max_prime_factor = number;
printf("%ld\n", max_prime_factor);
return (0);
}
