#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of bytes
 * Return:m pointer to nthe resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strncat(concat, s2, n);

	return (concat);
}
