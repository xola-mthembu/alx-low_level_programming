#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
int current_number;
for (current_number = 1; current_number <= 100; current_number++)
{
if (current_number % 3 == 0 && current_number % 5 != 0)
{
printf(" Fizz");
}
else if (current_number % 5 == 0 && current_number % 3 != 0)
{
printf(" Buzz");
}
else if (current_number % 3 == 0 && current_number % 5 == 0)
{
printf(" FizzBuzz");
}
else if (current_number == 1)
{
printf("%d", current_number);
}
else
{
printf(" %d", current_number);
}
}
printf("\n");
return (0);
}
