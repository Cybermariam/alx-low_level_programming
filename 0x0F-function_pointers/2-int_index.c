#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for an integer
 * @array: an array to look through
 * @size:  size of the element in the  array
 * @cmp: a pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
