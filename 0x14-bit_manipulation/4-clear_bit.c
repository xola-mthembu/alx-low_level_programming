#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to update.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(*n) * 8))
return (-1);
*n &= ~(1UL << index);
return (1);
}
