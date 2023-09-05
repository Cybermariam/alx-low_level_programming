#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int lenTotal;
	char *concatArg;

	if (ac == 0 || av == NULL)
		return (NULL);
	lenTotal = 0;
	for (x = 0; x < ac; x++)
		lenTotal += strlen(av[x]) + 1;
	concatArg = (char *)malloc(sizeof(char) * lenTotal);
	if (concatArg == NULL)
		return (NULL);
	concatArg[0] = '\0';
	for (y = 0; y < ac; y++)
	{
		strcat(concatArg, av[y]);
		if (y != ac - 1)
		{
			strcat(concatArg, "\n");
		}
	}
	return (concatArg);
}
