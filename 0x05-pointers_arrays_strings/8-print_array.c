#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * followed by new line.
 * @a: is the input array
 * @n: is the length of the array
 *
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
