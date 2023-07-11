#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *strConcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strConcat = malloc(sizeof(char) * (i + j + 1));

	if (strConcat == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		strConcat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strConcat[i] = s2[j];
		i++, j++;
	}

	strConcat[i] = '\0';

	return (strConcat);
}
