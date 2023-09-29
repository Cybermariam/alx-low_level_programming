#include "main.h"

/**
 * flip_bits - function that returns the num of bits you would need to flip
 * @m: first number
 * @n: second number
 * Return: flip count;
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = 0;

	while (m > 0 || n > 0)
	{
		if (((m ^ n) & 1) == 1)
			result++;
		m >>= 1;
		n >>= 1;
	}
	return (result);
}
