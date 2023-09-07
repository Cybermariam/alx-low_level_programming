#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string to concat
 * @s2:string to concat
 * @n: number of string to concat
 * Return: the new pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	len = s1_len + s2_len;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	if (n >= s2_len)
		s2 = s2;
	strncpy(ptr, s1, s1_len);
	strncat(ptr, s2, n);

	return (ptr);
}
