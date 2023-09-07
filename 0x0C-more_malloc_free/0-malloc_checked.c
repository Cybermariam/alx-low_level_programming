#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: input
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *newMem;

	newMem = malloc(sizeof(*newMem) * b);
	if (newMem == NULL)
		exit(98);
	return (newMem);
}
