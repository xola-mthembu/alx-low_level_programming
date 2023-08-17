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
int print_sep = 0;
va_start(args, format);
while (format && format[i])
{
if (print_sep)
printf(", ");
print_sep = 1;
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
{
char *str = va_arg(args, char *);
printf("%s", str ? str : "(nil)");
break;
}
default:
print_sep = 0;
break;
}
i++;
}
printf("\n");
va_end(args);
}
