#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	unsigned int len;

	if (s1 == NULL) 
		s1 = "";
	if ( s2 == NULL)
		s2 = "";
	len = strlen(s1) + strlen(s2);
	concatStr = (char *)malloc(sizeof(char) * (len + 1));
	if (concatStr == NULL)
		return (NULL);
	strcpy(concatStr, s1);
	strcat(concatStr, s2);

	return (concatStr);
}
