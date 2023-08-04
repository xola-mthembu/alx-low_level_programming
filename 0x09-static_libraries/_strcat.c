/**
 * _strcat - Concatenates (appends) two strings.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string to be appended.
 *
 * Return: Pointer to the destination string.
 */
char *_strcat(char *dest, char *src)
{
char *start = dest;
/* Move the destination pointer to the end of the destination string */
while (*dest != '\0')
{
dest++;
}
/* Append the source string to the destination string */
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
/* Null-terminate the concatenated string */
*dest = '\0';
return (start);
}
