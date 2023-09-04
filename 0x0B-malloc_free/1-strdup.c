#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that return a pointer to a new string
 * which is a duplicate of the string str
 * @str: string
 * Return: a pointer to a new string
 */

char *_strdup(char *str)
{
	unsigned int newlength;
	char *copy;

	if (str == NULL)
		return (NULL);
	newlength = strlen(str);
	copy = (char *)malloc(sizeof(char) * (newlength + 1));
	if (copy == NULL)
		return (NULL);
	strcpy(copy, str);

	return (copy);
}
