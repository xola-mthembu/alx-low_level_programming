#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using the given function
 * @name: Name to print
 * @f: Function pointer to the printing function
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
