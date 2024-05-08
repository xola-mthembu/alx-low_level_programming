#include "search_algos.h"
#include <stdio.h>

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
 * binary_search_ex - Searches for a value in sorted array using Binary search
 * @array: Pointer to the first element of the array
 * @left: Left boundary index
 * @right: Right boundary index
 * @value: Value to search for
 *
 * Return: Index where value is found, or -1 if not found
 */
int binary_search_ex(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid <= right; mid++)
		{
			printf("%d", array[mid]);
			if (mid != right)
				printf(", ");
			else
				printf("\n");
		}

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      Exponential search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is found, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       bound / 2, min(bound, size - 1));
	return (binary_search_ex(array, bound / 2, min(bound, size - 1), value));
}
