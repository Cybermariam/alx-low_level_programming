#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 success
 */

int main(int argc, char **argv)
{
	int x, y, mul;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
		printf("%d\n", mul);
		return (0);
}
