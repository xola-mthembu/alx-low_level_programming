/**
 * _strspn - Calculates the length of the initial segment of a string
 * that consists entirely of characters from another string.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of characters in the initial segment of s that match
 * any character in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int count = 0;
int found;
for (i = 0; s[i] != '\0'; i++)
{
found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found)
{
count++;
}
else
{
break;
}
}
return (count);
}
