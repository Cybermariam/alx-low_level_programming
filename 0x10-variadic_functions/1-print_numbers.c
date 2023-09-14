#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: is the string to be printed
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printNum;
	unsigned int i;
	int num;

	if (separator == NULL)
		return;
	va_start(printNum, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(printNum, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(printNum);
}
