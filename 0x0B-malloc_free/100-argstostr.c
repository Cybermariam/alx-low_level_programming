#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: input
 * @av: input
 * Return: 0;
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	concat = malloc(sizeof(char) * d + 1);
	if (concat == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			concat[c] = av[a][b];
			c++;
		}
		if (concat[c] == '\0')
		{
			concat[c++] = '\n';
		}
	}
	return (concat);
}
