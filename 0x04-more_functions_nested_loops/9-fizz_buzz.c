#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - Prints FizzBuzz for multiples of 3 and 5, Fizz for multiples of 3.
 */
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0) /* Multiples of both 3 and 5 */
{
printf("FizzBuzz ");
}
else if (i % 3 == 0) /* Multiples of 3 */
{
printf("Fizz ");
}
else if (i % 5 == 0) /* Multiples of 5 */
{
printf("Buzz ");
}
else /* Other numbers */
{
printf("%d ", i);
}
}
printf("\n");
}
