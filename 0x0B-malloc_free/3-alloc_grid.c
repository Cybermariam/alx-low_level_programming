#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width array
 * @height: height array
 */

int **alloc_grid(int width, int height)
{
	int **allocGrid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	allocGrid = (int **)malloc(sizeof(int *) * height);
	if (allocGrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		allocGrid[i] = (int *)malloc(sizeof(int) * width);
		if (allocGrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(allocGrid[j]);
		free(allocGrid);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			allocGrid[i][j] = 0;
		}
	}
		return (allocGrid);
}
