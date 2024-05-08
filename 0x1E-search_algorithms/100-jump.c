#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * min - Returns the minimum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The minimum number
 */
size_t min(size_t a, size_t b)
{
return (a < b ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is found, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
size_t step, prev, i;

if (array == NULL || size == 0)
return (-1);

step = sqrt(size);
prev = 0;

while (array[min(step, size) - 1] < value)
{
printf("Value checked array[%lu] = [%d]\n", step - 1, array[step - 1]);
prev = step;
step += sqrt(size);
if (prev >= size)
return (-1);
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
for (i = prev; i < min(step, size); i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return ((int)i);
}

return (-1);
}
