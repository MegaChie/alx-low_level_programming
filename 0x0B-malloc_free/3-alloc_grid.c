#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of
 * integers.
 * @width: number of colomns
 * @height: number of raws
 */
int **alloc_grid(int width, int height)
{
	int i, j, a, s;
	int **x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		x = (int **) malloc(height * sizeof(int *));
		if (!x)
		{
			free(x);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			x[i] = (int *) malloc(width * sizeof(int));
			if (!x[i])
			{
				for (j = 0; j <= i; j++)
					free(x[j]);
				free(x);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (s = 0; s < width; s++)
			{
				x[a][s] = 0;
			}
		}
		return (x);
	}
}
