#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: store the value of b
 * @b: stores the value of a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;

	*b = *a;
	*a = change;
}
