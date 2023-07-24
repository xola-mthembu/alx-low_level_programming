#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Generates random valid passwords
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int randomNumber;
int totalSum;
srand((unsigned int)(time(NULL)));
for (totalSum = 2772; totalSum >= 122; totalSum -= randomNumber)
{
randomNumber = (rand() % 94) + 33;
printf("%c", randomNumber);
}
printf("%c", totalSum);
return (0);
}
