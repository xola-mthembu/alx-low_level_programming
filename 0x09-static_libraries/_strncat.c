/**
 * _strncat - Concatenates (appends) two strings up to n bytes.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be appended.
 * @n: Maximum number of characters to be appended.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
/* Move the destination pointer to the end of the destination string */
while (*dest != '\0')
{
dest++;
}
/* Append the source string to the destination string up to n characters */
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
/* Null-terminate the concatenated string */
*dest = '\0';
return (start);
}
