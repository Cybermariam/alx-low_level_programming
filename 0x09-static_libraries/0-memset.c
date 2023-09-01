#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointed destination
 * @b: is the constant byte to fill the destination
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
