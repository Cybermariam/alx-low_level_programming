#include "main.h"

/**
 * get_endianness - get endianness
 * Return: 0
*/
int get_endianness(void)
{
	int j = 100;
	char *ptr_s = (char *)&j;

	return (ptr_s[0]);
}
