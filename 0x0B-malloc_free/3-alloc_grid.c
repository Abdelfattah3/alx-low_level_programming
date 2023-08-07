#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - creates an array
* @width : int
* @height : int
* Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **i;
	int h, w, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	i = malloc(width * sizeof(int *));
	if (i == NULL)
	{
		return (NULL);
		free (i);
	}
	for (w = 0; w < width; w++)
	{
		i[w] = malloc(height * sizeof(int));
		if (i[w] == NULL)
		{
			return (NULL);
			free (i[w]);
		}
	}
	{
		for (h = 0; h < height; h++)
			for (j = 0; j < width; j++)
			{
				i[h][j] = 0;
			}
	}
	return (i);
}
