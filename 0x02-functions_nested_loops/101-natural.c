#include <stdio.h>
int main(void)
{
int i, sum; /* Declare variables for iteration and sum */
sum = 0; /* Initialize sum to 0 */
/* Iterate over numbers below 1024 */
for (i = 0; i < 1024; i++) {
if (i % 3 == 0 || i % 5 == 0) {
sum += i; /* Add the number to the sum if it is a multiple of 3 or 5 */
}
}
printf("%d\n", sum); /* Print the sum */
return 0;
}

