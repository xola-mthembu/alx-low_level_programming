#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: The format string indicating the types of arguments
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char sep = '\0';
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
sep = ',';
break;
}
if (format[i + 1] && sep != '\0')
printf("%c ", sep);
sep = '\0';
i++;
}
va_end(args);
printf("\n");
}
