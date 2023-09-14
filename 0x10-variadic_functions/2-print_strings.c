#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printStr;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;
	va_start(printStr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(printStr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(printStr);
}
