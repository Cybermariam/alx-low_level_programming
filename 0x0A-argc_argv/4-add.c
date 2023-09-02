#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, add = 0;

	if (NULL)
		printf("%d\n", 0);

	if (argc >= 'a' && argc <= 'z') || (argc >= 'A' && argc <= 'Z')
	{
		printf("Error\n");
			return (1);
	}

	for (i = 1; i < argc; i++)
		add += argv[i];
	return (0);
}
