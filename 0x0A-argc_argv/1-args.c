#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
