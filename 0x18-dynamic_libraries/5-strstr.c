#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: is where to check the substring occurnce from
 * @needle: is the occurence to check from haystack
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{

	int needleSize = strlen(needle);

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, needleSize) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
