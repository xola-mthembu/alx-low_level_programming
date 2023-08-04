/**
 * _strncpy - Copies up to n bytes of the source string to the destination.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 * @n: Maximum number of bytes to be copied.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
