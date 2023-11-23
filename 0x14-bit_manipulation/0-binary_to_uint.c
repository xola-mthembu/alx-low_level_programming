#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is an invalid character
 * in the string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	/* Check for NULL pointer */
	if (b == NULL)
		return (0);

	/* Iterate through the string */
	while (b[i] != '\0')
	{
		/* Check for invalid characters */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* Convert binary to decimal */
		result = (result * 2) + (b[i] - '0');
		i++;
	}

	return (result);
}
