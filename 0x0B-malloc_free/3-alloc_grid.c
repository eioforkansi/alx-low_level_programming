#include "main.h"

/**
 *alloc_grid - function that creates a grid on allocated memory
 *@width: width of the grid
 *@height: height of the grid
 *Return: NULL if insuficient memory,or else a pointer
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		p[h] = malloc(sizeof(int) * width);
		if (p[h] == NULL)
		{
			for (h = h; h >= 0; h--)
			{
				free(p[h]);
			}
			free(p);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			p[h][w] = 0;
		}
	}

	return (p);
}
