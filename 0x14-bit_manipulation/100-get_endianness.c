#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int num = 1;
char *endian = (char *)&num;
/* If the least significant byte (LSB) is 1, it's little endian */
if (*endian == 1)
return (1);
else
return (0);
}
