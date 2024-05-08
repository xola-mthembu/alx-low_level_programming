#include "search_algos.h"
#include <stdio.h>

/**
 * print_subarray - Prints a subarray of integers
 * @array: The array to print
 * @left: Left boundary index
 * @right: Right boundary index
 */
void print_subarray(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * recursive_binary - Recursively searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @left: Left boundary index
 * @right: Right boundary index
 * @value: Value to search for
 *
 * Return: Index where value is found, or -1 if not found
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_subarray(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return ((int)mid);
		return (recursive_binary(array, left, mid, value));
	}
	else if (array[mid] > value)
		return (recursive_binary(array, left, mid - 1, value));
	else
		return (recursive_binary(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array using Advanced
 *                   Binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is found, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
