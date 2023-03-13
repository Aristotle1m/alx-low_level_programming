#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @w: width of int
 * @h: height of int
 * Return: NULL if width or height is 0 or negative
*/

int **alloc_grid(int w, int h)
{
	int **grid;
	int x, y;

	if (w + h < 2 || w < 1 || h < 1)
		return (NULL);

	grid = malloc(sizeof(*grid) * h);
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < h; x++)
	{
		grid[x] = malloc(sizeof(**grid) * w);
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < w; y++)
			grid[x][y] = 0;
	}
	return (grid);
}
