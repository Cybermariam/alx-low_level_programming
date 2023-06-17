#include <stdio.h>

/**
 * main - prints all the numbers between 0 t0 9 and letters between a to f.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
