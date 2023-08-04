/**
 * _memcpy - Copies n bytes from the source memory area to the destination.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
