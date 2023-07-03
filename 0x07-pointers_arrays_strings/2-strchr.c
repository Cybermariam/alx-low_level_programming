#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
