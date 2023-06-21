#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int j, k, next, result;

	j = 1;
	k = 2;
	result = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			result = result + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", result);

	return (0);
}
