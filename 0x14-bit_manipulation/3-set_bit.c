#include "main.h"
#include <stddef.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to int
 * @i: index
 * Return: 1 on success
*/
int set_bit(unsigned long int *n, unsigned int i)
{
	if ((sizeof(*n) * 8) <= i || n == NULL)
		return (-1);
	*n = (*n) | (1 << i);
	return (1);
}
