#include "main.h"

/**
 *free_grid - function that free a grid on allocated memory
 *@grid: pointer to grid which is to be freed
 *@height: height of the grid
 *Return: NULL if insuficient memory,or else a pointer
 */

void free_grid(int **grid, int height)
{
	for (height = height; height >= 0; height --)
		free(grid[height]);

	free(grid);
}
