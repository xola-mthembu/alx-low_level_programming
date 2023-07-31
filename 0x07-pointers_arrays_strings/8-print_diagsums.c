#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the 2D array (square matrix).
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
/* Calculate the sum of elements on the main diagonal */
for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i];
}
/* Calculate the sum of elements on the secondary diagonal */
for (i = 0; i < size; i++)
{
sum2 += a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", sum1, sum2);
}
