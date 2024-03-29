#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory destination(memory where its stored)
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory  or dest filled with copied src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
