#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: the pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
