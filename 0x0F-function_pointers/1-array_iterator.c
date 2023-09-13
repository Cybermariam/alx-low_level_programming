#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function parameter on each element of an array.
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to the function to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
