#include "main.h"
#include <string.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: is where to search the string from
 * @accept: is the string to search for
 *
 * Return; Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != 0)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
