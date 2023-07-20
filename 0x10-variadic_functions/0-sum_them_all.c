#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all parameters
 * @n: is theargument count
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, result = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0; i < n; i++)
		result += va_arg(sum, int);

	va_end(sum);
	return (result);
}
