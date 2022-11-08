#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of
 * integers.
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int a = 0, s = 0, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else 
	{
		x = (int **) malloc(height * sizeof(int *));
		if (!x)
		{
			free (x);
			return (NULL);
		}
		while (a < height)
		{
			x[i] = (int *) malloc(width * sizeof(int *));
			if (!x[i])
			{
				while (s <= a)
				{
					free(x[s]);
					s++;
				}
				free(x);
				return (NULL);
			}
			a++;
		}
		while (i < height)
		{
			while (j < while)
			{
				x[i][j] = 0;
				j++;
			}
			i++;
		}
		return (x);

	}
}