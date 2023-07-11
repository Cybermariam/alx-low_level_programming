#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width input
 * @height: the heigt input
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **arrGrid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrGrid = malloc(sizeof(int *) * height);
	if (arrGrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arrGrid[i] = malloc(sizeof(int) * width);

		if (arrGrid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arrGrid[i]);

			free(arrGrid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arrGrid[i][j] = 0;
	}
	return (arrGrid);
}
