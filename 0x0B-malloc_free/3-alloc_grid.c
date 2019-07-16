#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* **alloc_grid - 2 dimensional array of integers
*@width: with of the grid
*@height: height of the grid
*Return: 0 (success)
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k, l;

	/**verify if with or height is 0*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/**asign size*/
	grid = malloc(height * sizeof(int *));

	/**verify if my pointer is null*/
	if (grid == NULL)
		return (NULL);

	/**Modify the size*/
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	/**fill the grid*/
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			grid[k][l] = 0;
		}
	}

	return (grid);
}
