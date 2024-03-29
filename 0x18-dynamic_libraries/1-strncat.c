#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be concatenated
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
