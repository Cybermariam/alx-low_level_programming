#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s != '\0' && strchr(accept, *s) != 0)
	{
		i++;
		s++;
	}
	return (i);
}
