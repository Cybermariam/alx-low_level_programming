#include <stdio.h>
#include "main.h"

/**
 * main - print the name of a program
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
