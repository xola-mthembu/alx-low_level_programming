/*
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @return: An int less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (0);
if (*s1 != '\0')
return (*s1);
return (-(*s2));
}
