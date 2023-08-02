#include "main.h"
/**
 * _strlen - Calculate the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen(s + 1));
}
/**
 * is_palindrome_helper - Helper function to check if a string is palindrome.
 * @s: The string to check.
 * @start: The start index of the string.
 * @end: The end index of the string.
 *
 * Return: 1 if the string is palindrome, otherwise return 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is palindrome, otherwise return 0.
 */
int is_palindrome(char *s)
{
int length = _strlen(s);
return (is_palindrome_helper(s, 0, length - 1));
}
