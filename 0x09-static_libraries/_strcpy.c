/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be copied.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0'; /* Null-terminate the destination string */
return (start);
}
