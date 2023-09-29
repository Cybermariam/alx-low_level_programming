#include "main.h"
#include <stddef.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number to set
 * @i: index
 * Return: 1 on success
*/
int clear_bit(unsigned long int *n, unsigned int i)
{
	if ((sizeof(*n) * 8) <= i || n == NULL)
		return (-1);
	*n = (*n) & (~(1 << i));
	return (1);
}
