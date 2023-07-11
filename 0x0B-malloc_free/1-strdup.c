#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate the str to a new memory location
 * @str: the string to duplicate
 * Return: 0
 */
char *_strdup(char *str)
{
	char *newStr;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;
	newStr = malloc(sizeof(char) * (i + 1));

	if (newStr == NULL)
		return (NULL);
	strcpy(newStr, str);

	return (newStr);
}
