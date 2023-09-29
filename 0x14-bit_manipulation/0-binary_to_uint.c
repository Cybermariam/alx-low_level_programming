#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string to convert
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int to_uint = 0;
	int i;

	if (b == NULL) 
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' )
			to_uint <<= 1;
		else if (b[i] == '1')
		{
			to_uint <<= 1;
			to_uint |= 1;
		}
		else
			return (0);
	}
	return (to_uint);
}
