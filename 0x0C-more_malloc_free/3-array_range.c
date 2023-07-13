#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *newArr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	newArr = malloc(sizeof(int) * size);

	if (newArr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		newArr[i] = min++;

	return (newArr);
}
