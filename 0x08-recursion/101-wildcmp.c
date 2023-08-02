#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they are identical.
 * @s1: The first string.
 * @s2: The second string with special character *.
 *
 * Return: 1 if the strings are identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1); /* * at end can match any remaining chars in s1 */
else if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1)); /* Skip consecutive * in s2 */
else if (*s1 == '\0')
return (0); /* If s2 not at end but s1 is, they can't be identical */
else
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
/* Try matching * with & without current s1 char */
}
if (*s1 == *s2)
{
if (*s1 == '\0')
return (1); /* Both strings reached end, they are identical */
return (wildcmp(s1 + 1, s2 + 1)); /* Move to next character in both strings */
}
return (0); /* If chars don't match, strings are not identical */
}
