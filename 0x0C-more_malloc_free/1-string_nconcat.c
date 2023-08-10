#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len_s1 = 0, len_s2 = 0, i;
char *result;
if (s1 != NULL)
len_s1 = strlen(s1);
if (s2 != NULL)
len_s2 = strlen(s2);
if (n >= len_s2)
n = len_s2;
result = malloc(len_s1 + n + 1);
if (result == NULL)
return (NULL);
for (i = 0; i < len_s1; i++)
result[i] = s1[i];
for (i = 0; i < n; i++)
result[len_s1 + i] = s2[i];
result[len_s1 + n] = '\0';
return (result);
}
