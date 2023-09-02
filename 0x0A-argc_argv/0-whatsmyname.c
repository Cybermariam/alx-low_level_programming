#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
