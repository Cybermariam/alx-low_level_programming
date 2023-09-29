#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string to convert
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (!b) 
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}
	return (result);
}
