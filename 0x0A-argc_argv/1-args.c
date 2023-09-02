#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
